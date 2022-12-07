# SwiftMockzilla

This repository exists to host the SPM package for Mockzilla. 

Any issues or feedback should be reported against the main repository here: [](https://github.com/Apadmi-Engineering/Mockzilla/issues).

# SPM Dependency

TODO: Remove the token (and invalidate it) once we've gone open source.

Simply add the package url through XCode:

```
https://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@github.com/Apadmi-Engineering/apadmi-mockzilla-ios.git
```


## Starting the server

Starting Mockzilla consists of calling a top level function, providing the config for your app.

```
let config = MockzillaConfig.Builder()
   .addEndpoint(endpoint: endpoint1)
   .addEndpoint(endpoint: endpoint2)
   .build()

startMockzilla(config)

```


## Calling the server

Mockzilla runs on device, i.e. on localhost. By default the port is 8080 and your configured endpoints are surfaced on the `local-mock` path. 

In other words your base url should be: `http://localhost:8080/local-mock`.

You can also access the baseUrl by calling `config.baseUrl` on your mockzilla config.


### Tips

Ensure your laptop and device are on the same wifi network. You can replace `localhost` with your device's IP addresss and try calling these endpoints from Postman (or a similar REST client.)

The following is what we get with the configuration in the following "Defining Mock Data" section.


![alt text](docs/postman-example.png "Postman example")

## Defining Mock Data

Constructing endpoints is straightforward. In this example, any request who's `uri` ends with "cow" will match to this endpoint, and therefore the response will be determined by this config.

If a request is made which doesn't match any endpoint, an error is returned.

```
let getMyCow = EndpointConfiguration.Builder(id: "cow")
					.setSwiftPatternMatcher {
                    $0.uri.hasSuffix("cow")
                }
                .setDefaultHandler { request in
                    let request = try! GetCowRequestDto.fromJson(
                        data: request.body.data(using: .utf8)!
                    )
                    
                    return MockzillaHttpResponse(
                        statusCode: HttpStatusCode.BadRequest,
                        headers: ["i_am_a_cow": "Yes a great cow"],
                        body: CowDto(
                            name: "Bessie",
                            age: 41,
                            likesGrass: true,
                            hasHorns: false,
                            mooSample: "Mooooooooooooo",
                            someValueFromRequest: request.aValueInTheRequest
                        ).toJson()
                    )
                }.build()

let config = MockzillaConfig.Builder()
    .addEndpoint(endpoint: getMyCow)
    .build()

startMockzilla(config)

```
JSON parsing is beyond the scope of this documentation, but see the full example [here](https://github.com/Apadmi-Engineering/Mockzilla/blob/develop/demo-ios/demo-ios/MockServerConfig.swift).


For configuring custom status codes and headers, see the advanced example below.


## Simulating Network Delay

To prevent all network requests completing immediately without any lag (which would be unrealistic for a real server). We can specify a delay *mean* and *variance*. 

Each network request will artificially delayed somewhere from `mean - variance` to `mean + variance` milliseconds.

| Defaults  | |
| --------- | ------ |
| Mean      | 100ms  |
| Variance  | 20ms   |


These values can be configured by calling the following on your top level config. (These can be overriden by calling methods of the same name on individual endpoints).

```
val config = MockzillaConfig.Builder()
   .setMeanDelayMillis(delay: value)
   .setDelayVarianceMillis(variance: value)
   .build()

startMockzilla(config)

```


## Simulating Errors

Mockzilla is designed around mimicking the behaviour of your app's real server. This includes simulating random failures.

By design, each call to Mockzilla can either succeed (and call the `defaultHandler`) or fail (and call the `errorHandler`). Both of which can be defined while defining an endpoint.

By default Mockzilla fails its calls 0% of the time (i.e. never). 
This can be changed by calling the following on your Mockzilla config:

```
let config = MockzillaConfig.Builder()
	.setFailureProbability(percentage: value)
   .build()

startMockzilla(config)

```

## Logging

By default Mockzilla outputs minimal logging. If more is needed to help with debugging, enable it as follows.


```
let config = MockzillaConfig.Builder()
    .setLogLevel(level: LogLevel.verbose)
    .build()

startMockzilla(config)

```

## More advanced example

This example uses all the utilities described and others.

```

let getMyCow = EndpointConfiguration.Builder("cow") // Endpoint Id
    // Pattern matcher, determines whether a given request should be mapped to this endpoint
    .setSwiftPatternMatcher { $0.uri.hasSuffix("cow") }
    // Optional - Default response used by the Mockzilla web portal
    .setWebApiDefaultResponse(response: MockzillaHttpResponse(body: CowDto.empty.toJson()))
    // Default handler - The invoked where you should return your mock response
    .setDefaultHandler { request in
        let request = try! GetCowRequestDto.fromJson(
            data: request.body.data(using: .utf8)!
        )
        
        return MockzillaHttpResponse(
            statusCode: HttpStatusCode.BadRequest,
            headers: ["i_am_a_cow": "Yes a great cow"],
            body: CowDto(
                name: "Bessie",
                age: 41,
                likesGrass: true,
                hasHorns: false,
                mooSample: "Mooooooooooooo",
                someValueFromRequest: request.aValueInTheRequest
            ).toJson()
        )
    }
    // Optional - Error handler - called when Mockzilla decides to fail a request 
    .setErrorHandler { _ in
        MockzillaHttpResponse(status: HttpStatusCode.InternalServerError)
    }
    // Optional = Overrides the values in the main config
	.setFailureProbability(percentage: 0)
	.setMeanDelayMillis(delay: 10)
	.setDelayVarianceMillis(variance: 0)

val config = MockzillaConfig.Builder()
	.addEndpoint(endpoint: getMyCow)
	.setLogLevel(level: LogLevel.verbose)
	.setFailureProbability(percentage: 0)
	.setMeanDelayMillis(delay: 10)
	.setDelayVarianceMillis(variance: 0)
	.setPort(port: 8081)
	.setAppName(name: "My example") // Used by web portal
	.setAppPackage(appPackage: "com.apadmi.example")  // Used by web portal
	.build()

startMockzilla(config)




```