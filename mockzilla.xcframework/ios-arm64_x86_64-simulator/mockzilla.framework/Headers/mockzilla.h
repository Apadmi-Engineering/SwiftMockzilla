#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MockzillaKotlinArray<T>, MockzillaKotlinByteArray, MockzillaKotlinByteIterator, MockzillaKotlinEnum<E>, MockzillaKotlinEnumCompanion, MockzillaKotlinException, MockzillaKotlinIllegalStateException, MockzillaKotlinNothing, MockzillaKotlinRuntimeException, MockzillaKotlinThrowable, MockzillaKotlinUnit, MockzillaKotlinx_serialization_coreSerialKind, MockzillaKotlinx_serialization_coreSerializersModule, MockzillaKtor_httpHttpMethod, MockzillaKtor_httpHttpMethodCompanion, MockzillaKtor_httpHttpStatusCode, MockzillaKtor_httpHttpStatusCodeCompanion, MockzillaMockzilla_commonAuthHeaderProviderHeader, MockzillaMockzilla_commonDashboardOptionsConfig, MockzillaMockzilla_commonDashboardOptionsConfigBuilder, MockzillaMockzilla_commonDashboardOptionsConfigCompanion, MockzillaMockzilla_commonDashboardOverridePreset, MockzillaMockzilla_commonDashboardOverridePresetCompanion, MockzillaMockzilla_commonDashboardOverridePresetType, MockzillaMockzilla_commonDashboardOverridePresetTypeCompanion, MockzillaMockzilla_commonEndpointConfiguration, MockzillaMockzilla_commonEndpointConfigurationBuilder, MockzillaMockzilla_commonMockzillaConfig, MockzillaMockzilla_commonMockzillaConfigBuilder, MockzillaMockzilla_commonMockzillaConfigBuilderCompanion, MockzillaMockzilla_commonMockzillaConfigLogLevel, MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig, MockzillaMockzilla_commonMockzillaHttpResponse, MockzillaMockzilla_commonMockzillaHttpResponseCompanion, MockzillaMockzilla_commonMockzillaRuntimeParams, MockzillaMockzilla_commonPartialMockzillaHttpResponse, MockzillaMockzilla_commonPartialMockzillaHttpResponseCompanion;

@protocol MockzillaKotlinAnnotation, MockzillaKotlinComparable, MockzillaKotlinFunction, MockzillaKotlinIterator, MockzillaKotlinKAnnotatedElement, MockzillaKotlinKClass, MockzillaKotlinKClassifier, MockzillaKotlinKDeclarationContainer, MockzillaKotlinSuspendFunction1, MockzillaKotlinx_serialization_coreCompositeDecoder, MockzillaKotlinx_serialization_coreCompositeEncoder, MockzillaKotlinx_serialization_coreDecoder, MockzillaKotlinx_serialization_coreDeserializationStrategy, MockzillaKotlinx_serialization_coreEncoder, MockzillaKotlinx_serialization_coreKSerializer, MockzillaKotlinx_serialization_coreSerialDescriptor, MockzillaKotlinx_serialization_coreSerializationStrategy, MockzillaKotlinx_serialization_coreSerializersModuleCollector, MockzillaMockzilla_commonAuthHeaderProvider, MockzillaMockzilla_commonMockzillaHttpRequest, MockzillaMockzilla_commonMockzillaLogWriter;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MockzillaBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MockzillaBase (MockzillaBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MockzillaMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MockzillaMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMockzillaKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MockzillaNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MockzillaByte : MockzillaNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MockzillaUByte : MockzillaNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MockzillaShort : MockzillaNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MockzillaUShort : MockzillaNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MockzillaInt : MockzillaNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MockzillaUInt : MockzillaNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MockzillaLong : MockzillaNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MockzillaULong : MockzillaNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MockzillaFloat : MockzillaNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MockzillaDouble : MockzillaNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MockzillaBoolean : MockzillaNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AsyncUtilsKt")))
@interface MockzillaAsyncUtilsKt : MockzillaBase
+ (void)setDefaultHandlerCallbackBuilder:(MockzillaMockzilla_commonEndpointConfigurationBuilder *)builder block:(void (^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>, MockzillaKotlinUnit *(^)(MockzillaMockzilla_commonMockzillaHttpResponse *)))block __attribute__((swift_name("setDefaultHandlerCallback(builder:block:)")));
+ (void)setErrorHandlerCallbackBuilder:(MockzillaMockzilla_commonEndpointConfigurationBuilder *)builder block:(void (^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>, MockzillaKotlinUnit *(^)(MockzillaMockzilla_commonMockzillaHttpResponse *)))block __attribute__((swift_name("setErrorHandlerCallback(builder:block:)")));
+ (void)setPatternMatcherCallbackBuilder:(MockzillaMockzilla_commonEndpointConfigurationBuilder *)builder block:(void (^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>, MockzillaKotlinUnit *(^)(MockzillaBoolean *)))block __attribute__((swift_name("setPatternMatcherCallback(builder:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaKt")))
@interface MockzillaMockzillaKt : MockzillaBase

/**
 * Starts the Mockzilla server.
 *
 * @param config The config with which to initialise mockzilla.
 * @throws PortConflictException if the port specified in [config] is already in use.
 *
 * @note This method converts instances of PortConflictException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (MockzillaMockzilla_commonMockzillaRuntimeParams * _Nullable)startMockzillaConfig:(MockzillaMockzilla_commonMockzillaConfig *)config error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startMockzilla(config:)")));

/**
 * Stops the running Mockzilla server.
 *
 */
+ (void)stopMockzilla __attribute__((swift_name("stopMockzilla()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NestedClassBridgeGenerationKt")))
@interface MockzillaNestedClassBridgeGenerationKt : MockzillaBase

/**
 * For some infuriating reason, nested classes defined in dependent modules don't automatically have
 * headers generated unless they're being used within the module. This usage forces the generation
 * of the headers.
 *
 * @param noop [MockzillaConfig.Builder] Just a reference to the builder to force the header generation.
 * @return
 */
+ (void)noOpConfigBuilderNoop:(MockzillaMockzilla_commonMockzillaConfigBuilder *)noop __attribute__((swift_name("noOpConfigBuilder(noop:)")));
@end


/**
 * @param key An identifier for this endpoint. Endpoints cannot share an id.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonEndpointConfiguration.Builder")))
@interface MockzillaMockzilla_commonEndpointConfigurationBuilder : MockzillaBase
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));

/**
 * Completes the builder - returns the configuration.
 *
 * @return [EndpointConfiguration]
 */
- (MockzillaMockzilla_commonEndpointConfiguration *)build __attribute__((swift_name("build()")));

/**
 * Configure the presets that are available to users of the dashboard.
 *
 * @param action Builder block for configuring dashboard presets.
 * @return This builder, for chaining.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)configureDashboardOverridesAction:(MockzillaMockzilla_commonDashboardOptionsConfigBuilder *(^)(MockzillaMockzilla_commonDashboardOptionsConfigBuilder *))action __attribute__((swift_name("configureDashboardOverrides(action:)")));

/**
 * The block called when a network request is made to this endpoint. Note: If the value of
 * [setShouldFail] causes Mockzilla to generate a failure response, then this block
 * will *not* be called, instead the block specified by [setErrorHandler] is called.
 *
 * @param handler Lambda invoked with the incoming request that returns the mock response.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setDefaultHandlerHandler:(id<MockzillaKotlinSuspendFunction1>)handler __attribute__((swift_name("setDefaultHandler(handler:)")));

/**
 * Used to simulate latency: The artificial delay Mockzilla with add to the network request.
 *
 * @param delay delay in milliseconds
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setDelayMillisDelay:(int32_t)delay __attribute__((swift_name("setDelayMillis(delay:)")));

/**
 * The block called when a network request is made to this endpoint but Mockzilla decides to
 * simulate a server failure.
 *
 * @param handler Lambda invoked with the incoming request that returns the simulated error response.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setErrorHandlerHandler:(id<MockzillaKotlinSuspendFunction1>)handler __attribute__((swift_name("setErrorHandler(handler:)")));

/**
 * Probability of Mockzilla returning a simulated http error for this endpoint. 100 being a
 * guaranteed error .
 *
 * @param percentage (0 -> 100 inclusive)
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setFailureProbabilityPercentage:(int32_t)percentage __attribute__((swift_name("setFailureProbability(percentage:)"))) __attribute__((deprecated("Probabilities are no longer supported")));

/**
 * Used to simulate latency: The artificial mean delay Mockzilla with add to a network request.
 *
 * @param delay delay in milliseconds
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setMeanDelayMillisDelay:(int32_t)delay __attribute__((swift_name("setMeanDelayMillis(delay:)"))) __attribute__((deprecated("Delay is now constant with no variance")));

/**
 * Sets the human readable name of the endpoint (defaults to the value of the `key`)
 *
 * @param name The human-readable display name for this endpoint.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setNameName:(NSString *)name __attribute__((swift_name("setName(name:)")));

/**
 * Specifies whether Mockzilla should map a network request to this endpoint.
 *
 * Used to map an incoming network request to the correct endpoint. The URI is matched against
 * the given regex.
 *
 * This is just a utility wrapper around the more flexible [setPatternMatcher] endpoint.
 *
 * @param regex The regular expression to match against the full request URI.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setPatternRegex:(NSString *)regex __attribute__((swift_name("setPattern(regex:)")));

/**
 * Specifies whether Mockzilla should map a network request to this endpoint.
 *
 * @param matcher Used to map an incoming network request to the correct endpoint.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setPatternMatcherMatcher:(id<MockzillaKotlinSuspendFunction1>)matcher __attribute__((swift_name("setPatternMatcher(matcher:)")));

/**
 * Controls whether calls to this endpoint should fail by default
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setShouldFailShouldFail:(BOOL)shouldFail __attribute__((swift_name("setShouldFail(shouldFail:)")));

/**
 * Sets the version this endpoint is currently set to. A change in the version code will
 * automatically clear any caches on the device associated with this endpoint.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setVersionCodeCode:(int32_t)code __attribute__((swift_name("setVersionCode(code:)")));
@end

__attribute__((swift_name("Mockzilla_commonMockzillaHttpRequest")))
@protocol MockzillaMockzilla_commonMockzillaHttpRequest
@required

/**
 * @return The request body as a ByteArray. Probably only useful for non-string request payload.
 * Most use cases probably should use [bodyAsString]
 * It's safe to call this method multiple times.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyAsBytesWithCompletionHandler:(void (^)(MockzillaKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyAsBytes(completionHandler:)")));

/**
 * @return The request body as a string. It's safe to call this method multiple times.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyAsStringWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyAsString(completionHandler:)")));

/**
 * Network request's headers
 */
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));

/**
 * Network request method
 */
@property (readonly) MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * The full uri of the network request
 */
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MockzillaKotlinUnit : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * An HTTP response returned by a mock endpoint handler. Returned from
 * [EndpointConfiguration.Builder.setDefaultHandler] and [EndpointConfiguration.Builder.setErrorHandler]
 * lambdas.
 *
 * @property statusCode The HTTP status code of the response. Defaults to `200 OK`.
 * @property headers HTTP response headers.
 * @property body The response body as a string.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaHttpResponse")))
@interface MockzillaMockzilla_commonMockzillaHttpResponse : MockzillaBase
- (instancetype)initWithStatusCode:(MockzillaKtor_httpHttpStatusCode *)statusCode headers:(NSDictionary<NSString *, NSString *> *)headers body:(NSString *)body __attribute__((swift_name("init(statusCode:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonMockzillaHttpResponseCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMockzilla_commonMockzillaHttpResponse *)doCopyStatusCode:(MockzillaKtor_httpHttpStatusCode *)statusCode headers:(NSDictionary<NSString *, NSString *> *)headers body:(NSString *)body __attribute__((swift_name("doCopy(statusCode:headers:body:)")));

/**
 * An HTTP response returned by a mock endpoint handler. Returned from
 * [EndpointConfiguration.Builder.setDefaultHandler] and [EndpointConfiguration.Builder.setErrorHandler]
 * lambdas.
 *
 * @property statusCode The HTTP status code of the response. Defaults to `200 OK`.
 * @property headers HTTP response headers.
 * @property body The response body as a string.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * An HTTP response returned by a mock endpoint handler. Returned from
 * [EndpointConfiguration.Builder.setDefaultHandler] and [EndpointConfiguration.Builder.setErrorHandler]
 * lambdas.
 *
 * @property statusCode The HTTP status code of the response. Defaults to `200 OK`.
 * @property headers HTTP response headers.
 * @property body The response body as a string.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MockzillaMockzilla_commonPartialMockzillaHttpResponse *)toPartial __attribute__((swift_name("toPartial()")));

/**
 * An HTTP response returned by a mock endpoint handler. Returned from
 * [EndpointConfiguration.Builder.setDefaultHandler] and [EndpointConfiguration.Builder.setErrorHandler]
 * lambdas.
 *
 * @property statusCode The HTTP status code of the response. Defaults to `200 OK`.
 * @property headers HTTP response headers.
 * @property body The response body as a string.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/apadmi/mockzilla/lib/internal/utils/HttpStatusCodeSerializer))
*/
@property (readonly) MockzillaKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MockzillaKotlinThrowable : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MockzillaKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MockzillaKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MockzillaKotlinException : MockzillaKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MockzillaKotlinRuntimeException : MockzillaKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * Thrown when attempting to start the Mockzilla server on a port that is occupied by another
 * process. To resolve, either terminate the process occupying the port or update your
 * `MockzillaConfig`.
 *
 * @property port The number of the port that was used to start the Mockzilla server.
 * @property cause
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonPortConflictException")))
@interface MockzillaMockzilla_commonPortConflictException : MockzillaKotlinRuntimeException
- (instancetype)initWithPort:(int32_t)port cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(port:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) MockzillaKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@end


/**
 * Runtime details of a started Mockzilla server, returned by `startMockzilla`. Use [mockBaseUrl]
 * as the base URL in the app under test's HTTP client to route requests through the mock server.
 *
 * @property config The configuration the server was started with.
 * @property ip The IP address the server is listening on.
 * @property mockBaseUrl Base URL for mock endpoint requests. Configure the app under test's HTTP
 * client to use this URL.
 * @property apiBaseUrl Base URL for the Mockzilla control API.
 * @property port The port the server is bound to.
 * @property authHeaderProvider Provides authentication headers for making requests to this server
 * instance.
 * @property mockzillaVersion The version of the Mockzilla library.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaRuntimeParams")))
@interface MockzillaMockzilla_commonMockzillaRuntimeParams : MockzillaBase
- (instancetype)initWithConfig:(MockzillaMockzilla_commonMockzillaConfig *)config ip:(NSString *)ip mockBaseUrl:(NSString *)mockBaseUrl apiBaseUrl:(NSString *)apiBaseUrl port:(int32_t)port authHeaderProvider:(id<MockzillaMockzilla_commonAuthHeaderProvider>)authHeaderProvider mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("init(config:ip:mockBaseUrl:apiBaseUrl:port:authHeaderProvider:mockzillaVersion:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonMockzillaRuntimeParams *)doCopyConfig:(MockzillaMockzilla_commonMockzillaConfig *)config ip:(NSString *)ip mockBaseUrl:(NSString *)mockBaseUrl apiBaseUrl:(NSString *)apiBaseUrl port:(int32_t)port authHeaderProvider:(id<MockzillaMockzilla_commonAuthHeaderProvider>)authHeaderProvider mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("doCopy(config:ip:mockBaseUrl:apiBaseUrl:port:authHeaderProvider:mockzillaVersion:)")));

/**
 * Runtime details of a started Mockzilla server, returned by `startMockzilla`. Use [mockBaseUrl]
 * as the base URL in the app under test's HTTP client to route requests through the mock server.
 *
 * @property config The configuration the server was started with.
 * @property ip The IP address the server is listening on.
 * @property mockBaseUrl Base URL for mock endpoint requests. Configure the app under test's HTTP
 * client to use this URL.
 * @property apiBaseUrl Base URL for the Mockzilla control API.
 * @property port The port the server is bound to.
 * @property authHeaderProvider Provides authentication headers for making requests to this server
 * instance.
 * @property mockzillaVersion The version of the Mockzilla library.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Runtime details of a started Mockzilla server, returned by `startMockzilla`. Use [mockBaseUrl]
 * as the base URL in the app under test's HTTP client to route requests through the mock server.
 *
 * @property config The configuration the server was started with.
 * @property ip The IP address the server is listening on.
 * @property mockBaseUrl Base URL for mock endpoint requests. Configure the app under test's HTTP
 * client to use this URL.
 * @property apiBaseUrl Base URL for the Mockzilla control API.
 * @property port The port the server is bound to.
 * @property authHeaderProvider Provides authentication headers for making requests to this server
 * instance.
 * @property mockzillaVersion The version of the Mockzilla library.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Runtime details of a started Mockzilla server, returned by `startMockzilla`. Use [mockBaseUrl]
 * as the base URL in the app under test's HTTP client to route requests through the mock server.
 *
 * @property config The configuration the server was started with.
 * @property ip The IP address the server is listening on.
 * @property mockBaseUrl Base URL for mock endpoint requests. Configure the app under test's HTTP
 * client to use this URL.
 * @property apiBaseUrl Base URL for the Mockzilla control API.
 * @property port The port the server is bound to.
 * @property authHeaderProvider Provides authentication headers for making requests to this server
 * instance.
 * @property mockzillaVersion The version of the Mockzilla library.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiBaseUrl __attribute__((swift_name("apiBaseUrl")));
@property (readonly) id<MockzillaMockzilla_commonAuthHeaderProvider> authHeaderProvider __attribute__((swift_name("authHeaderProvider")));
@property (readonly) MockzillaMockzilla_commonMockzillaConfig *config __attribute__((swift_name("config")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@property (readonly) NSString *mockBaseUrl __attribute__((swift_name("mockBaseUrl")));
@property (readonly) NSString *mockzillaVersion __attribute__((swift_name("mockzillaVersion")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@end


/**
 * Top-level configuration for a Mockzilla server instance. All properties are set via
 * [MockzillaConfig.Builder].
 *
 * @property port The port the server binds to. `0` causes the OS to assign an available port.
 * @property endpoints The mock endpoints registered on this server.
 * @property isRelease When `true`, activates release mode: rate limiting, token authentication,
 * and localhost-only restrictions are applied. See [ReleaseModeConfig] for details.
 * @property localhostOnly When `true`, the server only accepts connections from `127.0.0.1`,
 * blocking the management desktop interface and other external tools.
 * @property logLevel Verbosity of Mockzilla's internal logging.
 * @property releaseModeConfig Rate limiting and authentication config applied in release mode.
 * @property isNetworkDiscoveryEnabled When `true`, Mockzilla broadcasts itself via ZeroConf
 * (Bonjour) so the management desktop can discover it. Always disabled in release mode.
 * @property additionalLogWriters Extra log sinks in addition to standard output.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig")))
@interface MockzillaMockzilla_commonMockzillaConfig : MockzillaBase
- (instancetype)initWithPort:(int32_t)port endpoints:(NSArray<MockzillaMockzilla_commonEndpointConfiguration *> *)endpoints isRelease:(BOOL)isRelease localhostOnly:(BOOL)localhostOnly logLevel:(MockzillaMockzilla_commonMockzillaConfigLogLevel *)logLevel releaseModeConfig:(MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig *)releaseModeConfig isNetworkDiscoveryEnabled:(BOOL)isNetworkDiscoveryEnabled additionalLogWriters:(NSArray<id<MockzillaMockzilla_commonMockzillaLogWriter>> *)additionalLogWriters __attribute__((swift_name("init(port:endpoints:isRelease:localhostOnly:logLevel:releaseModeConfig:isNetworkDiscoveryEnabled:additionalLogWriters:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonMockzillaConfig *)doCopyPort:(int32_t)port endpoints:(NSArray<MockzillaMockzilla_commonEndpointConfiguration *> *)endpoints isRelease:(BOOL)isRelease localhostOnly:(BOOL)localhostOnly logLevel:(MockzillaMockzilla_commonMockzillaConfigLogLevel *)logLevel releaseModeConfig:(MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig *)releaseModeConfig isNetworkDiscoveryEnabled:(BOOL)isNetworkDiscoveryEnabled additionalLogWriters:(NSArray<id<MockzillaMockzilla_commonMockzillaLogWriter>> *)additionalLogWriters __attribute__((swift_name("doCopy(port:endpoints:isRelease:localhostOnly:logLevel:releaseModeConfig:isNetworkDiscoveryEnabled:additionalLogWriters:)")));

/**
 * Top-level configuration for a Mockzilla server instance. All properties are set via
 * [MockzillaConfig.Builder].
 *
 * @property port The port the server binds to. `0` causes the OS to assign an available port.
 * @property endpoints The mock endpoints registered on this server.
 * @property isRelease When `true`, activates release mode: rate limiting, token authentication,
 * and localhost-only restrictions are applied. See [ReleaseModeConfig] for details.
 * @property localhostOnly When `true`, the server only accepts connections from `127.0.0.1`,
 * blocking the management desktop interface and other external tools.
 * @property logLevel Verbosity of Mockzilla's internal logging.
 * @property releaseModeConfig Rate limiting and authentication config applied in release mode.
 * @property isNetworkDiscoveryEnabled When `true`, Mockzilla broadcasts itself via ZeroConf
 * (Bonjour) so the management desktop can discover it. Always disabled in release mode.
 * @property additionalLogWriters Extra log sinks in addition to standard output.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Top-level configuration for a Mockzilla server instance. All properties are set via
 * [MockzillaConfig.Builder].
 *
 * @property port The port the server binds to. `0` causes the OS to assign an available port.
 * @property endpoints The mock endpoints registered on this server.
 * @property isRelease When `true`, activates release mode: rate limiting, token authentication,
 * and localhost-only restrictions are applied. See [ReleaseModeConfig] for details.
 * @property localhostOnly When `true`, the server only accepts connections from `127.0.0.1`,
 * blocking the management desktop interface and other external tools.
 * @property logLevel Verbosity of Mockzilla's internal logging.
 * @property releaseModeConfig Rate limiting and authentication config applied in release mode.
 * @property isNetworkDiscoveryEnabled When `true`, Mockzilla broadcasts itself via ZeroConf
 * (Bonjour) so the management desktop can discover it. Always disabled in release mode.
 * @property additionalLogWriters Extra log sinks in addition to standard output.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Top-level configuration for a Mockzilla server instance. All properties are set via
 * [MockzillaConfig.Builder].
 *
 * @property port The port the server binds to. `0` causes the OS to assign an available port.
 * @property endpoints The mock endpoints registered on this server.
 * @property isRelease When `true`, activates release mode: rate limiting, token authentication,
 * and localhost-only restrictions are applied. See [ReleaseModeConfig] for details.
 * @property localhostOnly When `true`, the server only accepts connections from `127.0.0.1`,
 * blocking the management desktop interface and other external tools.
 * @property logLevel Verbosity of Mockzilla's internal logging.
 * @property releaseModeConfig Rate limiting and authentication config applied in release mode.
 * @property isNetworkDiscoveryEnabled When `true`, Mockzilla broadcasts itself via ZeroConf
 * (Bonjour) so the management desktop can discover it. Always disabled in release mode.
 * @property additionalLogWriters Extra log sinks in addition to standard output.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id<MockzillaMockzilla_commonMockzillaLogWriter>> *additionalLogWriters __attribute__((swift_name("additionalLogWriters")));
@property (readonly) NSArray<MockzillaMockzilla_commonEndpointConfiguration *> *endpoints __attribute__((swift_name("endpoints")));
@property (readonly) BOOL isNetworkDiscoveryEnabled __attribute__((swift_name("isNetworkDiscoveryEnabled")));
@property (readonly) BOOL isRelease __attribute__((swift_name("isRelease")));
@property (readonly) BOOL localhostOnly __attribute__((swift_name("localhostOnly")));
@property (readonly) MockzillaMockzilla_commonMockzillaConfigLogLevel *logLevel __attribute__((swift_name("logLevel")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig *releaseModeConfig __attribute__((swift_name("releaseModeConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig.Builder")))
@interface MockzillaMockzilla_commonMockzillaConfigBuilder : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonMockzillaConfigBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Register an new endpoint configuration
 *
 * @param endpoint The endpoint configuration to register.
 * @return This builder, for chaining.
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)addEndpointEndpoint:(MockzillaMockzilla_commonEndpointConfiguration *)endpoint __attribute__((swift_name("addEndpoint(endpoint:)")));

/**
 * Register an new endpoint configuration
 *
 * @param endpoint The endpoint builder to register.
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)addEndpointEndpoint_:(MockzillaMockzilla_commonEndpointConfigurationBuilder *)endpoint __attribute__((swift_name("addEndpoint(endpoint_:)")));

/**
 * Register an additional log writer.
 *
 * Mockzilla logs will then log to standard output and to any additional log writers
 *
 * @param logWriter The log writer to register.
 * @return This builder, for chaining.
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)addLogWriterLogWriter:(id<MockzillaMockzilla_commonMockzillaLogWriter>)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));

/**
 * Completes the builder pattern, returning an immutable config.
 *
 * @return The fully constructed [MockzillaConfig].
 */
- (MockzillaMockzilla_commonMockzillaConfig *)build __attribute__((swift_name("build()")));

/**
 * Used to simulate latency: The artificial delay Mockzilla with add to a network request.
 * Value set on individual endpoints takes priority over this value
 *
 * @param delay delay in milliseconds
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setDelayMillisDelay:(int32_t)delay __attribute__((swift_name("setDelayMillis(delay:)")));

/**
 * Used to simulate latency:  The artificial variance in the delay Mockzillaadds to a network
 * request. Used alongside [setMeanDelayMillis] to calculate the actual artificial delay on each
 * invocation. Set this value to 0 to remove any randomness from the delay.
 *
 * Value set on individual endpoints takes priority over this value
 *
 * @param delay delay in milliseconds
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setDelayVarianceMillisVariance:(int32_t)variance __attribute__((swift_name("setDelayVarianceMillis(variance:)"))) __attribute__((deprecated("No longer supported, now does nothing")));

/**
 * No-Op
 *
 * @param percentage Not supported
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setFailureProbabilityPercentagePercentage:(int32_t)percentage __attribute__((swift_name("setFailureProbabilityPercentage(percentage:)"))) __attribute__((deprecated("Configuring failure on top level config is now not supported")));

/**
 * Setting this to false will stop Mockzilla from using Bonjour to broadcast itself on the network
 * Note: Broadcast is disabled in release mode regardless of this flag's value
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setIsNetworkDiscoveryEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setIsNetworkDiscoveryEnabled(isEnabled:)")));

/**
 * Enable or disable release mode. See [setReleaseModeConfig] for more details
 *
 * @param isRelease `true` to enable release mode, `false` to disable.
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setIsReleaseModeEnabledIsRelease:(BOOL)isRelease __attribute__((swift_name("setIsReleaseModeEnabled(isRelease:)")));

/**
 * Setting this value to `true` means the mockzilla server will only accept calls from localhost.
 * Calls from other IPs will be blocked (including blocking the Mockzilla desktop interface)
 *
 * @param localhostOnly `true` to restrict connections to localhost only.
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setLocalhostOnlyLocalhostOnly:(BOOL)localhostOnly __attribute__((swift_name("setLocalhostOnly(localhostOnly:)")));

/**
 * Configures the level of Mockzilla's logging.
 *
 * @param level Defaults to `LogLevel.Info`
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setLogLevelLevel:(MockzillaMockzilla_commonMockzillaConfigLogLevel *)level __attribute__((swift_name("setLogLevel(level:)")));

/**
 * Used to simulate latency: The artificial mean delay Mockzilla with add to a network request.
 *
 * Value set on individual endpoints takes priority over this value
 *
 * @param delay delay in milliseconds
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setMeanDelayMillisDelay:(int32_t)delay __attribute__((swift_name("setMeanDelayMillis(delay:)"))) __attribute__((deprecated("Delay is now constant with no variance")));

/**
 * Sets the port which the server will bind to. Setting port to `0` will cause the server to
 * choose its port automatically.
 *
 * @param port Port number to bind to. Use `0` for automatic port assignment.
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setPortPort:(int32_t)port __attribute__((swift_name("setPort(port:)")));

/**
 * Sets the mockzilla release config.
 *
 * By default the release mode:
 * -  Introduces rate limiting to the server
 * -  Enforces rudamentary token authentication on each request (see documentation).
 * - Only allows connections from 127.0.0.1 (i.e from apps running on the device).
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setReleaseModeConfigReleaseConfig:(MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig *)releaseConfig __attribute__((swift_name("setReleaseModeConfig(releaseConfig:)")));
@end


/**
 * Configures a single mock endpoint within a Mockzilla server. Defines how incoming requests are
 * matched to this endpoint and what response to return, along with optional dashboard presets and
 * latency simulation.
 *
 * Construct via [Builder].
 *
 * @property name Human-readable display name shown in the management dashboard.
 * @property key Unique identifier for this endpoint, used in management API operations.
 * @property shouldFail Whether this endpoint returns an error response by default. When `true`,
 * [errorHandler] is called instead of [defaultHandler].
 * @property delay Artificial response delay in milliseconds. `null` falls back to the global delay
 * set on [MockzillaConfig.Builder].
 * @property dashboardOptionsConfig Preset responses available to users in the management dashboard.
 * @property versionCode Version number for this endpoint's configuration. Incrementing this value
 * automatically invalidates any cached responses on connected devices.
 * @property endpointMatcher Predicate that determines whether an incoming request should be routed
 * to this endpoint. The first matching endpoint wins.
 * @property defaultHandler Called when a request matches this endpoint and [shouldFail] is `false`.
 * Returns the mock response to send back to the caller.
 * @property errorHandler Called when a request matches this endpoint and [shouldFail] is `true`.
 * Returns the simulated error response to send back to the caller.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonEndpointConfiguration")))
@interface MockzillaMockzilla_commonEndpointConfiguration : MockzillaBase
- (instancetype)initWithName:(NSString *)name key:(id)key shouldFail:(BOOL)shouldFail delay:(MockzillaInt * _Nullable)delay dashboardOptionsConfig:(MockzillaMockzilla_commonDashboardOptionsConfig *)dashboardOptionsConfig versionCode:(int32_t)versionCode endpointMatcher:(id<MockzillaKotlinSuspendFunction1>)endpointMatcher defaultHandler:(id<MockzillaKotlinSuspendFunction1>)defaultHandler errorHandler:(id<MockzillaKotlinSuspendFunction1>)errorHandler __attribute__((swift_name("init(name:key:shouldFail:delay:dashboardOptionsConfig:versionCode:endpointMatcher:defaultHandler:errorHandler:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonEndpointConfiguration *)doCopyName:(NSString *)name key:(id)key shouldFail:(BOOL)shouldFail delay:(MockzillaInt * _Nullable)delay dashboardOptionsConfig:(MockzillaMockzilla_commonDashboardOptionsConfig *)dashboardOptionsConfig versionCode:(int32_t)versionCode endpointMatcher:(id<MockzillaKotlinSuspendFunction1>)endpointMatcher defaultHandler:(id<MockzillaKotlinSuspendFunction1>)defaultHandler errorHandler:(id<MockzillaKotlinSuspendFunction1>)errorHandler __attribute__((swift_name("doCopy(name:key:shouldFail:delay:dashboardOptionsConfig:versionCode:endpointMatcher:defaultHandler:errorHandler:)")));

/**
 * Configures a single mock endpoint within a Mockzilla server. Defines how incoming requests are
 * matched to this endpoint and what response to return, along with optional dashboard presets and
 * latency simulation.
 *
 * Construct via [Builder].
 *
 * @property name Human-readable display name shown in the management dashboard.
 * @property key Unique identifier for this endpoint, used in management API operations.
 * @property shouldFail Whether this endpoint returns an error response by default. When `true`,
 * [errorHandler] is called instead of [defaultHandler].
 * @property delay Artificial response delay in milliseconds. `null` falls back to the global delay
 * set on [MockzillaConfig.Builder].
 * @property dashboardOptionsConfig Preset responses available to users in the management dashboard.
 * @property versionCode Version number for this endpoint's configuration. Incrementing this value
 * automatically invalidates any cached responses on connected devices.
 * @property endpointMatcher Predicate that determines whether an incoming request should be routed
 * to this endpoint. The first matching endpoint wins.
 * @property defaultHandler Called when a request matches this endpoint and [shouldFail] is `false`.
 * Returns the mock response to send back to the caller.
 * @property errorHandler Called when a request matches this endpoint and [shouldFail] is `true`.
 * Returns the simulated error response to send back to the caller.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Configures a single mock endpoint within a Mockzilla server. Defines how incoming requests are
 * matched to this endpoint and what response to return, along with optional dashboard presets and
 * latency simulation.
 *
 * Construct via [Builder].
 *
 * @property name Human-readable display name shown in the management dashboard.
 * @property key Unique identifier for this endpoint, used in management API operations.
 * @property shouldFail Whether this endpoint returns an error response by default. When `true`,
 * [errorHandler] is called instead of [defaultHandler].
 * @property delay Artificial response delay in milliseconds. `null` falls back to the global delay
 * set on [MockzillaConfig.Builder].
 * @property dashboardOptionsConfig Preset responses available to users in the management dashboard.
 * @property versionCode Version number for this endpoint's configuration. Incrementing this value
 * automatically invalidates any cached responses on connected devices.
 * @property endpointMatcher Predicate that determines whether an incoming request should be routed
 * to this endpoint. The first matching endpoint wins.
 * @property defaultHandler Called when a request matches this endpoint and [shouldFail] is `false`.
 * Returns the mock response to send back to the caller.
 * @property errorHandler Called when a request matches this endpoint and [shouldFail] is `true`.
 * Returns the simulated error response to send back to the caller.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Configures a single mock endpoint within a Mockzilla server. Defines how incoming requests are
 * matched to this endpoint and what response to return, along with optional dashboard presets and
 * latency simulation.
 *
 * Construct via [Builder].
 *
 * @property name Human-readable display name shown in the management dashboard.
 * @property key Unique identifier for this endpoint, used in management API operations.
 * @property shouldFail Whether this endpoint returns an error response by default. When `true`,
 * [errorHandler] is called instead of [defaultHandler].
 * @property delay Artificial response delay in milliseconds. `null` falls back to the global delay
 * set on [MockzillaConfig.Builder].
 * @property dashboardOptionsConfig Preset responses available to users in the management dashboard.
 * @property versionCode Version number for this endpoint's configuration. Incrementing this value
 * automatically invalidates any cached responses on connected devices.
 * @property endpointMatcher Predicate that determines whether an incoming request should be routed
 * to this endpoint. The first matching endpoint wins.
 * @property defaultHandler Called when a request matches this endpoint and [shouldFail] is `false`.
 * Returns the mock response to send back to the caller.
 * @property errorHandler Called when a request matches this endpoint and [shouldFail] is `true`.
 * Returns the simulated error response to send back to the caller.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MockzillaMockzilla_commonDashboardOptionsConfig *dashboardOptionsConfig __attribute__((swift_name("dashboardOptionsConfig")));
@property (readonly) id<MockzillaKotlinSuspendFunction1> defaultHandler __attribute__((swift_name("defaultHandler")));
@property (readonly) MockzillaInt * _Nullable delay __attribute__((swift_name("delay")));
@property (readonly) id<MockzillaKotlinSuspendFunction1> endpointMatcher __attribute__((swift_name("endpointMatcher")));
@property (readonly) id<MockzillaKotlinSuspendFunction1> errorHandler __attribute__((swift_name("errorHandler")));
@property (readonly) id key __attribute__((swift_name("key")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL shouldFail __attribute__((swift_name("shouldFail")));
@property (readonly) int32_t versionCode __attribute__((swift_name("versionCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOptionsConfig.Builder")))
@interface MockzillaMockzilla_commonDashboardOptionsConfigBuilder : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MockzillaMockzilla_commonDashboardOptionsConfigBuilder *)addErrorPresetResponse:(MockzillaMockzilla_commonMockzillaHttpResponse *)response name:(NSString * _Nullable)name description:(NSString * _Nullable)description __attribute__((swift_name("addErrorPreset(response:name:description:)"))) __attribute__((deprecated("Separate success/error presets are no longer supported")));

/**
 * Adds a preset response option to the dashboard for this endpoint.
 *
 * @param response The full response this preset applies when selected.
 * @param name Display name for this preset in the dashboard. Defaults to "Preset N".
 * @param description Optional description shown alongside the preset.
 * @param type Visual classification for this preset. Defaults to a type inferred from the
 * response status code when `null`.
 * @return This builder, for chaining.
 */
- (MockzillaMockzilla_commonDashboardOptionsConfigBuilder *)addPresetResponse:(MockzillaMockzilla_commonMockzillaHttpResponse *)response name:(NSString * _Nullable)name description:(NSString * _Nullable)description type:(MockzillaMockzilla_commonDashboardOverridePresetType * _Nullable)type __attribute__((swift_name("addPreset(response:name:description:type:)")));

/**
 * Adds a partial preset response option to the dashboard for this endpoint. Only fields
 * set on [response] are overridden; `null` fields retain the endpoint's default values.
 *
 * @param response The partial response this preset applies when selected.
 * @param name Display name for this preset in the dashboard. Defaults to "Preset N".
 * @param description Optional description shown alongside the preset.
 * @param type Visual classification for this preset. Defaults to a type inferred from the
 * response status code when `null`.
 * @return This builder, for chaining.
 */
- (MockzillaMockzilla_commonDashboardOptionsConfigBuilder *)addPresetResponse:(MockzillaMockzilla_commonPartialMockzillaHttpResponse *)response name:(NSString * _Nullable)name description:(NSString * _Nullable)description type_:(MockzillaMockzilla_commonDashboardOverridePresetType * _Nullable)type __attribute__((swift_name("addPreset(response:name:description:type_:)")));
- (MockzillaMockzilla_commonDashboardOptionsConfigBuilder *)addSuccessPresetResponse:(MockzillaMockzilla_commonMockzillaHttpResponse *)response name:(NSString * _Nullable)name description:(NSString * _Nullable)description __attribute__((swift_name("addSuccessPreset(response:name:description:)"))) __attribute__((deprecated("Separate success/error presets are no longer supported")));
- (MockzillaMockzilla_commonDashboardOptionsConfig *)build __attribute__((swift_name("build()")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MockzillaKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MockzillaKotlinSuspendFunction1 <MockzillaKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MockzillaKotlinIllegalStateException : MockzillaKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MockzillaKotlinCancellationException : MockzillaKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MockzillaKotlinByteArray : MockzillaBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MockzillaByte *(^)(MockzillaInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MockzillaKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MockzillaKtor_httpHttpMethod : MockzillaBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MockzillaKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end


/**
 * Represents an HTTP status code and description.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode)
 *
 * @param value is a numeric code.
 * @param description is a free form description of a status.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MockzillaKtor_httpHttpStatusCode : MockzillaBase <MockzillaKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MockzillaKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (MockzillaKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));

/**
 * Returns a copy of `this` code with a description changed to [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.description)
 */
- (MockzillaKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaHttpResponse.Companion")))
@interface MockzillaMockzilla_commonMockzillaHttpResponseCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonMockzillaHttpResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Creates a response with JSON content type and 200 success code for a given body
 *
 * @param body The response body as a string.
 * @return
 */
- (MockzillaMockzilla_commonMockzillaHttpResponse *)successJsonBody:(NSString *)body __attribute__((swift_name("successJson(body:)")));
@end


/**
 * A partial HTTP response used by dashboard presets, allowing a subset of response fields to
 * be overridden. `null` fields are left unchanged from the endpoint's default response.
 *
 * @property statusCode The HTTP status code override, or `null` to leave unchanged.
 * @property headers HTTP response headers override, or `null` to leave unchanged.
 * @property body The response body override, or `null` to leave unchanged.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonPartialMockzillaHttpResponse")))
@interface MockzillaMockzilla_commonPartialMockzillaHttpResponse : MockzillaBase
- (instancetype)initWithStatusCode:(MockzillaKtor_httpHttpStatusCode * _Nullable)statusCode headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers body:(NSString * _Nullable)body __attribute__((swift_name("init(statusCode:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonPartialMockzillaHttpResponseCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMockzilla_commonPartialMockzillaHttpResponse *)doCopyStatusCode:(MockzillaKtor_httpHttpStatusCode * _Nullable)statusCode headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers body:(NSString * _Nullable)body __attribute__((swift_name("doCopy(statusCode:headers:body:)")));

/**
 * A partial HTTP response used by dashboard presets, allowing a subset of response fields to
 * be overridden. `null` fields are left unchanged from the endpoint's default response.
 *
 * @property statusCode The HTTP status code override, or `null` to leave unchanged.
 * @property headers HTTP response headers override, or `null` to leave unchanged.
 * @property body The response body override, or `null` to leave unchanged.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A partial HTTP response used by dashboard presets, allowing a subset of response fields to
 * be overridden. `null` fields are left unchanged from the endpoint's default response.
 *
 * @property statusCode The HTTP status code override, or `null` to leave unchanged.
 * @property headers HTTP response headers override, or `null` to leave unchanged.
 * @property body The response body override, or `null` to leave unchanged.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A partial HTTP response used by dashboard presets, allowing a subset of response fields to
 * be overridden. `null` fields are left unchanged from the endpoint's default response.
 *
 * @property statusCode The HTTP status code override, or `null` to leave unchanged.
 * @property headers HTTP response headers override, or `null` to leave unchanged.
 * @property body The response body override, or `null` to leave unchanged.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable headers __attribute__((swift_name("headers")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/apadmi/mockzilla/lib/internal/utils/HttpStatusCodeSerializer))
*/
@property (readonly) MockzillaKtor_httpHttpStatusCode * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MockzillaKotlinArray<T> : MockzillaBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MockzillaInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MockzillaKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * Generates the authentication header required to make requests to a running Mockzilla server.
 * An instance pre-configured for the running server is available via
 * [com.apadmi.mockzilla.lib.models.MockzillaRuntimeParams.authHeaderProvider].
 */
__attribute__((swift_name("Mockzilla_commonAuthHeaderProvider")))
@protocol MockzillaMockzilla_commonAuthHeaderProvider
@required

/**
 * Generates a fresh authentication header. Each invocation may produce a new token value.
 *
 * @return The header key and value to include in requests to the Mockzilla server.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)generateHeaderWithCompletionHandler:(void (^)(MockzillaMockzilla_commonAuthHeaderProviderHeader * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("generateHeader(completionHandler:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MockzillaKotlinEnum<E> : MockzillaBase <MockzillaKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Defines the verbosity of Mockzilla's internal logging.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig.LogLevel")))
@interface MockzillaMockzilla_commonMockzillaConfigLogLevel : MockzillaKotlinEnum<MockzillaMockzilla_commonMockzillaConfigLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Defines the verbosity of Mockzilla's internal logging.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaMockzilla_commonMockzillaConfigLogLevel *assert __attribute__((swift_name("assert")));
@property (class, readonly) MockzillaMockzilla_commonMockzillaConfigLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MockzillaMockzilla_commonMockzillaConfigLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MockzillaMockzilla_commonMockzillaConfigLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) MockzillaMockzilla_commonMockzillaConfigLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) MockzillaMockzilla_commonMockzillaConfigLogLevel *warn __attribute__((swift_name("warn")));
+ (MockzillaKotlinArray<MockzillaMockzilla_commonMockzillaConfigLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaMockzilla_commonMockzillaConfigLogLevel *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Rate Limiting: Uses Ktor's rate limiting, params described here: https://ktor.io/docs/rate-limit.html#configure-rate-limiting
 * Each network call will require a token with the provided lifespan
 *
 * @property rateLimit
 * @property rateLimitRefillPeriod
 * @property tokenLifeSpan
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig.ReleaseModeConfig")))
@interface MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig : MockzillaBase
- (instancetype)initWithRateLimit:(int32_t)rateLimit rateLimitRefillPeriod:(int64_t)rateLimitRefillPeriod tokenLifeSpan:(int64_t)tokenLifeSpan __attribute__((swift_name("init(rateLimit:rateLimitRefillPeriod:tokenLifeSpan:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig *)doCopyRateLimit:(int32_t)rateLimit rateLimitRefillPeriod:(int64_t)rateLimitRefillPeriod tokenLifeSpan:(int64_t)tokenLifeSpan __attribute__((swift_name("doCopy(rateLimit:rateLimitRefillPeriod:tokenLifeSpan:)")));

/**
 * Rate Limiting: Uses Ktor's rate limiting, params described here: https://ktor.io/docs/rate-limit.html#configure-rate-limiting
 * Each network call will require a token with the provided lifespan
 *
 * @property rateLimit
 * @property rateLimitRefillPeriod
 * @property tokenLifeSpan
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Rate Limiting: Uses Ktor's rate limiting, params described here: https://ktor.io/docs/rate-limit.html#configure-rate-limiting
 * Each network call will require a token with the provided lifespan
 *
 * @property rateLimit
 * @property rateLimitRefillPeriod
 * @property tokenLifeSpan
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Rate Limiting: Uses Ktor's rate limiting, params described here: https://ktor.io/docs/rate-limit.html#configure-rate-limiting
 * Each network call will require a token with the provided lifespan
 *
 * @property rateLimit
 * @property rateLimitRefillPeriod
 * @property tokenLifeSpan
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t rateLimit __attribute__((swift_name("rateLimit")));
@property (readonly) int64_t rateLimitRefillPeriod __attribute__((swift_name("rateLimitRefillPeriod")));
@property (readonly) int64_t tokenLifeSpan __attribute__((swift_name("tokenLifeSpan")));
@end


/**
 * Extension point for routing Mockzilla's internal log output to a custom sink, such as a crash
 * reporting service or custom logger. Register via [MockzillaConfig.Builder.addLogWriter].
 */
__attribute__((swift_name("Mockzilla_commonMockzillaLogWriter")))
@protocol MockzillaMockzilla_commonMockzillaLogWriter
@required

/**
 * Called by Mockzilla for each log entry.
 *
 * @param logLevel The severity of this log entry.
 * @param message The log message.
 * @param tag The source tag identifying the component that produced this log entry.
 * @param throwable An associated exception, if any.
 */
- (void)logLogLevel:(MockzillaMockzilla_commonMockzillaConfigLogLevel *)logLevel message:(NSString *)message tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(logLevel:message:tag:throwable:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig.BuilderCompanion")))
@interface MockzillaMockzilla_commonMockzillaConfigBuilderCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonMockzillaConfigBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@end


/**
 * Configures the preset responses available to users in the Mockzilla management dashboard for a
 * specific endpoint. Presets let dashboard users quickly switch between common response scenarios
 * without modifying code.
 *
 * Construct via [Builder] and attach to an endpoint using
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 * @property errorPresets
 * @property successPresets
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOptionsConfig")))
@interface MockzillaMockzilla_commonDashboardOptionsConfig : MockzillaBase
- (instancetype)initWithErrorPresets:(NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *)errorPresets successPresets:(NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *)successPresets __attribute__((swift_name("init(errorPresets:successPresets:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonDashboardOptionsConfigCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMockzilla_commonDashboardOptionsConfig *)doCopyErrorPresets:(NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *)errorPresets successPresets:(NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *)successPresets __attribute__((swift_name("doCopy(errorPresets:successPresets:)")));

/**
 * Configures the preset responses available to users in the Mockzilla management dashboard for a
 * specific endpoint. Presets let dashboard users quickly switch between common response scenarios
 * without modifying code.
 *
 * Construct via [Builder] and attach to an endpoint using
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 * @property errorPresets
 * @property successPresets
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Configures the preset responses available to users in the Mockzilla management dashboard for a
 * specific endpoint. Presets let dashboard users quickly switch between common response scenarios
 * without modifying code.
 *
 * Construct via [Builder] and attach to an endpoint using
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 * @property errorPresets
 * @property successPresets
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Configures the preset responses available to users in the Mockzilla management dashboard for a
 * specific endpoint. Presets let dashboard users quickly switch between common response scenarios
 * without modifying code.
 *
 * Construct via [Builder] and attach to an endpoint using
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 * @property errorPresets
 * @property successPresets
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *errorPresets __attribute__((swift_name("errorPresets"))) __attribute__((deprecated("Error Presets will be removed in a future version")));

/**
 * The list of preset responses available in the dashboard for this endpoint.
 */
@property (readonly) NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *presets __attribute__((swift_name("presets")));
@property (readonly) NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *successPresets __attribute__((swift_name("successPresets"))) __attribute__((deprecated("Deprecated")));
@end


/**
 * Visual classification for a [DashboardOverridePreset] in the management dashboard. Used to
 * display presets with appropriate styling.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOverridePreset.Type_")))
@interface MockzillaMockzilla_commonDashboardOverridePresetType : MockzillaKotlinEnum<MockzillaMockzilla_commonDashboardOverridePresetType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Visual classification for a [DashboardOverridePreset] in the management dashboard. Used to
 * display presets with appropriate styling.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonDashboardOverridePresetTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MockzillaMockzilla_commonDashboardOverridePresetType *clienterror __attribute__((swift_name("clienterror")));
@property (class, readonly) MockzillaMockzilla_commonDashboardOverridePresetType *informational __attribute__((swift_name("informational")));
@property (class, readonly) MockzillaMockzilla_commonDashboardOverridePresetType *other __attribute__((swift_name("other")));
@property (class, readonly) MockzillaMockzilla_commonDashboardOverridePresetType *redirect __attribute__((swift_name("redirect")));
@property (class, readonly) MockzillaMockzilla_commonDashboardOverridePresetType *servererror __attribute__((swift_name("servererror")));
@property (class, readonly) MockzillaMockzilla_commonDashboardOverridePresetType *success __attribute__((swift_name("success")));
+ (MockzillaKotlinArray<MockzillaMockzilla_commonDashboardOverridePresetType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaMockzilla_commonDashboardOverridePresetType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MockzillaKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MockzillaKotlinByteIterator : MockzillaBase <MockzillaKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MockzillaByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface MockzillaKtor_httpHttpMethodCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<MockzillaKtor_httpHttpMethod *> *)getDefaultMethods __attribute__((swift_name("getDefaultMethods()"))) __attribute__((deprecated("Use DefaultMethods const instead")));
- (MockzillaKtor_httpHttpMethod *)getDelete __attribute__((swift_name("getDelete()"))) __attribute__((deprecated("Use Delete const instead")));
- (MockzillaKtor_httpHttpMethod *)getGet __attribute__((swift_name("getGet()"))) __attribute__((deprecated("Use Get const instead")));
- (MockzillaKtor_httpHttpMethod *)getHead __attribute__((swift_name("getHead()"))) __attribute__((deprecated("Use Head const instead")));
- (MockzillaKtor_httpHttpMethod *)getOptions __attribute__((swift_name("getOptions()"))) __attribute__((deprecated("Use Options const instead")));
- (MockzillaKtor_httpHttpMethod *)getPatch __attribute__((swift_name("getPatch()"))) __attribute__((deprecated("Use Patch const instead")));
- (MockzillaKtor_httpHttpMethod *)getPost __attribute__((swift_name("getPost()"))) __attribute__((deprecated("Use Post const instead")));
- (MockzillaKtor_httpHttpMethod *)getPut __attribute__((swift_name("getPut()"))) __attribute__((deprecated("Use Put const instead")));
- (MockzillaKtor_httpHttpMethod *)getTrace __attribute__((swift_name("getTrace()"))) __attribute__((deprecated("Use Trace const instead")));

/**
 * Parse HTTP method by [method] string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.parse)
 */
- (MockzillaKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));

/**
 * A list of default HTTP methods
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.DefaultMethods)
 */
@property (readonly) NSArray<MockzillaKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) MockzillaKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) MockzillaKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) MockzillaKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) MockzillaKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) MockzillaKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) MockzillaKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) MockzillaKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@property (readonly) MockzillaKtor_httpHttpMethod *Query __attribute__((swift_name("Query")));
@property (readonly) MockzillaKtor_httpHttpMethod *Trace __attribute__((swift_name("Trace")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface MockzillaKtor_httpHttpStatusCodeCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpStatusCode] with the given numeric value.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.fromValue)
 */
- (MockzillaKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));

/**
 * All known status codes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.allStatusCodes)
 */
@property (readonly) NSArray<MockzillaKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MockzillaKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<MockzillaKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<MockzillaKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MockzillaKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<MockzillaKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<MockzillaKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MockzillaKotlinx_serialization_coreKSerializer <MockzillaKotlinx_serialization_coreSerializationStrategy, MockzillaKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * A partial HTTP response used by dashboard presets, allowing a subset of response fields to
 * be overridden. `null` fields are left unchanged from the endpoint's default response.
 *
 * @property statusCode The HTTP status code override, or `null` to leave unchanged.
 * @property headers HTTP response headers override, or `null` to leave unchanged.
 * @property body The response body override, or `null` to leave unchanged.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonPartialMockzillaHttpResponse.Companion")))
@interface MockzillaMockzilla_commonPartialMockzillaHttpResponseCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A partial HTTP response used by dashboard presets, allowing a subset of response fields to
 * be overridden. `null` fields are left unchanged from the endpoint's default response.
 *
 * @property statusCode The HTTP status code override, or `null` to leave unchanged.
 * @property headers HTTP response headers override, or `null` to leave unchanged.
 * @property body The response body override, or `null` to leave unchanged.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonPartialMockzillaHttpResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * A partial HTTP response used by dashboard presets, allowing a subset of response fields to
 * be overridden. `null` fields are left unchanged from the endpoint's default response.
 *
 * @property statusCode The HTTP status code override, or `null` to leave unchanged.
 * @property headers HTTP response headers override, or `null` to leave unchanged.
 * @property body The response body override, or `null` to leave unchanged.
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * An HTTP header represented as a key-value pair.
 *
 * @property key The header field name.
 * @property value The header field value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonAuthHeaderProviderHeader")))
@interface MockzillaMockzilla_commonAuthHeaderProviderHeader : MockzillaBase
- (instancetype)initWithKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonAuthHeaderProviderHeader *)doCopyKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("doCopy(key:value:)")));

/**
 * An HTTP header represented as a key-value pair.
 *
 * @property key The header field name.
 * @property value The header field value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * An HTTP header represented as a key-value pair.
 *
 * @property key The header field name.
 * @property value The header field value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * An HTTP header represented as a key-value pair.
 *
 * @property key The header field name.
 * @property value The header field value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MockzillaKotlinEnumCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A named response configuration that can be applied to an endpoint from the Mockzilla management
 * dashboard, overriding the endpoint's default or error response for a session.
 *
 * @property name Display name shown in the dashboard preset list.
 * @property description Optional description shown alongside the preset in the dashboard.
 * @property type Visual classification for the preset in the dashboard. Defaults to a type
 * inferred from the response status code when `null`.
 * @property response The partial response this preset applies when selected.
 * @property isManagementUiDefinedCustomPreset `true` when this preset was created interactively
 * by a user in the management dashboard, as opposed to being defined in code via
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOverridePreset")))
@interface MockzillaMockzilla_commonDashboardOverridePreset : MockzillaBase
- (instancetype)initWithName:(NSString *)name description:(NSString * _Nullable)description type:(MockzillaMockzilla_commonDashboardOverridePresetType * _Nullable)type response:(MockzillaMockzilla_commonPartialMockzillaHttpResponse *)response isManagementUiDefinedCustomPreset:(BOOL)isManagementUiDefinedCustomPreset __attribute__((swift_name("init(name:description:type:response:isManagementUiDefinedCustomPreset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonDashboardOverridePresetCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMockzilla_commonDashboardOverridePreset *)doCopyName:(NSString *)name description:(NSString * _Nullable)description type:(MockzillaMockzilla_commonDashboardOverridePresetType * _Nullable)type response:(MockzillaMockzilla_commonPartialMockzillaHttpResponse *)response isManagementUiDefinedCustomPreset:(BOOL)isManagementUiDefinedCustomPreset __attribute__((swift_name("doCopy(name:description:type:response:isManagementUiDefinedCustomPreset:)")));

/**
 * A named response configuration that can be applied to an endpoint from the Mockzilla management
 * dashboard, overriding the endpoint's default or error response for a session.
 *
 * @property name Display name shown in the dashboard preset list.
 * @property description Optional description shown alongside the preset in the dashboard.
 * @property type Visual classification for the preset in the dashboard. Defaults to a type
 * inferred from the response status code when `null`.
 * @property response The partial response this preset applies when selected.
 * @property isManagementUiDefinedCustomPreset `true` when this preset was created interactively
 * by a user in the management dashboard, as opposed to being defined in code via
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A named response configuration that can be applied to an endpoint from the Mockzilla management
 * dashboard, overriding the endpoint's default or error response for a session.
 *
 * @property name Display name shown in the dashboard preset list.
 * @property description Optional description shown alongside the preset in the dashboard.
 * @property type Visual classification for the preset in the dashboard. Defaults to a type
 * inferred from the response status code when `null`.
 * @property response The partial response this preset applies when selected.
 * @property isManagementUiDefinedCustomPreset `true` when this preset was created interactively
 * by a user in the management dashboard, as opposed to being defined in code via
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A named response configuration that can be applied to an endpoint from the Mockzilla management
 * dashboard, overriding the endpoint's default or error response for a session.
 *
 * @property name Display name shown in the dashboard preset list.
 * @property description Optional description shown alongside the preset in the dashboard.
 * @property type Visual classification for the preset in the dashboard. Defaults to a type
 * inferred from the response status code when `null`.
 * @property response The partial response this preset applies when selected.
 * @property isManagementUiDefinedCustomPreset `true` when this preset was created interactively
 * by a user in the management dashboard, as opposed to being defined in code via
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) BOOL isManagementUiDefinedCustomPreset __attribute__((swift_name("isManagementUiDefinedCustomPreset")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MockzillaMockzilla_commonPartialMockzillaHttpResponse *response __attribute__((swift_name("response")));
@property (readonly) MockzillaMockzilla_commonDashboardOverridePresetType * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * Configures the preset responses available to users in the Mockzilla management dashboard for a
 * specific endpoint. Presets let dashboard users quickly switch between common response scenarios
 * without modifying code.
 *
 * Construct via [Builder] and attach to an endpoint using
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 * @property errorPresets
 * @property successPresets
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOptionsConfig.Companion")))
@interface MockzillaMockzilla_commonDashboardOptionsConfigCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Configures the preset responses available to users in the Mockzilla management dashboard for a
 * specific endpoint. Presets let dashboard users quickly switch between common response scenarios
 * without modifying code.
 *
 * Construct via [Builder] and attach to an endpoint using
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 * @property errorPresets
 * @property successPresets
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonDashboardOptionsConfigCompanion *shared __attribute__((swift_name("shared")));

/**
 * Configures the preset responses available to users in the Mockzilla management dashboard for a
 * specific endpoint. Presets let dashboard users quickly switch between common response scenarios
 * without modifying code.
 *
 * Construct via [Builder] and attach to an endpoint using
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 * @property errorPresets
 * @property successPresets
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOverridePreset.Type_Companion")))
@interface MockzillaMockzilla_commonDashboardOverridePresetTypeCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonDashboardOverridePresetTypeCompanion *shared __attribute__((swift_name("shared")));
- (MockzillaMockzilla_commonDashboardOverridePresetType * _Nullable)fromStringStr:(NSString *)str __attribute__((swift_name("fromString(str:)")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MockzillaKotlinArray<id<MockzillaKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MockzillaKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<MockzillaKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<MockzillaKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<MockzillaKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MockzillaKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<MockzillaKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<MockzillaKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<MockzillaKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) MockzillaKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MockzillaKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<MockzillaKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<MockzillaKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MockzillaKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * A named response configuration that can be applied to an endpoint from the Mockzilla management
 * dashboard, overriding the endpoint's default or error response for a session.
 *
 * @property name Display name shown in the dashboard preset list.
 * @property description Optional description shown alongside the preset in the dashboard.
 * @property type Visual classification for the preset in the dashboard. Defaults to a type
 * inferred from the response status code when `null`.
 * @property response The partial response this preset applies when selected.
 * @property isManagementUiDefinedCustomPreset `true` when this preset was created interactively
 * by a user in the management dashboard, as opposed to being defined in code via
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOverridePreset.Companion")))
@interface MockzillaMockzilla_commonDashboardOverridePresetCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A named response configuration that can be applied to an endpoint from the Mockzilla management
 * dashboard, overriding the endpoint's default or error response for a session.
 *
 * @property name Display name shown in the dashboard preset list.
 * @property description Optional description shown alongside the preset in the dashboard.
 * @property type Visual classification for the preset in the dashboard. Defaults to a type
 * inferred from the response status code when `null`.
 * @property response The partial response this preset applies when selected.
 * @property isManagementUiDefinedCustomPreset `true` when this preset was created interactively
 * by a user in the management dashboard, as opposed to being defined in code via
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonDashboardOverridePresetCompanion *shared __attribute__((swift_name("shared")));

/**
 * A named response configuration that can be applied to an endpoint from the Mockzilla management
 * dashboard, overriding the endpoint's default or error response for a session.
 *
 * @property name Display name shown in the dashboard preset list.
 * @property description Optional description shown alongside the preset in the dashboard.
 * @property type Visual classification for the preset in the dashboard. Defaults to a type
 * inferred from the response status code when `null`.
 * @property response The partial response this preset applies when selected.
 * @property isManagementUiDefinedCustomPreset `true` when this preset was created interactively
 * by a user in the management dashboard, as opposed to being defined in code via
 * [EndpointConfiguration.Builder.configureDashboardOverrides].
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MockzillaKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<MockzillaKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MockzillaKotlinx_serialization_coreSerializersModule : MockzillaBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MockzillaKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MockzillaKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MockzillaKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MockzillaKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MockzillaKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MockzillaKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MockzillaKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MockzillaKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MockzillaKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MockzillaKotlinx_serialization_coreSerialKind : MockzillaBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MockzillaKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<MockzillaKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MockzillaKotlinNothing : MockzillaBase
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MockzillaKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<MockzillaKotlinKClass>)kClass provider:(id<MockzillaKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MockzillaKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<MockzillaKotlinKClass>)kClass serializer:(id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<MockzillaKotlinKClass>)baseClass actualClass:(id<MockzillaKotlinKClass>)actualClass actualSerializer:(id<MockzillaKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<MockzillaKotlinKClass>)baseClass defaultDeserializerProvider:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<MockzillaKotlinKClass>)baseClass defaultDeserializerProvider:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<MockzillaKotlinKClass>)baseClass defaultSerializerProvider:(id<MockzillaKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MockzillaKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MockzillaKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MockzillaKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MockzillaKotlinKClass <MockzillaKotlinKDeclarationContainer, MockzillaKotlinKAnnotatedElement, MockzillaKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
