#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MockzillaMockzillaHttpRequest, MockzillaMockzillaHttpResponse, MockzillaEndpointConfiguration, MockzillaEndpointConfigurationBuilder, MockzillaMetaDataCompanion, MockzillaMetaData, MockzillaMockzillaConfigLogLevel, MockzillaMockzillaConfigReleaseModeConfig, MockzillaMockzillaConfig, MockzillaMockzillaConfigBuilderCompanion, MockzillaMockzillaConfigBuilder, MockzillaKotlinEnumCompanion, MockzillaKotlinEnum<E>, MockzillaMockzillaConfigLogLevelCompanion, MockzillaKotlinArray<T>, MockzillaKtor_httpHttpMethod, MockzillaKtor_httpHttpStatusCode, MockzillaMockzillaRuntimeParams, MockzillaAuthHeaderProviderHeader, MockzillaKotlinThrowable, MockzillaKtor_httpHttpMethodCompanion, MockzillaKtor_httpHttpStatusCodeCompanion, MockzillaKotlinException, MockzillaKotlinRuntimeException, MockzillaKotlinIllegalStateException, MockzillaKotlinx_serialization_coreSerializersModule, MockzillaKotlinx_serialization_coreSerialKind, MockzillaKotlinNothing;

@protocol MockzillaKotlinx_serialization_coreKSerializer, MockzillaMockzillaLogWriter, MockzillaKotlinComparable, MockzillaAuthHeaderProvider, MockzillaKotlinx_serialization_coreEncoder, MockzillaKotlinx_serialization_coreSerialDescriptor, MockzillaKotlinx_serialization_coreSerializationStrategy, MockzillaKotlinx_serialization_coreDecoder, MockzillaKotlinx_serialization_coreDeserializationStrategy, MockzillaKotlinIterator, MockzillaKotlinx_serialization_coreCompositeEncoder, MockzillaKotlinAnnotation, MockzillaKotlinx_serialization_coreCompositeDecoder, MockzillaKotlinx_serialization_coreSerializersModuleCollector, MockzillaKotlinKClass, MockzillaKotlinKDeclarationContainer, MockzillaKotlinKAnnotatedElement, MockzillaKotlinKClassifier;

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
__attribute__((swift_name("EndpointConfiguration")))
@interface MockzillaEndpointConfiguration : MockzillaBase
- (instancetype)initWithName:(NSString *)name key:(NSString *)key failureProbability:(MockzillaInt * _Nullable)failureProbability delayMean:(MockzillaInt * _Nullable)delayMean delayVariance:(MockzillaInt * _Nullable)delayVariance endpointMatcher:(MockzillaBoolean *(^)(MockzillaMockzillaHttpRequest *))endpointMatcher webApiDefaultResponse:(MockzillaMockzillaHttpResponse * _Nullable)webApiDefaultResponse webApiErrorResponse:(MockzillaMockzillaHttpResponse * _Nullable)webApiErrorResponse defaultHandler:(MockzillaMockzillaHttpResponse *(^)(MockzillaMockzillaHttpRequest *))defaultHandler errorHandler:(MockzillaMockzillaHttpResponse *(^)(MockzillaMockzillaHttpRequest *))errorHandler __attribute__((swift_name("init(name:key:failureProbability:delayMean:delayVariance:endpointMatcher:webApiDefaultResponse:webApiErrorResponse:defaultHandler:errorHandler:)"))) __attribute__((objc_designated_initializer));
- (MockzillaEndpointConfiguration *)doCopyName:(NSString *)name key:(NSString *)key failureProbability:(MockzillaInt * _Nullable)failureProbability delayMean:(MockzillaInt * _Nullable)delayMean delayVariance:(MockzillaInt * _Nullable)delayVariance endpointMatcher:(MockzillaBoolean *(^)(MockzillaMockzillaHttpRequest *))endpointMatcher webApiDefaultResponse:(MockzillaMockzillaHttpResponse * _Nullable)webApiDefaultResponse webApiErrorResponse:(MockzillaMockzillaHttpResponse * _Nullable)webApiErrorResponse defaultHandler:(MockzillaMockzillaHttpResponse *(^)(MockzillaMockzillaHttpRequest *))defaultHandler errorHandler:(MockzillaMockzillaHttpResponse *(^)(MockzillaMockzillaHttpRequest *))errorHandler __attribute__((swift_name("doCopy(name:key:failureProbability:delayMean:delayVariance:endpointMatcher:webApiDefaultResponse:webApiErrorResponse:defaultHandler:errorHandler:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MockzillaMockzillaHttpResponse *(^defaultHandler)(MockzillaMockzillaHttpRequest *) __attribute__((swift_name("defaultHandler")));
@property (readonly) MockzillaInt * _Nullable delayMean __attribute__((swift_name("delayMean")));
@property (readonly) MockzillaInt * _Nullable delayVariance __attribute__((swift_name("delayVariance")));
@property (readonly) MockzillaBoolean *(^endpointMatcher)(MockzillaMockzillaHttpRequest *) __attribute__((swift_name("endpointMatcher")));
@property (readonly) MockzillaMockzillaHttpResponse *(^errorHandler)(MockzillaMockzillaHttpRequest *) __attribute__((swift_name("errorHandler")));
@property (readonly) MockzillaInt * _Nullable failureProbability __attribute__((swift_name("failureProbability")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MockzillaMockzillaHttpResponse * _Nullable webApiDefaultResponse __attribute__((swift_name("webApiDefaultResponse")));
@property (readonly) MockzillaMockzillaHttpResponse * _Nullable webApiErrorResponse __attribute__((swift_name("webApiErrorResponse")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndpointConfiguration.Builder")))
@interface MockzillaEndpointConfigurationBuilder : MockzillaBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (MockzillaEndpointConfiguration *)build __attribute__((swift_name("build()")));
- (MockzillaEndpointConfigurationBuilder *)setDefaultHandlerHandler:(MockzillaMockzillaHttpResponse *(^)(MockzillaMockzillaHttpRequest *))handler __attribute__((swift_name("setDefaultHandler(handler:)")));
- (MockzillaEndpointConfigurationBuilder *)setDelayVarianceMillisVariance:(int32_t)variance __attribute__((swift_name("setDelayVarianceMillis(variance:)")));
- (MockzillaEndpointConfigurationBuilder *)setErrorHandlerHandler:(MockzillaMockzillaHttpResponse *(^)(MockzillaMockzillaHttpRequest *))handler __attribute__((swift_name("setErrorHandler(handler:)")));
- (MockzillaEndpointConfigurationBuilder *)setFailureProbabilityPercentage:(int32_t)percentage __attribute__((swift_name("setFailureProbability(percentage:)")));
- (MockzillaEndpointConfigurationBuilder *)setMeanDelayMillisDelay:(int32_t)delay __attribute__((swift_name("setMeanDelayMillis(delay:)")));
- (MockzillaEndpointConfigurationBuilder *)setPatternRegex:(NSString *)regex __attribute__((swift_name("setPattern(regex:)")));
- (MockzillaEndpointConfigurationBuilder *)setPatternMatcherMatcher:(MockzillaBoolean *(^)(MockzillaMockzillaHttpRequest *))matcher __attribute__((swift_name("setPatternMatcher(matcher:)")));
- (MockzillaEndpointConfigurationBuilder *)setWebApiDefaultResponseResponse:(MockzillaMockzillaHttpResponse *)response __attribute__((swift_name("setWebApiDefaultResponse(response:)")));
- (MockzillaEndpointConfigurationBuilder *)setWebApiErrorResponseResponse:(MockzillaMockzillaHttpResponse *)response __attribute__((swift_name("setWebApiErrorResponse(response:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaData")))
@interface MockzillaMetaData : MockzillaBase
- (instancetype)initWithAppName:(NSString *)appName appPackage:(NSString *)appPackage operatingSystemVersion:(NSString *)operatingSystemVersion deviceModel:(NSString *)deviceModel appVersion:(NSString *)appVersion operatingSystem:(NSString *)operatingSystem mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("init(appName:appPackage:operatingSystemVersion:deviceModel:appVersion:operatingSystem:mockzillaVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaMetaDataCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMetaData *)doCopyAppName:(NSString *)appName appPackage:(NSString *)appPackage operatingSystemVersion:(NSString *)operatingSystemVersion deviceModel:(NSString *)deviceModel appVersion:(NSString *)appVersion operatingSystem:(NSString *)operatingSystem mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("doCopy(appName:appPackage:operatingSystemVersion:deviceModel:appVersion:operatingSystem:mockzillaVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *appPackage __attribute__((swift_name("appPackage")));
@property (readonly) NSString *appVersion __attribute__((swift_name("appVersion")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSString *mockzillaVersion __attribute__((swift_name("mockzillaVersion")));
@property (readonly) NSString *operatingSystem __attribute__((swift_name("operatingSystem")));
@property (readonly) NSString *operatingSystemVersion __attribute__((swift_name("operatingSystemVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaData.Companion")))
@interface MockzillaMetaDataCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMetaDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaConfig")))
@interface MockzillaMockzillaConfig : MockzillaBase
- (instancetype)initWithPort:(int32_t)port endpoints:(NSArray<MockzillaEndpointConfiguration *> *)endpoints isRelease:(BOOL)isRelease localhostOnly:(BOOL)localhostOnly logLevel:(MockzillaMockzillaConfigLogLevel *)logLevel releaseModeConfig:(MockzillaMockzillaConfigReleaseModeConfig *)releaseModeConfig additionalLogWriters:(NSArray<id<MockzillaMockzillaLogWriter>> *)additionalLogWriters __attribute__((swift_name("init(port:endpoints:isRelease:localhostOnly:logLevel:releaseModeConfig:additionalLogWriters:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzillaConfig *)doCopyPort:(int32_t)port endpoints:(NSArray<MockzillaEndpointConfiguration *> *)endpoints isRelease:(BOOL)isRelease localhostOnly:(BOOL)localhostOnly logLevel:(MockzillaMockzillaConfigLogLevel *)logLevel releaseModeConfig:(MockzillaMockzillaConfigReleaseModeConfig *)releaseModeConfig additionalLogWriters:(NSArray<id<MockzillaMockzillaLogWriter>> *)additionalLogWriters __attribute__((swift_name("doCopy(port:endpoints:isRelease:localhostOnly:logLevel:releaseModeConfig:additionalLogWriters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id<MockzillaMockzillaLogWriter>> *additionalLogWriters __attribute__((swift_name("additionalLogWriters")));
@property (readonly) NSArray<MockzillaEndpointConfiguration *> *endpoints __attribute__((swift_name("endpoints")));
@property (readonly) BOOL isRelease __attribute__((swift_name("isRelease")));
@property (readonly) BOOL localhostOnly __attribute__((swift_name("localhostOnly")));
@property (readonly) MockzillaMockzillaConfigLogLevel *logLevel __attribute__((swift_name("logLevel")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MockzillaMockzillaConfigReleaseModeConfig *releaseModeConfig __attribute__((swift_name("releaseModeConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaConfig.Builder")))
@interface MockzillaMockzillaConfigBuilder : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MockzillaMockzillaConfigBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMockzillaConfigBuilder *)addEndpointEndpoint:(MockzillaEndpointConfiguration *)endpoint __attribute__((swift_name("addEndpoint(endpoint:)")));
- (MockzillaMockzillaConfigBuilder *)addEndpointEndpoint_:(MockzillaEndpointConfigurationBuilder *)endpoint __attribute__((swift_name("addEndpoint(endpoint_:)")));
- (MockzillaMockzillaConfigBuilder *)addLogWriterLogWriter:(id<MockzillaMockzillaLogWriter>)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));
- (MockzillaMockzillaConfig *)build __attribute__((swift_name("build()")));
- (MockzillaMockzillaConfigBuilder *)setDelayVarianceMillisVariance:(int32_t)variance __attribute__((swift_name("setDelayVarianceMillis(variance:)")));
- (MockzillaMockzillaConfigBuilder *)setFailureProbabilityPercentagePercentage:(int32_t)percentage __attribute__((swift_name("setFailureProbabilityPercentage(percentage:)")));
- (MockzillaMockzillaConfigBuilder *)setIsReleaseModeEnabledIsRelease:(BOOL)isRelease __attribute__((swift_name("setIsReleaseModeEnabled(isRelease:)")));
- (MockzillaMockzillaConfigBuilder *)setLocalhostOnlyLocalhostOnly:(BOOL)localhostOnly __attribute__((swift_name("setLocalhostOnly(localhostOnly:)")));
- (MockzillaMockzillaConfigBuilder *)setLogLevelLevel:(MockzillaMockzillaConfigLogLevel *)level __attribute__((swift_name("setLogLevel(level:)")));
- (MockzillaMockzillaConfigBuilder *)setMeanDelayMillisDelay:(int32_t)delay __attribute__((swift_name("setMeanDelayMillis(delay:)")));
- (MockzillaMockzillaConfigBuilder *)setPortPort:(int32_t)port __attribute__((swift_name("setPort(port:)")));
- (MockzillaMockzillaConfigBuilder *)setReleaseModeConfigReleaseConfig:(MockzillaMockzillaConfigReleaseModeConfig *)releaseConfig __attribute__((swift_name("setReleaseModeConfig(releaseConfig:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaConfig.BuilderCompanion")))
@interface MockzillaMockzillaConfigBuilderCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzillaConfigBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MockzillaKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaConfig.LogLevel")))
@interface MockzillaMockzillaConfigLogLevel : MockzillaKotlinEnum<MockzillaMockzillaConfigLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaMockzillaConfigLogLevelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MockzillaMockzillaConfigLogLevel *assert __attribute__((swift_name("assert")));
@property (class, readonly) MockzillaMockzillaConfigLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MockzillaMockzillaConfigLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MockzillaMockzillaConfigLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) MockzillaMockzillaConfigLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) MockzillaMockzillaConfigLogLevel *warn __attribute__((swift_name("warn")));
+ (MockzillaKotlinArray<MockzillaMockzillaConfigLogLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaConfig.LogLevelCompanion")))
@interface MockzillaMockzillaConfigLogLevelCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzillaConfigLogLevelCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaConfig.ReleaseModeConfig")))
@interface MockzillaMockzillaConfigReleaseModeConfig : MockzillaBase
- (instancetype)initWithRateLimit:(int32_t)rateLimit rateLimitRefillPeriod:(int64_t)rateLimitRefillPeriod tokenLifeSpan:(int64_t)tokenLifeSpan __attribute__((swift_name("init(rateLimit:rateLimitRefillPeriod:tokenLifeSpan:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzillaConfigReleaseModeConfig *)doCopyRateLimit:(int32_t)rateLimit rateLimitRefillPeriod:(int64_t)rateLimitRefillPeriod tokenLifeSpan:(int64_t)tokenLifeSpan __attribute__((swift_name("doCopy(rateLimit:rateLimitRefillPeriod:tokenLifeSpan:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t rateLimit __attribute__((swift_name("rateLimit")));
@property (readonly) int64_t rateLimitRefillPeriod __attribute__((swift_name("rateLimitRefillPeriod")));
@property (readonly) int64_t tokenLifeSpan __attribute__((swift_name("tokenLifeSpan")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaHttpRequest")))
@interface MockzillaMockzillaHttpRequest : MockzillaBase
- (instancetype)initWithUri:(NSString *)uri headers:(NSDictionary<NSString *, NSString *> *)headers body:(NSString *)body method:(MockzillaKtor_httpHttpMethod *)method __attribute__((swift_name("init(uri:headers:body:method:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzillaHttpRequest *)doCopyUri:(NSString *)uri headers:(NSDictionary<NSString *, NSString *> *)headers body:(NSString *)body method:(MockzillaKtor_httpHttpMethod *)method __attribute__((swift_name("doCopy(uri:headers:body:method:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaHttpResponse")))
@interface MockzillaMockzillaHttpResponse : MockzillaBase
- (instancetype)initWithStatusCode:(MockzillaKtor_httpHttpStatusCode *)statusCode headers:(NSDictionary<NSString *, NSString *> *)headers body:(NSString *)body __attribute__((swift_name("init(statusCode:headers:body:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzillaHttpResponse *)doCopyStatusCode:(MockzillaKtor_httpHttpStatusCode *)statusCode headers:(NSDictionary<NSString *, NSString *> *)headers body:(NSString *)body __attribute__((swift_name("doCopy(statusCode:headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaRuntimeParams")))
@interface MockzillaMockzillaRuntimeParams : MockzillaBase
- (instancetype)initWithConfig:(MockzillaMockzillaConfig *)config mockBaseUrl:(NSString *)mockBaseUrl apiBaseUrl:(NSString *)apiBaseUrl port:(int32_t)port authHeaderProvider:(id<MockzillaAuthHeaderProvider>)authHeaderProvider __attribute__((swift_name("init(config:mockBaseUrl:apiBaseUrl:port:authHeaderProvider:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzillaRuntimeParams *)doCopyConfig:(MockzillaMockzillaConfig *)config mockBaseUrl:(NSString *)mockBaseUrl apiBaseUrl:(NSString *)apiBaseUrl port:(int32_t)port authHeaderProvider:(id<MockzillaAuthHeaderProvider>)authHeaderProvider __attribute__((swift_name("doCopy(config:mockBaseUrl:apiBaseUrl:port:authHeaderProvider:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiBaseUrl __attribute__((swift_name("apiBaseUrl")));
@property (readonly) id<MockzillaAuthHeaderProvider> authHeaderProvider __attribute__((swift_name("authHeaderProvider")));
@property (readonly) MockzillaMockzillaConfig *config __attribute__((swift_name("config")));
@property (readonly) NSString *mockBaseUrl __attribute__((swift_name("mockBaseUrl")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@end

__attribute__((swift_name("AuthHeaderProvider")))
@protocol MockzillaAuthHeaderProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)generateHeaderWithCompletionHandler:(void (^)(MockzillaAuthHeaderProviderHeader * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("generateHeader(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthHeaderProviderHeader")))
@interface MockzillaAuthHeaderProviderHeader : MockzillaBase
- (instancetype)initWithKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
- (MockzillaAuthHeaderProviderHeader *)doCopyKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("MockzillaLogWriter")))
@protocol MockzillaMockzillaLogWriter
@required
- (void)logLogLevel:(MockzillaMockzillaConfigLogLevel *)logLevel message:(NSString *)message tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(logLevel:message:tag:throwable:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockzillaKt")))
@interface MockzillaMockzillaKt : MockzillaBase
+ (MockzillaMockzillaRuntimeParams *)startMockzillaConfig:(MockzillaMockzillaConfig *)config __attribute__((swift_name("startMockzilla(config:)")));
+ (void)stopMockzilla __attribute__((swift_name("stopMockzilla()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MockzillaKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MockzillaKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MockzillaKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MockzillaKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MockzillaKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MockzillaKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MockzillaKotlinx_serialization_coreKSerializer <MockzillaKotlinx_serialization_coreSerializationStrategy, MockzillaKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MockzillaKotlinEnumCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MockzillaKtor_httpHttpMethod : MockzillaBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MockzillaKtor_httpHttpStatusCode : MockzillaBase <MockzillaKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MockzillaKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (MockzillaKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (MockzillaKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MockzillaKotlinThrowable : MockzillaBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
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
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MockzillaKotlinRuntimeException : MockzillaKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MockzillaKotlinIllegalStateException : MockzillaKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
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
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MockzillaKotlinx_serialization_coreEncoder
@required
- (id<MockzillaKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MockzillaKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MockzillaKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MockzillaKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MockzillaKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MockzillaKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MockzillaKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MockzillaKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MockzillaKotlinx_serialization_coreDecoder
@required
- (id<MockzillaKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MockzillaKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MockzillaKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MockzillaKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface MockzillaKtor_httpHttpMethodCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (MockzillaKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<MockzillaKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) MockzillaKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) MockzillaKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) MockzillaKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) MockzillaKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) MockzillaKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) MockzillaKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) MockzillaKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface MockzillaKtor_httpHttpStatusCodeCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
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
@property (readonly) NSArray<MockzillaKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MockzillaKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MockzillaKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MockzillaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MockzillaKotlinx_serialization_coreSerializersModule : MockzillaBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MockzillaKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MockzillaKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MockzillaKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MockzillaKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MockzillaKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MockzillaKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
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
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MockzillaKotlinx_serialization_coreSerialKind : MockzillaBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MockzillaKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MockzillaKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MockzillaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MockzillaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MockzillaKotlinNothing : MockzillaBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MockzillaKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MockzillaKotlinKClass>)kClass provider:(id<MockzillaKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MockzillaKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MockzillaKotlinKClass>)kClass serializer:(id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MockzillaKotlinKClass>)baseClass actualClass:(id<MockzillaKotlinKClass>)actualClass actualSerializer:(id<MockzillaKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MockzillaKotlinKClass>)baseClass defaultDeserializerProvider:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MockzillaKotlinKClass>)baseClass defaultDeserializerProvider:(id<MockzillaKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
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
