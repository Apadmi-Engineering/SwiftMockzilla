#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MockzillaKermitLogger, MockzillaKermitLoggerCompanion, MockzillaKermit_coreBaseLogger, MockzillaKermit_coreLogWriter, MockzillaKermit_coreSeverity, MockzillaKeychainSettings, MockzillaKotlinArray<T>, MockzillaKotlinByteArray, MockzillaKotlinByteIterator, MockzillaKotlinEnum<E>, MockzillaKotlinEnumCompanion, MockzillaKotlinException, MockzillaKotlinIllegalStateException, MockzillaKotlinKTypeProjection, MockzillaKotlinKTypeProjectionCompanion, MockzillaKotlinKVariance, MockzillaKotlinNothing, MockzillaKotlinPair<__covariant A, __covariant B>, MockzillaKotlinRuntimeException, MockzillaKotlinThrowable, MockzillaKotlinUnit, MockzillaKotlinx_io_coreBuffer, MockzillaKotlinx_serialization_coreSerialKind, MockzillaKotlinx_serialization_coreSerializersModule, MockzillaKtor_eventsEventDefinition<T>, MockzillaKtor_eventsEvents, MockzillaKtor_httpCookie, MockzillaKtor_httpCookieCompanion, MockzillaKtor_httpCookieEncoding, MockzillaKtor_httpHeadersBuilder, MockzillaKtor_httpHttpMethod, MockzillaKtor_httpHttpMethodCompanion, MockzillaKtor_httpHttpStatusCode, MockzillaKtor_httpHttpStatusCodeCompanion, MockzillaKtor_httpURLBuilder, MockzillaKtor_httpURLBuilderCompanion, MockzillaKtor_httpURLProtocol, MockzillaKtor_httpURLProtocolCompanion, MockzillaKtor_httpUrl, MockzillaKtor_httpUrlCompanion, MockzillaKtor_httpVersionCheckResult, MockzillaKtor_server_coreApplication, MockzillaKtor_server_coreApplicationCallPipeline, MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase, MockzillaKtor_server_coreApplicationConfigValueType, MockzillaKtor_server_coreApplicationReceivePipeline, MockzillaKtor_server_coreApplicationReceivePipelinePhases, MockzillaKtor_server_coreApplicationSendPipeline, MockzillaKtor_server_coreApplicationSendPipelinePhases, MockzillaKtor_server_coreConnectorType, MockzillaKtor_server_coreConnectorTypeCompanion, MockzillaKtor_server_coreRequestCookies, MockzillaKtor_server_coreResponseCookies, MockzillaKtor_server_coreResponseHeaders, MockzillaKtor_utilsAttributeKey<T>, MockzillaKtor_utilsGMTDate, MockzillaKtor_utilsGMTDateCompanion, MockzillaKtor_utilsLogLevel, MockzillaKtor_utilsMonth, MockzillaKtor_utilsMonthCompanion, MockzillaKtor_utilsPipeline<TSubject, TContext>, MockzillaKtor_utilsPipelinePhase, MockzillaKtor_utilsStringValuesBuilderImpl, MockzillaKtor_utilsTypeInfo, MockzillaKtor_utilsWeekDay, MockzillaKtor_utilsWeekDayCompanion, MockzillaMockzilla_commonAuthHeaderProviderHeader, MockzillaMockzilla_commonDashboardOptionsConfig, MockzillaMockzilla_commonDashboardOptionsConfigBuilder, MockzillaMockzilla_commonDashboardOptionsConfigCompanion, MockzillaMockzilla_commonDashboardOverridePreset, MockzillaMockzilla_commonDashboardOverridePresetCompanion, MockzillaMockzilla_commonDashboardOverridePresetType, MockzillaMockzilla_commonDashboardOverridePresetTypeCompanion, MockzillaMockzilla_commonEndpointConfiguration, MockzillaMockzilla_commonEndpointConfigurationBuilder, MockzillaMockzilla_commonMetaData, MockzillaMockzilla_commonMetaDataCompanion, MockzillaMockzilla_commonMockzillaConfig, MockzillaMockzilla_commonMockzillaConfigBuilder, MockzillaMockzilla_commonMockzillaConfigBuilderCompanion, MockzillaMockzilla_commonMockzillaConfigLogLevel, MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig, MockzillaMockzilla_commonMockzillaHttpResponse, MockzillaMockzilla_commonMockzillaHttpResponseCompanion, MockzillaMockzilla_commonMockzillaRuntimeParams, MockzillaMockzilla_commonPartialMockzillaHttpResponse, MockzillaMockzilla_commonPartialMockzillaHttpResponseCompanion, MockzillaMockzilla_commonRunTarget, MockzillaZeroConfDiscoveryServiceImplCompanion;

@protocol MockzillaKermit_coreLoggerConfig, MockzillaKermit_coreMutableLoggerConfig, MockzillaKotlinAnnotation, MockzillaKotlinAutoCloseable, MockzillaKotlinComparable, MockzillaKotlinCoroutineContext, MockzillaKotlinCoroutineContextElement, MockzillaKotlinCoroutineContextKey, MockzillaKotlinFunction, MockzillaKotlinIterator, MockzillaKotlinKAnnotatedElement, MockzillaKotlinKClass, MockzillaKotlinKClassifier, MockzillaKotlinKDeclarationContainer, MockzillaKotlinKType, MockzillaKotlinMapEntry, MockzillaKotlinSuspendFunction1, MockzillaKotlinSuspendFunction2, MockzillaKotlinx_coroutines_coreCoroutineScope, MockzillaKotlinx_coroutines_coreDisposableHandle, MockzillaKotlinx_io_coreRawSink, MockzillaKotlinx_io_coreRawSource, MockzillaKotlinx_io_coreSink, MockzillaKotlinx_io_coreSource, MockzillaKotlinx_serialization_coreCompositeDecoder, MockzillaKotlinx_serialization_coreCompositeEncoder, MockzillaKotlinx_serialization_coreDecoder, MockzillaKotlinx_serialization_coreDeserializationStrategy, MockzillaKotlinx_serialization_coreEncoder, MockzillaKotlinx_serialization_coreKSerializer, MockzillaKotlinx_serialization_coreSerialDescriptor, MockzillaKotlinx_serialization_coreSerializationStrategy, MockzillaKotlinx_serialization_coreSerializersModuleCollector, MockzillaKtor_httpHeaders, MockzillaKtor_httpParameters, MockzillaKtor_httpParametersBuilder, MockzillaKtor_httpRequestConnectionPoint, MockzillaKtor_httpVersion, MockzillaKtor_ioByteReadChannel, MockzillaKtor_ioJvmSerializable, MockzillaKtor_server_coreApplicationCall, MockzillaKtor_server_coreApplicationConfig, MockzillaKtor_server_coreApplicationConfigValue, MockzillaKtor_server_coreApplicationEngine, MockzillaKtor_server_coreApplicationEnvironment, MockzillaKtor_server_coreApplicationRequest, MockzillaKtor_server_coreApplicationResponse, MockzillaKtor_server_coreEngineConnectorConfig, MockzillaKtor_server_corePipelineCall, MockzillaKtor_server_corePipelineResponse, MockzillaKtor_server_coreResponsePushBuilder, MockzillaKtor_utilsAttributes, MockzillaKtor_utilsLogger, MockzillaKtor_utilsStringValues, MockzillaKtor_utilsStringValuesBuilder, MockzillaMockzilla_commonAuthHeaderProvider, MockzillaMockzilla_commonMockzillaHttpRequest, MockzillaMockzilla_commonMockzillaLogWriter, MockzillaZeroConfDiscoveryService;

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

__attribute__((swift_name("ZeroConfDiscoveryService")))
@protocol MockzillaZeroConfDiscoveryService
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)makeDiscoverableMetaData:(MockzillaMockzilla_commonMetaData *)metaData port:(int32_t)port completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("makeDiscoverable(metaData:port:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZeroConfDiscoveryServiceImpl")))
@interface MockzillaZeroConfDiscoveryServiceImpl : MockzillaBase <MockzillaZeroConfDiscoveryService>
- (instancetype)initWithLogger:(MockzillaKermitLogger *)logger keychainSettings:(MockzillaKeychainSettings *)keychainSettings __attribute__((swift_name("init(logger:keychainSettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaZeroConfDiscoveryServiceImplCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)makeDiscoverableMetaData:(MockzillaMockzilla_commonMetaData *)metaData port:(int32_t)port completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("makeDiscoverable(metaData:port:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZeroConfDiscoveryServiceImpl.Companion")))
@interface MockzillaZeroConfDiscoveryServiceImplCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaZeroConfDiscoveryServiceImplCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A collection of storage-backed key-value data
 *
 * This class allows storage of values with the [Int], [Long], [String], [Float], [Double], or [Boolean] types, using a
 * [String] reference as a key. Values will be persisted across app launches.
 *
 * The specific persistence mechanism is defined using a platform-specific implementation, so certain behavior may vary
 * across platforms. In general, updates will be reflected immediately in-memory, but will be persisted to disk
 * asynchronously.
 *
 * Operator extensions are defined in order to simplify usage. In addition, property delegates are provided for cleaner
 * syntax and better type-safety when interacting with values stored in a `Settings` instance.
 *
 * The KeychainSettings implementation saves data to the Apple keychain. Data is saved using the generic password type,
 * where keys are account names and values are treated as passwords. The value passed to the `String` constructor will
 * be used as the service name. It's also possible to pass custom key-value pairs as attributes that will be added to
 * every key, if the default behavior does not fit your needs.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeychainSettings")))
@interface MockzillaKeychainSettings : MockzillaBase
- (instancetype)initWithDefaultProperties:(MockzillaKotlinArray<MockzillaKotlinPair<id, id> *> *)defaultProperties __attribute__((swift_name("init(defaultProperties:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithService:(NSString *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (MockzillaBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (MockzillaDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (MockzillaFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (MockzillaInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (MockzillaLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
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
__attribute__((swift_name("KtorMockzillaHttpRequest")))
@interface MockzillaKtorMockzillaHttpRequest : MockzillaBase <MockzillaMockzilla_commonMockzillaHttpRequest>

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyAsBytesWithCompletionHandler:(void (^)(MockzillaKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyAsBytes(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyAsStringWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyAsString(completionHandler:)")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * The underlying ktor [ApplicationRequest](https://api.ktor.io/ktor-server/ktor-server-core/io.ktor.server.request/-application-request/index.html).
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationRequest> underlyingKtorRequest __attribute__((swift_name("underlyingKtorRequest")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
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

@interface MockzillaKotlinThrowable (Extensions)
- (BOOL)isSomeMatchInChainPredicate:(MockzillaBoolean *(^)(MockzillaKotlinThrowable *))predicate __attribute__((swift_name("isSomeMatchInChain(predicate:)")));
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


/**
 * Device and application metadata collected when Mockzilla starts. Displayed in the management
 * dashboard to identify the connected device, and used in ZeroConf service records.
 *
 * Don't add non-optional fields to this type since that will break backward compatibility
 *
 * @property appName The name of the application.
 * @property appPackage The application package name or bundle identifier.
 * @property operatingSystemVersion The OS version string of the device.
 * @property deviceModel The device model identifier.
 * @property appVersion The application version string.
 * @property runTarget The platform the server is running on, or `null` if unknown.
 * @property mockzillaVersion The version of the Mockzilla library.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMetaData")))
@interface MockzillaMockzilla_commonMetaData : MockzillaBase
- (instancetype)initWithAppName:(NSString *)appName appPackage:(NSString *)appPackage operatingSystemVersion:(NSString *)operatingSystemVersion deviceModel:(NSString *)deviceModel appVersion:(NSString *)appVersion runTarget:(MockzillaMockzilla_commonRunTarget * _Nullable)runTarget mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("init(appName:appPackage:operatingSystemVersion:deviceModel:appVersion:runTarget:mockzillaVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonMetaDataCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMockzilla_commonMetaData *)doCopyAppName:(NSString *)appName appPackage:(NSString *)appPackage operatingSystemVersion:(NSString *)operatingSystemVersion deviceModel:(NSString *)deviceModel appVersion:(NSString *)appVersion runTarget:(MockzillaMockzilla_commonRunTarget * _Nullable)runTarget mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("doCopy(appName:appPackage:operatingSystemVersion:deviceModel:appVersion:runTarget:mockzillaVersion:)")));

/**
 * Device and application metadata collected when Mockzilla starts. Displayed in the management
 * dashboard to identify the connected device, and used in ZeroConf service records.
 *
 * Don't add non-optional fields to this type since that will break backward compatibility
 *
 * @property appName The name of the application.
 * @property appPackage The application package name or bundle identifier.
 * @property operatingSystemVersion The OS version string of the device.
 * @property deviceModel The device model identifier.
 * @property appVersion The application version string.
 * @property runTarget The platform the server is running on, or `null` if unknown.
 * @property mockzillaVersion The version of the Mockzilla library.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Device and application metadata collected when Mockzilla starts. Displayed in the management
 * dashboard to identify the connected device, and used in ZeroConf service records.
 *
 * Don't add non-optional fields to this type since that will break backward compatibility
 *
 * @property appName The name of the application.
 * @property appPackage The application package name or bundle identifier.
 * @property operatingSystemVersion The OS version string of the device.
 * @property deviceModel The device model identifier.
 * @property appVersion The application version string.
 * @property runTarget The platform the server is running on, or `null` if unknown.
 * @property mockzillaVersion The version of the Mockzilla library.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Serialises this metadata to a [Map] for embedding in ZeroConf TXT records.
 *
 * @return A map of field names to string values.
 */
- (NSDictionary<NSString *, NSString *> *)toMap __attribute__((swift_name("toMap()")));

/**
 * Device and application metadata collected when Mockzilla starts. Displayed in the management
 * dashboard to identify the connected device, and used in ZeroConf service records.
 *
 * Don't add non-optional fields to this type since that will break backward compatibility
 *
 * @property appName The name of the application.
 * @property appPackage The application package name or bundle identifier.
 * @property operatingSystemVersion The OS version string of the device.
 * @property deviceModel The device model identifier.
 * @property appVersion The application version string.
 * @property runTarget The platform the server is running on, or `null` if unknown.
 * @property mockzillaVersion The version of the Mockzilla library.
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appName")
*/
@property (readonly) NSString *appName __attribute__((swift_name("appName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appPkg")
*/
@property (readonly) NSString *appPackage __attribute__((swift_name("appPackage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appVer")
*/
@property (readonly) NSString *appVersion __attribute__((swift_name("appVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="devModel")
*/
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));

/**
 * `true` if the server is running on an Android device or emulator.
 */
@property (readonly) BOOL isAndroid __attribute__((swift_name("isAndroid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mzVer")
*/
@property (readonly) NSString *mockzillaVersion __attribute__((swift_name("mockzillaVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="osVer")
*/
@property (readonly) NSString *operatingSystemVersion __attribute__((swift_name("operatingSystemVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="runTarg")
*/
@property (readonly) MockzillaMockzilla_commonRunTarget * _Nullable runTarget __attribute__((swift_name("runTarget")));
@end

__attribute__((swift_name("Kermit_coreBaseLogger")))
@interface MockzillaKermit_coreBaseLogger : MockzillaBase
- (instancetype)initWithConfig:(id<MockzillaKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (void)logSeverity:(MockzillaKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("log(severity:tag:throwable:message:)")));
- (void)logBlockSeverity:(MockzillaKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("logBlock(severity:tag:throwable:message:)")));
- (void)processLogSeverity:(MockzillaKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("processLog(severity:tag:throwable:message:)")));
@property (readonly) id<MockzillaKermit_coreLoggerConfig> config __attribute__((swift_name("config")));
@property (readonly) id<MockzillaKermit_coreMutableLoggerConfig> mutableConfig __attribute__((swift_name("mutableConfig")));
@end

__attribute__((swift_name("KermitLogger")))
@interface MockzillaKermitLogger : MockzillaKermit_coreBaseLogger
- (instancetype)initWithConfig:(id<MockzillaKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfig:(id<MockzillaKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKermitLoggerCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aWithTag:(NSString *)withTag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("a(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aMessageString:(NSString *)messageString throwable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("a(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aThrowable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("a(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dWithTag:(NSString *)withTag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("d(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dMessageString:(NSString *)messageString throwable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("d(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dThrowable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("d(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eWithTag:(NSString *)withTag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("e(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eMessageString:(NSString *)messageString throwable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("e(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eThrowable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("e(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iWithTag:(NSString *)withTag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("i(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iMessageString:(NSString *)messageString throwable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("i(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iThrowable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("i(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vWithTag:(NSString *)withTag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("v(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vMessageString:(NSString *)messageString throwable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("v(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vThrowable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("v(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wWithTag:(NSString *)withTag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("w(withTag:throwable:message:)"))) __attribute__((deprecated("Prefer the throwable-first overload and pass the tag using the named `tag` parameter.")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wMessageString:(NSString *)messageString throwable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("w(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wThrowable:(MockzillaKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("w(throwable:tag:message:)")));
- (MockzillaKermitLogger *)withTagTag:(NSString *)tag __attribute__((swift_name("withTag(tag:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface MockzillaKotlinPair<__covariant A, __covariant B> : MockzillaBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (MockzillaKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
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


/**
 * A client's request.
 * To learn how to handle incoming requests, see [Handling requests](https://ktor.io/docs/requests.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest)
 *
 * @see [io.ktor.server.application.ApplicationCall]
 * @see [io.ktor.server.response.ApplicationResponse]
 */
__attribute__((swift_name("Ktor_server_coreApplicationRequest")))
@protocol MockzillaKtor_server_coreApplicationRequest
@required

/**
 * Receives a raw body payload as a channel.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest.receiveChannel)
 */
- (id<MockzillaKtor_ioByteReadChannel>)receiveChannel __attribute__((swift_name("receiveChannel()")));

/**
 * An [ApplicationCall] instance this [ApplicationRequest] is attached to.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest.call)
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationCall> call __attribute__((swift_name("call")));

/**
 * Provides access to cookies for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest.cookies)
 */
@property (readonly) MockzillaKtor_server_coreRequestCookies *cookies __attribute__((swift_name("cookies")));

/**
 * Provides access to headers for the current request.
 * You can also get access to specific headers using dedicated extension functions,
 * such as [acceptEncoding], [contentType], [cacheControl], and so on.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest.headers)
 */
@property (readonly) id<MockzillaKtor_httpHeaders> headers __attribute__((swift_name("headers")));

/**
 * Provides access to connection details such as a host name, port, scheme, etc.
 * To get information about a request passed through an HTTP proxy or a load balancer,
 * install the ForwardedHeaders/XForwardedHeader plugin and use the [origin] property.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest.local)
 */
@property (readonly) id<MockzillaKtor_httpRequestConnectionPoint> local __attribute__((swift_name("local")));

/**
 * Provides access to decoded parameters of a URL query string.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest.queryParameters)
 */
@property (readonly) id<MockzillaKtor_httpParameters> queryParameters __attribute__((swift_name("queryParameters")));

/**
 * Provides access to parameters of a URL query string.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationRequest.rawQueryParameters)
 */
@property (readonly) id<MockzillaKtor_httpParameters> rawQueryParameters __attribute__((swift_name("rawQueryParameters")));
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
 * Used alongside [setMeanDelayMillis] to calculate the actual artificial delay on each invocation.
 *
 * @param delay delay in milliseconds
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setMeanDelayMillisDelay:(int32_t)delay __attribute__((swift_name("setMeanDelayMillis(delay:)")));

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


/**
 * Identifies the platform on which the Mockzilla server is running. Reported in [MetaData] and
 * visible in the management dashboard.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonRunTarget")))
@interface MockzillaMockzilla_commonRunTarget : MockzillaKotlinEnum<MockzillaMockzilla_commonRunTarget *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Identifies the platform on which the Mockzilla server is running. Reported in [MetaData] and
 * visible in the management dashboard.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *androiddevice __attribute__((swift_name("androiddevice")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *androidemulator __attribute__((swift_name("androidemulator")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *iosdevice __attribute__((swift_name("iosdevice")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *iossimulator __attribute__((swift_name("iossimulator")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *js __attribute__((swift_name("js")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *jvm __attribute__((swift_name("jvm")));
+ (MockzillaKotlinArray<MockzillaMockzilla_commonRunTarget *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaMockzilla_commonRunTarget *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMetaData.Companion")))
@interface MockzillaMockzilla_commonMetaDataCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonMetaDataCompanion *shared __attribute__((swift_name("shared")));

/**
 * Deserialises a [MetaData] instance from a [Map] of field names to string values, as
 * produced by [MetaData.toMap]. Intended for reconstructing metadata received via ZeroConf
 * TXT records.
 *
 * @return The deserialised [MetaData].
 */
- (MockzillaMockzilla_commonMetaData *)parseMetaData:(NSDictionary<NSString *, NSString *> *)receiver __attribute__((swift_name("parseMetaData(_:)")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Maximum length in characters for each metadata field. Fields collected from the platform
 * (device model, OS version, etc.) are truncated to this limit to comply with ZeroConf
 * DNS-SD payload constraints (RFC 1035).
 */
@property (readonly) int32_t maxFieldLength __attribute__((swift_name("maxFieldLength")));
@end

__attribute__((swift_name("Kermit_coreLoggerConfig")))
@protocol MockzillaKermit_coreLoggerConfig
@required
@property (readonly) NSArray<MockzillaKermit_coreLogWriter *> *logWriterList __attribute__((swift_name("logWriterList")));
@property (readonly) MockzillaKermit_coreSeverity *minSeverity __attribute__((swift_name("minSeverity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kermit_coreSeverity")))
@interface MockzillaKermit_coreSeverity : MockzillaKotlinEnum<MockzillaKermit_coreSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaKermit_coreSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) MockzillaKermit_coreSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) MockzillaKermit_coreSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) MockzillaKermit_coreSeverity *warn __attribute__((swift_name("warn")));
@property (class, readonly) MockzillaKermit_coreSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) MockzillaKermit_coreSeverity *assert __attribute__((swift_name("assert")));
+ (MockzillaKotlinArray<MockzillaKermit_coreSeverity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKermit_coreSeverity *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Kermit_coreMutableLoggerConfig")))
@protocol MockzillaKermit_coreMutableLoggerConfig <MockzillaKermit_coreLoggerConfig>
@required
- (void)setLogWriterList:(NSArray<MockzillaKermit_coreLogWriter *> *)value __attribute__((swift_name("setLogWriterList(_:)")));
- (void)setMinSeverity:(MockzillaKermit_coreSeverity *)value __attribute__((swift_name("setMinSeverity(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitLogger.Companion")))
@interface MockzillaKermitLoggerCompanion : MockzillaKermitLogger
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfig:(id<MockzillaKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKermitLoggerCompanion *shared __attribute__((swift_name("shared")));
- (void)addLogWriterLogWriter:(MockzillaKotlinArray<MockzillaKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));
- (void)setLogWritersLogWriter:(MockzillaKotlinArray<MockzillaKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("setLogWriters(logWriter:)")));
- (void)setLogWritersLogWriters:(NSArray<MockzillaKermit_coreLogWriter *> *)logWriters __attribute__((swift_name("setLogWriters(logWriters:)")));
- (void)setMinSeveritySeverity:(MockzillaKermit_coreSeverity *)severity __attribute__((swift_name("setMinSeverity(severity:)")));
- (void)setTagTag:(NSString *)tag __attribute__((swift_name("setTag(tag:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
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


/**
 * Channel for asynchronous reading of sequences of bytes.
 * This is a **single-reader channel**.
 *
 * Operations on this channel cannot be invoked concurrently.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel)
 */
__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol MockzillaKtor_ioByteReadChannel
@required

/**
 * Suspend the channel until it has [min] bytes or gets closed. Throws exception if the channel was closed with an
 * error. If there are bytes available in the channel, this function returns immediately.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel.awaitContent)
 *
 * @return return `false` eof is reached, otherwise `true`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(MockzillaBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) MockzillaKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<MockzillaKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * A scope in which coroutines run.
 *
 * A coroutine scope allows managing the lifecycles of several coroutines simultaneously
 * and setting the execution properties with which coroutines (its "children") are launched.
 *
 * Execution properties are [CoroutineContext.Element] values that may affect the behavior of
 * `kotlinx.coroutines`—for example, which thread pool a coroutine should run on.
 * See a more detailed explanation of coroutine context elements in a separate section below.
 *
 * A set of rules called "structured concurrency" ensures that the lifecycles of children
 * are nested inside the lifecycles of their parent scopes.
 * For example, if a scope is cancelled, all coroutines in it are cancelled too, and the scope itself
 * cannot be completed until all its children are completed.
 * See a more detailed explanation of structured concurrency in a separate section below.
 *
 * ## Using coroutine scopes
 *
 * The methods of this interface are not intended to be called directly.
 * Instead, a [CoroutineScope] is passed as a receiver to the coroutine builders such as [launch] and [async]
 * and affects the execution properties and lifetimes of the created coroutines.
 *
 * ## Coroutine context elements
 *
 * A [CoroutineScope] is defined by a set of [CoroutineContext] elements, one of which is typically a [Job],
 * described in the section on structured concurrency and responsible for managing lifetimes of coroutines.
 *
 * Other coroutine context elements include, but are not limited to, the following:
 *
 * - The scheduling policy, represented by a [CoroutineDispatcher] element.
 *   Some commonly used dispatchers are provided in the [Dispatchers] object.
 * - [CoroutineExceptionHandler] that defines how to handle coroutine failures that cannot
 *   be propagated to any other coroutine.
 * - A [CoroutineName] element that can be used to name coroutines for debugging purposes.
 * - On the JVM, a `ThreadContextElement` ensures that a specific thread-local value gets set on the thread
 *   that executes the coroutine.
 *
 * ## Obtaining a coroutine scope
 *
 * Manual implementations of this interface are not recommended.
 * Instead, a [CoroutineScope] should be obtained in a way that reflects the
 * intended structured concurrency relationships.
 *
 * ### Lexical scopes
 *
 * [coroutineScope] and [supervisorScope] functions can be called in any `suspend` function to define a scope
 * lexically, ensuring that all coroutines launched in this scope complete by the time the scope-limiting
 * function exits.
 *
 * ```
 * suspend fun doSomething() = coroutineScope { // scope `A`
 *     repeat(5) { outer ->
 *         // spawn a new coroutine in the scope `A`
 *         launch {
 *             println("Coroutine $outer started")
 *             coroutineScope { // scope `B`, separate for each `outer` coroutine
 *                 repeat(5) { inner ->
 *                     // spawn a new coroutine in the scope `B`
 *                     launch {
 *                         println("Coroutine $outer.$inner started")
 *                         delay(10.milliseconds)
 *                         println("Coroutine $outer.$inner finished")
 *                     }
 *                 }
 *             }
 *             // will only exit once all `Coroutine $outer.X finished` messages are printed
 *             println("Coroutine $outer finished")
 *         }
 *     }
 * } // will only exit once all `Coroutine X finished` messages are printed
 * ```
 *
 * This is the preferred way to create a [CoroutineScope].
 *
 * ### `CoroutineScope` constructor function
 *
 * When the lifecycle of the scope is not limited lexically
 * (for example, when coroutines should outlive the function that creates them)
 * but is tied to the lifecycle of some entity, the [CoroutineScope] constructor function can be used
 * to define a personal scope for the entity. This scope should be stored as a field in the entity.
 *
 * **The key part of using a custom `CoroutineScope` is cancelling it at the end of the lifecycle.**
 * The [CoroutineScope.cancel] extension function shall be used when the entity launching coroutines
 * is no longer needed. It cancels all the coroutines that might still be running on its behalf.
 *
 * ```
 * class MyEntity(scope: CoroutineScope? = null): AutoCloseable {
 *    // careful: do not write `get() =` here by accident!
 *    private val scope = scope ?: CoroutineScope(SupervisorJob() + CoroutineExceptionHandler { _, e ->
 *        println("Error in coroutine: $e")
 *    })
 *
 *    fun doSomethingWhileEntityExists() = scope.launch {
 *        while (true) {
 *            // do some work
 *            delay(50.milliseconds)
 *            println("Doing something")
 *        }
 *    }
 *
 *    override fun close() {
 *        // cancel all computations related to this entity
 *        scope.cancel()
 *    }
 * }
 *
 * fun main() {
 *     MyEntity().use { entity ->
 *         entity.doSomethingWhileEntityExists()
 *         Thread.sleep(200)
 *     }
 * }
 * ```
 *
 * Usually, a custom [CoroutineScope] should be created with a [SupervisorJob] and
 * a [CoroutineExceptionHandler] to handle exceptions in child coroutines.
 * See the documentation for the [CoroutineScope] constructor function for more details.
 * Also note that `MyEntity` accepts the `scope` parameter that can be used to pass a custom scope for testing.
 *
 * Sometimes, coroutine-aware frameworks provide [CoroutineScope] instances like this out of the box.
 * For example, on Android, all entities with a lifecycle and all `ViewModel` instances expose a [CoroutineScope]:
 * see [the corresponding documentation](https://developer.android.com/topic/libraries/architecture/coroutines).
 *
 * ### Taking another view of an existing scope
 *
 * Occasionally, several coroutines need to be launched with the same additional [CoroutineContext] that is not
 * present in the original scope.
 * In this case, the [CoroutineScope.plus] operator can be used to create a new view of an existing scope:
 *
 * ```
 * coroutineScope {
 *     val sameScopeButInUiThread = this + Dispatchers.Main
 *     sameScopeButInUiThread.launch {
 *         println("Running on the main thread")
 *     }
 *     launch {
 *         println("This will run using the original dispatcher")
 *     }
 *     sameScopeButInUiThread.launch {
 *         println("And this will also run on the main thread")
 *     }
 * }
 * ```
 *
 * The lifecycle of the new scope is the same as the original one, but the context includes new elements.
 *
 * ### Application lifecycle scope
 *
 * [GlobalScope] is a [CoroutineScope] that has the lifetime of the whole application.
 * Although it is convenient for launching top-level coroutines that are not tied to the lifecycle of any entity,
 * it is easy to misuse it and create memory or resource leaks when a coroutine actually should be tied
 * to the lifecycle of some entity.
 *
 * ```
 * GlobalScope.launch(CoroutineExceptionHandler { _, e ->
 *     println("Error in coroutine: $e")
 * }) {
 *    while (true) {
 *        println("I will be running forever, you cannot stop me!")
 *        delay(1.seconds)
 *    }
 * }
 * ```
 *
 * ### `by`-delegation
 *
 * When the approaches listed above are not applicable and a custom [CoroutineScope] implementation is needed,
 * it is recommended to use `by`-delegation to implement the interface:
 *
 * ```
 * class MyEntity : CoroutineScope by CoroutineScope(
 *     SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *         println("Error in coroutine: $e")
 *     }
 * )
 * ```
 *
 * ## Structured concurrency in detail
 *
 * ### Overview
 *
 * *Structured concurrency* is an approach to concurrent programming that attempts to clarify the lifecycles of
 * concurrent operations and to make them easier to reason about.
 *
 * Skim the following motivating example:
 *
 * ```
 * suspend fun downloadFile(url: String): ByteArray {
 *     return withContext(Dispatchers.IO) {
 *         // this code will execute on a thread for blocking work
 *         val file = byteArrayOf()
 *         // download the file
 *         file
 *     }
 * }
 *
 * suspend fun downloadAndCompareTwoFiles() {
 *     coroutineScope {
 *         val file1 = async {
 *             // if this fails, everything else quickly fails too
 *             downloadFile("http://example.com/file1")
 *         }
 *         val file2 = async {
 *             downloadFile("http://example.com/file2")
 *         }
 *         launch(Dispatchers.Main) {
 *             // create a separate coroutine on the UI thread
 *             if (file1.await().contentEquals(file2.await())) {
 *                 uiShow("Files are equal")
 *             } else {
 *                 uiShow("Files are not equal")
 *             }
 *         }
 *     }
 *     // this line will only run once all the coroutines created above
 *     // finish their work or get cancelled
 * }
 * ```
 *
 * In this example, two asynchronous operations are launched in parallel to download two files.
 * If one of the files fails to download, the other one is cancelled too, and the whole operation fails.
 * The `coroutineScope` function will not return until all the coroutines inside it are completed or cancelled.
 * In addition, it is possible to cancel the coroutine calling `downloadAndCompareTwoFiles`, and all the coroutines
 * inside it will be cancelled too.
 *
 * Without structured concurrency, ensuring that no resource leaks occur by the end of the operation and that
 * the operation responds promptly to failure and cancellation requests is challenging.
 * With structured concurrency, this orchestration is done automatically by the coroutine library,
 * and it is enough to specify the relationships between operations declaratively, as shown in the example,
 * without being overwhelmed by intricate inter-thread communications.
 *
 * ### Specifics
 *
 * Coroutines and [CoroutineScope] instances have an associated lifecycle.
 * A runtime representation of a lifecycle in `kotlinx.coroutines` is called a [Job].
 * [Job] instances form a hierarchy of parent-child relationships,
 * and the [Job] of every coroutine spawned in a [CoroutineScope] is a child of the [Job] of that scope.
 * This is often shortened to saying that the coroutine is the scope's child.
 *
 * See the [Job] documentation for a detailed explanation of the lifecycle stages.
 *
 * ```
 * coroutineScope {
 *     val job = coroutineContext[Job]
 *     val childJob = launch { }
 *     check(job === childJob.parent)
 * }
 * ```
 *
 * Because every coroutine has a lifecycle represented by a [Job], a [CoroutineScope] can be associated with it.
 * Most coroutine builders in `kotlinx.coroutines` expose the [CoroutineScope] of the coroutine on creation:
 *
 * ```
 * coroutineScope { // this block has a `CoroutineScope` receiver
 *     val parentScope = this
 *     var grandChildFinished = false
 *     val childJob = launch {
 *         // this block has a `CoroutineScope` receiver, too
 *         val childScope = this
 *         check(childScope.coroutineContext[Job]?.parent
 *             === parentScope.coroutineContext[Job])
 *         launch {
 *             // This block also has a `CoroutineScope` receiver!
 *             val grandChildScope = this
 *             check(grandChildScope.coroutineContext[Job]?.parent
 *                 === childScope.coroutineContext[Job])
 *             delay(100.milliseconds)
 *             grandChildFinished = true
 *         }
 *         // Because the grandchild coroutine
 *         // is a child of the child coroutine,
 *         // the child coroutine will not complete
 *         // until the grandchild coroutine does.
 *     }
 *     // Await completion of the child coroutine,
 *     // and therefore the grandchild coroutine too.
 *     childJob.join()
 *     check(grandChildFinished)
 * }
 * ```
 *
 * Such a [CoroutineScope] receiver is provided for [launch], [async], and other coroutine builders,
 * as well as for lexically scoping functions like [coroutineScope], [supervisorScope], and [withContext].
 * Each of these [CoroutineScope] instances is tied to the lifecycle of the code block it runs in.
 *
 * Like the example above shows, a coroutine does not complete until all its children are completed.
 * This means that [Job.join] on a [launch] or [async] result or [Deferred.await] on an [async] result
 * will not return until all the children of that coroutine are completed.
 * Likewise, lexically scoping functions like [coroutineScope] and [withContext] will not return
 * until all the coroutines launched in them are completed.
 *
 * #### Interactions between coroutines
 *
 * See the [Job] documentation for a detailed explanation of interactions between [Job] values.
 * Below is a summary of the most important points for structuring code in day-to-day usage.
 *
 * A coroutine cannot reach the final state until all its children have reached their final states.
 * See the example above.
 *
 * If a [CoroutineScope] is cancelled (either explicitly or because it corresponds to some coroutine that failed
 * with an exception), all its children are cancelled too:
 *
 * ```
 * val scope = CoroutineScope(
 *     SupervisorJob() + CoroutineExceptionHandler { _, e -> }
 * )
 * val job = scope.launch {
 *      // this coroutine will be cancelled
 *      awaitCancellation()
 * }
 * scope.cancel() // comment this out for the line below to hang
 * job.join() // finishes normally
 * ```
 *
 * A failure of a child coroutine causes the parent to fail with the same exception if all of the following conditions
 * are met:
 * 1. The exception is not a [CancellationException].
 * 2. The failed child coroutine was not created with lexically scoped coroutine builders
 *    like [coroutineScope] or [withContext].
 * 3. The parent coroutine's [Job] is not a [SupervisorJob].
 *
 * The same logic applies recursively to the parent of the parent, etc.
 * Example:
 *
 * ```
 * check(
 *     runCatching {
 *         coroutineScope {
 *             launch {
 *                 // This cancels the `coroutineScope` coroutine, since
 *                 // 1. The coroutine fails with a non-`CancellationException` exception,
 *                 // 2. `launch` is not a lexically scoped coroutine builder,
 *                 // 3. `coroutineScope` has a non-supervisor `Job`
 *                 throw IllegalStateException()
 *             }
 *             launch {
 *                 // this coroutine will be cancelled
 *                 // when the parent gets cancelled
 *                 awaitCancellation()
 *             }
 *         }
 *     }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * // The currently running coroutine will *not* be cancelled
 * // because the failed coroutine (`coroutineScope`) is lexically scoped.
 * check(currentCoroutineContext().isActive)
 * ```
 *
 * Child jobs can lead to the failure of the parent even if the parent has already finished its work
 * and was ready to return a value:
 *
 * ```
 * val deferred = GlobalScope.async {
 *     launch {
 *         delay(100.milliseconds)
 *         throw IllegalStateException()
 *     }
 *     10 // this value will be lost!
 * }
 * check(
 *     runCatching { deferred.await() }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * ```
 *
 * If several coroutines fail with non-[CancellationException] exceptions,
 * the first observed failure will be propagated, and the rest will be attached to it as
 * [suppressed exceptions][Throwable.suppressedExceptions].
 *
 * Failing with a [CancellationException] only cancels the coroutine itself and its children.
 * It does not affect the parent or sibling coroutines and is not considered a failure.
 *
 * ### How-to: stop failures of child coroutines from cancelling other coroutines
 *
 * If not affecting the [CoroutineScope] on a failure in a child coroutine is the desired behaviour,
 * then a [SupervisorJob] should be used instead of `Job()` when constructing the scope:
 *
 * ```
 * val scope = CoroutineScope(SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *     println("Coroutine failed with exception $e")
 * })
 * val failingCoroutine = scope.launch(Dispatchers.IO) {
 *     throw IllegalStateException("This exception will not cancel the scope")
 * }
 * failingCoroutine.join()
 * scope.launch(Dispatchers.IO) {
 *     println("This coroutine is active! See: ${isActive}")
 * }
 * ```
 *
 * Likewise, [supervisorScope] can replace [coroutineScope]:
 *
 * ```
 * supervisorScope {
 *     val failingCoroutine = launch(CoroutineExceptionHandler { _, e ->
 *         println("Coroutine failed with exception $e")
 *     }) {
 *         throw IllegalStateException("This exception will not cancel the scope")
 *     }
 *     failingCoroutine.join()
 *     launch {
 *         println("This coroutine is active! See: ${isActive}")
 *     }
 * }
 * ```
 *
 * ### How-to: prevent a child coroutine from being cancelled
 *
 * Sometimes, you may want to run a coroutine even if the parent coroutine is cancelled.
 * This pattern provides a way to achieve that:
 *
 * ```
 * scope.launch(start = CoroutineStart.ATOMIC) {
 *     // Do not move `NonCancellable` to the `context` argument of `launch`!
 *     withContext(NonCancellable) {
 *         // This code will run even if the parent coroutine is cancelled
 *     }
 * }
 * ```
 *
 * [CoroutineStart.ATOMIC] ensures that the new coroutine is not cancelled until it at least started to execute.
 * [NonCancellable] in [withContext] ensures that the code inside the block is executed even if the coroutine
 * created by [launch] is cancelled.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MockzillaKotlinx_coroutines_coreCoroutineScope
@required

/**
 * The context of this scope.
 *
 * The context represents various execution properties of the coroutines launched in this scope,
 * such as the [dispatcher][CoroutineDispatcher] or
 * the [procedure for handling exceptions without a propagation path][CoroutineExceptionHandler].
 * Except [GlobalScope], a [job][Job] instance for enforcing structured concurrency
 * must also be present in the context of every [CoroutineScope].
 * See the documentation of [CoroutineScope] for details.
 *
 * Accessing this property in general code is not recommended for any purposes
 * except accessing the [Job] instance for advanced usages.
 */
@property (readonly) id<MockzillaKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * A single act of communication between a client and server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall)
 *
 * @see [io.ktor.server.request.ApplicationRequest]
 * @see [io.ktor.server.response.ApplicationResponse]
 */
__attribute__((swift_name("Ktor_server_coreApplicationCall")))
@protocol MockzillaKtor_server_coreApplicationCall <MockzillaKotlinx_coroutines_coreCoroutineScope>
@required

/**
 * Receives content for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall.receiveNullable)
 *
 * @param typeInfo instance specifying type to be received.
 * @return instance of [T] received from this call.
 * @throws ContentTransformationException when content cannot be transformed to the requested type.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveNullableTypeInfo:(MockzillaKtor_utilsTypeInfo *)typeInfo completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveNullable(typeInfo:completionHandler:)")));

/**
 * Sends a [message] as a response.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall.respond)
 *
 * @see [io.ktor.server.response.PipelineResponse]
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)respondMessage:(id _Nullable)message typeInfo:(MockzillaKtor_utilsTypeInfo * _Nullable)typeInfo completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("respond(message:typeInfo:completionHandler:)")));

/**
 * An application being called.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall.application)
 */
@property (readonly) MockzillaKtor_server_coreApplication *application __attribute__((swift_name("application")));

/**
 * [Attributes] attached to this call.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall.attributes)
 */
@property (readonly) id<MockzillaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * Parameters associated with this call.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall.parameters)
 */
@property (readonly) id<MockzillaKtor_httpParameters> parameters __attribute__((swift_name("parameters")));

/**
 * An [ApplicationRequest] that is a client request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall.request)
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationRequest> request __attribute__((swift_name("request")));

/**
 * An [PipelineResponse] that is a server response.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCall.response)
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationResponse> response __attribute__((swift_name("response")));
@end


/**
 * Server request's cookies.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.RequestCookies)
 *
 * @see [ApplicationRequest.cookies]
 * @property request application request to fetch cookies from
 */
__attribute__((swift_name("Ktor_server_coreRequestCookies")))
@interface MockzillaKtor_server_coreRequestCookies : MockzillaBase
- (instancetype)initWithRequest:(id<MockzillaKtor_server_coreApplicationRequest>)request __attribute__((swift_name("init(request:)"))) __attribute__((objc_designated_initializer));

/**
 * Fetches cookies from a [request]. Could access cookies using an engine's native API.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<NSString *, NSString *> *)fetchCookies __attribute__((swift_name("fetchCookies()")));

/**
 * Gets a [name] cookie value decoded using an [encoding] strategy.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.RequestCookies.get)
 */
- (NSString * _Nullable)getName:(NSString *)name encoding:(MockzillaKtor_httpCookieEncoding *)encoding __attribute__((swift_name("get(name:encoding:)")));

/**
 * Provides access to raw cookie values.
 * These values are not decoded so could have percent encoded values, quotes, escape characters, and so on.
 * It is recommended to use [get] instead.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.RequestCookies.rawCookies)
 */
@property (readonly) NSDictionary<NSString *, NSString *> *rawCookies __attribute__((swift_name("rawCookies")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MockzillaKtor_server_coreApplicationRequest> request __attribute__((swift_name("request")));
@end


/**
 * Provides data structure for associating a [String] with a [List] of Strings
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues)
 */
__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MockzillaKtor_utilsStringValues
@required

/**
 * Checks if the given [name] exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * Checks if the given [name] and [value] pair exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));

/**
 * Gets all entries from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.entries)
 */
- (NSSet<id<MockzillaKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));

/**
 * Iterates over all entries in this map and calls [body] for each pair
 *
 * Can be optimized in implementations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.forEach)
 */
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));

/**
 * Gets first value from the list of values associated with a [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.get)
 */
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * Gets all values associated with the [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.getAll)
 */
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));

/**
 * Checks if this map is empty
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.isEmpty)
 */
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));

/**
 * Gets all names from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.names)
 */
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));

/**
 * Specifies if map has case-sensitive or case-insensitive names
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.caseInsensitiveName)
 */
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end


/**
 * Represents HTTP headers as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Headers)
 */
__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MockzillaKtor_httpHeaders <MockzillaKtor_utilsStringValues>
@required
@end


/**
 * Represents request address information is used to make a call.
 * There are at least two possible instances: "local" is how we see request at the server application and
 * "actual" is what we can recover from proxy provided headers.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint)
 */
__attribute__((swift_name("Ktor_httpRequestConnectionPoint")))
@protocol MockzillaKtor_httpRequestConnectionPoint
@required

/**
 * Request host, useful for virtual hosts routing
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.host)
 */
@property (readonly) NSString *host __attribute__((swift_name("host"))) __attribute__((unavailable("Use localHost or serverHost instead")));

/**
 * IP address on which the request was received.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.localAddress)
 */
@property (readonly) NSString *localAddress __attribute__((swift_name("localAddress")));

/**
 * Host on which the request was received, is useful for virtual hosts routing
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.localHost)
 */
@property (readonly) NSString *localHost __attribute__((swift_name("localHost")));

/**
 * Port on which the request was received, for example 80 or 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.localPort)
 */
@property (readonly) int32_t localPort __attribute__((swift_name("localPort")));

/**
 * Request HTTP method
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.method)
 */
@property (readonly) MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * Port, for example 80 or 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.port)
 */
@property (readonly) int32_t port __attribute__((swift_name("port"))) __attribute__((unavailable("Use localPort or serverPort instead")));

/**
 * Client address.
 * For [io.ktor.server.request.ApplicationRequest.local] instance could point to
 * a proxy our application running behind.
 * NEVER use it for user authentication as it can be easily falsified (user can simply set some HTTP headers
 * such as X-Forwarded-Host so you should NEVER rely on it in any security checks).
 * If you are going to use it to create a back-connection, please do it with care as an offender can easily
 * use it to force you to connect to some host that is not intended to be connected to so that may cause
 * serious consequences.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.remoteAddress)
 */
@property (readonly) NSString *remoteAddress __attribute__((swift_name("remoteAddress")));

/**
 * Client address or host name if it can be resolved.
 * For [io.ktor.server.request.ApplicationRequest.local] instance could point to
 * a proxy our application running behind.
 * NEVER use it for user authentication as it can be easily falsified (user can simply set some HTTP headers
 * such as X-Forwarded-Host so you should NEVER rely on it in any security checks).
 * If you are going to use it to create a back-connection, please do it with care as an offender can easily
 * use it to force you to connect to some host that is not intended to be connected to so that may cause
 * serious consequences.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.remoteHost)
 */
@property (readonly) NSString *remoteHost __attribute__((swift_name("remoteHost")));

/**
 * Client port.
 * For [io.ktor.server.request.ApplicationRequest.local.local] instance could point to
 * a proxy our application running behind.
 * NEVER use it for user authentication as it can be easily falsified (user can simply set some HTTP headers
 * such as X-Forwarded-Host so you should NEVER rely on it in any security checks).
 * If you are going to use it to create a back-connection, please do it with care as an offender can easily
 * use it to force you to connect to some host that is not intended to be connected to so that may cause
 * serious consequences.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.remotePort)
 */
@property (readonly) int32_t remotePort __attribute__((swift_name("remotePort")));

/**
 * Scheme, for example "http" or "https"
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.scheme)
 */
@property (readonly) NSString *scheme __attribute__((swift_name("scheme")));

/**
 * Host to which the request was sent, is useful for virtual hosts routing
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.serverHost)
 */
@property (readonly) NSString *serverHost __attribute__((swift_name("serverHost")));

/**
 * Port to which the request was sent, for example, 80 or 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.serverPort)
 */
@property (readonly) int32_t serverPort __attribute__((swift_name("serverPort")));

/**
 * URI path with no host, port and no schema specification, but possibly with query
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.uri)
 */
@property (readonly) NSString *uri __attribute__((swift_name("uri")));

/**
 * Protocol version string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.RequestConnectionPoint.version)
 */
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end


/**
 * Represents HTTP parameters as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Parameters)
 */
__attribute__((swift_name("Ktor_httpParameters")))
@protocol MockzillaKtor_httpParameters <MockzillaKtor_utilsStringValues>
@required
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


/**
 * An HTTP response returned by a mock endpoint handler. Returned from
 * [EndpointConfiguration.Builder.setDefaultHandler] and [EndpointConfiguration.Builder.setErrorHandler]
 * lambdas.
 *
 * @property statusCode The HTTP status code of the response. Defaults to `200 OK`.
 * @property headers HTTP response headers.
 * @property body The response body as a string.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaHttpResponse.Companion")))
@interface MockzillaMockzilla_commonMockzillaHttpResponseCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * An HTTP response returned by a mock endpoint handler. Returned from
 * [EndpointConfiguration.Builder.setDefaultHandler] and [EndpointConfiguration.Builder.setErrorHandler]
 * lambdas.
 *
 * @property statusCode The HTTP status code of the response. Defaults to `200 OK`.
 * @property headers HTTP response headers.
 * @property body The response body as a string.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonMockzillaHttpResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * An HTTP response returned by a mock endpoint handler. Returned from
 * [EndpointConfiguration.Builder.setDefaultHandler] and [EndpointConfiguration.Builder.setErrorHandler]
 * lambdas.
 *
 * @property statusCode The HTTP status code of the response. Defaults to `200 OK`.
 * @property headers HTTP response headers.
 * @property body The response body as a string.
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MockzillaKotlinEnumCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
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

__attribute__((swift_name("Kermit_coreLogWriter")))
@interface MockzillaKermit_coreLogWriter : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isLoggableTag:(NSString *)tag severity:(MockzillaKermit_coreSeverity *)severity __attribute__((swift_name("isLoggable(tag:severity:)")));
- (void)logSeverity:(MockzillaKermit_coreSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol MockzillaKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol MockzillaKotlinx_io_coreRawSource <MockzillaKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(MockzillaKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol MockzillaKotlinx_io_coreSource <MockzillaKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<MockzillaKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(MockzillaKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<MockzillaKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<MockzillaKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) MockzillaKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end


/**
 * Ktor type information.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.reflect.TypeInfo)
 *
 * @property type Source KClass<*>
 * @property kotlinType Kotlin reified type with all generic type parameters.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface MockzillaKtor_utilsTypeInfo : MockzillaBase
- (instancetype)initWithType:(id<MockzillaKotlinKClass>)type kotlinType:(id<MockzillaKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<MockzillaKotlinKClass>)type reifiedType:(id<MockzillaKotlinKType>)reifiedType kotlinType:(id<MockzillaKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MockzillaKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<MockzillaKotlinKClass> type __attribute__((swift_name("type")));
@end


/**
 * Represents an execution pipeline for asynchronous extensible computations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline)
 */
__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MockzillaKtor_utilsPipeline<TSubject, TContext> : MockzillaBase
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));

/**
 * Adds [phase] to the end of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.addPhase)
 */
- (void)addPhasePhase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));

/**
 * Invoked after an interceptor has been installed
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.afterIntercepted)
 */
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * Executes this pipeline in the given [context] and with the given [subject]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.execute)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));

/**
 * Inserts [phase] after the [reference] phase. If there are other phases inserted after [reference], then [phase]
 * will be inserted after them.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(a)
 * pipeline.insertPhaseAfter(a, b)
 * pipeline.insertPhaseAfter(a, c)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseAfter)
 */
- (void)insertPhaseAfterReference:(MockzillaKtor_utilsPipelinePhase *)reference phase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));

/**
 * Inserts [phase] before the [reference] phase.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(c)
 * pipeline.insertPhaseBefore(c, a)
 * pipeline.insertPhaseBefore(c, b)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseBefore)
 */
- (void)insertPhaseBeforeReference:(MockzillaKtor_utilsPipelinePhase *)reference phase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));

/**
 * Adds [block] to the [phase] of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.intercept)
 */
- (void)interceptPhase:(MockzillaKtor_utilsPipelinePhase *)phase block:(id<MockzillaKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));

/**
 * Merges another pipeline into this pipeline, maintaining relative phases order
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.merge)
 */
- (void)mergeFrom:(MockzillaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(MockzillaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));

/**
 * Reset current pipeline from other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.resetFrom)
 */
- (void)resetFromFrom:(MockzillaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Provides common place to store pipeline attributes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.attributes)
 */
@property (readonly) id<MockzillaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * Indicated if debug mode is enabled. In debug mode users will get more details in the stacktrace.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.developmentMode)
 */
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));

/**
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.isEmpty)
 *
 * @return `true` if there are no interceptors installed regardless number of phases
 */
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));

/**
 * Phases of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.items)
 */
@property (readonly) NSArray<MockzillaKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end


/**
 * Pipeline configuration for executing [PipelineCall] instances.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline)
 */
__attribute__((swift_name("Ktor_server_coreApplicationCallPipeline")))
@interface MockzillaKtor_server_coreApplicationCallPipeline : MockzillaKtor_utilsPipeline<MockzillaKotlinUnit *, id<MockzillaKtor_server_corePipelineCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode environment:(id<MockzillaKtor_server_coreApplicationEnvironment>)environment __attribute__((swift_name("init(developmentMode:environment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) id<MockzillaKtor_server_coreApplicationEnvironment> environment __attribute__((swift_name("environment")));

/**
 * Pipeline for receiving content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.receivePipeline)
 */
@property (readonly) MockzillaKtor_server_coreApplicationReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));

/**
 * Pipeline for sending content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.sendPipeline)
 */
@property (readonly) MockzillaKtor_server_coreApplicationSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end


/**
 * Represents configured and running web application, capable of handling requests.
 * It is also the application coroutine scope that is cancelled immediately at application stop so useful
 * for launching background coroutines.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.Application)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplication")))
@interface MockzillaKtor_server_coreApplication : MockzillaKtor_server_coreApplicationCallPipeline <MockzillaKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode environment:(id<MockzillaKtor_server_coreApplicationEnvironment>)environment __attribute__((swift_name("init(developmentMode:environment:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * Cancels the application job without waiting for join.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.Application.dispose)
 */
- (void)dispose __attribute__((swift_name("dispose()"))) __attribute__((deprecated("Use disposeAndJoin() instead.")));

/**
 * Called by [ApplicationEngine] when [Application] is terminated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.Application.disposeAndJoin)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disposeAndJoinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("disposeAndJoin(completionHandler:)")));
@property (readonly) id<MockzillaKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MockzillaKtor_server_coreApplicationEngine> engine __attribute__((swift_name("engine")));
@property (readonly) MockzillaKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) id<MockzillaKotlinCoroutineContext> parentCoroutineContext __attribute__((swift_name("parentCoroutineContext")));
@property NSString *rootPath __attribute__((swift_name("rootPath")));
@end


/**
 * Map of attributes accessible by [AttributeKey] in a typed manner
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes)
 */
__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MockzillaKtor_utilsAttributes
@required

/**
 * Gets a value of the attribute for the specified [key], or calls supplied [block] to compute its value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.computeIfAbsent)
 */
- (id)computeIfAbsentKey:(MockzillaKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));

/**
 * Checks if an attribute with the specified [key] exists
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.contains)
 */
- (BOOL)containsKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));

/**
 * Gets a value of the attribute for the specified [key], or throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.get)
 */
- (id)getKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key:)")));

/**
 * Gets a value of the attribute for the specified [key], or return `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.getOrNull)
 */
- (id _Nullable)getOrNullKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.put)
 */
- (void)putKey:(MockzillaKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));

/**
 * Removes an attribute with the specified [key]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.remove)
 */
- (void)removeKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.set)
 */
- (void)setKey:(MockzillaKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.take)
 */
- (id)takeKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, returns `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.takeOrNull)
 */
- (id _Nullable)takeOrNullKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));

/**
 * Returns [List] of all [AttributeKey] instances in this map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.allKeys)
 */
@property (readonly) NSArray<MockzillaKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end


/**
 * A server's response.
 * To learn how to send responses inside route handlers, see [Sending responses](https://ktor.io/docs/responses.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse)
 *
 * @see [ApplicationCall]
 * @see [io.ktor.server.request.ApplicationRequest]
 */
__attribute__((swift_name("Ktor_server_coreApplicationResponse")))
@protocol MockzillaKtor_server_coreApplicationResponse
@required

/**
 * Produces HTTP/2 push from a server to a client or sets an HTTP/1.x hint header
 * or does nothing. Exact behaviour is up to engine implementation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.push)
 */
- (void)pushBuilder:(id<MockzillaKtor_server_coreResponsePushBuilder>)builder __attribute__((swift_name("push(builder:)")));

/**
 * Returns a response status code or `null` if a status code is not set.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.status)
 */
- (MockzillaKtor_httpHttpStatusCode * _Nullable)status __attribute__((swift_name("status()")));

/**
 * Specifies a status code for a response.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.status)
 */
- (void)statusValue:(MockzillaKtor_httpHttpStatusCode *)value __attribute__((swift_name("status(value:)")));

/**
 * An [ApplicationCall] instance this [ApplicationResponse] is attached to.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.call)
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationCall> call __attribute__((swift_name("call")));

/**
 * Provides access to cookies for this response.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.cookies)
 */
@property (readonly) MockzillaKtor_server_coreResponseCookies *cookies __attribute__((swift_name("cookies")));

/**
 * Provides access to headers for the current response.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.headers)
 */
@property (readonly) MockzillaKtor_server_coreResponseHeaders *headers __attribute__((swift_name("headers")));

/**
 * Indicates that this response is already committed and no further changes are allowed.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.isCommitted)
 */
@property (readonly) BOOL isCommitted __attribute__((swift_name("isCommitted")));

/**
 * Indicates that this response is already fully sent to the client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationResponse.isSent)
 */
@property (readonly) BOOL isSent __attribute__((swift_name("isSent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MockzillaKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MockzillaKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MockzillaKotlinCoroutineContextElement> _Nullable)getKey_:(id<MockzillaKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<MockzillaKotlinCoroutineContext>)minusKeyKey:(id<MockzillaKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MockzillaKotlinCoroutineContext>)plusContext:(id<MockzillaKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end


/**
 * Cooke encoding strategy
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.CookieEncoding)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookieEncoding")))
@interface MockzillaKtor_httpCookieEncoding : MockzillaKotlinEnum<MockzillaKtor_httpCookieEncoding *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Cooke encoding strategy
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.CookieEncoding)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaKtor_httpCookieEncoding *raw __attribute__((swift_name("raw")));
@property (class, readonly) MockzillaKtor_httpCookieEncoding *dquotes __attribute__((swift_name("dquotes")));
@property (class, readonly) MockzillaKtor_httpCookieEncoding *uriEncoding __attribute__((swift_name("uriEncoding")));
@property (class, readonly) MockzillaKtor_httpCookieEncoding *base64Encoding __attribute__((swift_name("base64Encoding")));
+ (MockzillaKotlinArray<MockzillaKtor_httpCookieEncoding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKtor_httpCookieEncoding *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol MockzillaKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
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

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol MockzillaKotlinx_io_coreRawSink <MockzillaKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(MockzillaKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol MockzillaKotlinx_io_coreSink <MockzillaKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<MockzillaKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<MockzillaKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(MockzillaKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) MockzillaKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface MockzillaKotlinx_io_coreBuffer : MockzillaBase <MockzillaKotlinx_io_coreSource, MockzillaKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (MockzillaKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(MockzillaKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<MockzillaKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(MockzillaKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(MockzillaKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<MockzillaKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<MockzillaKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<MockzillaKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(MockzillaKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<MockzillaKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(MockzillaKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) MockzillaKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
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

__attribute__((swift_name("KotlinKType")))
@protocol MockzillaKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<MockzillaKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<MockzillaKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * Represents a phase in a pipeline
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.PipelinePhase)
 *
 * @param name a name for this phase
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MockzillaKtor_utilsPipelinePhase : MockzillaBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MockzillaKotlinSuspendFunction2 <MockzillaKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationEnvironment")))
@protocol MockzillaKtor_server_coreApplicationEnvironment
@required

/**
 * Configuration for the [Application]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationEnvironment.config)
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationConfig> config __attribute__((swift_name("config")));

/**
 * Instance of [Logger] to be used for logging.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationEnvironment.log)
 */
@property (readonly) id<MockzillaKtor_utilsLogger> log __attribute__((swift_name("log")));

/**
 * Provides events on Application lifecycle
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationEnvironment.monitor)
 */
@property (readonly) MockzillaKtor_eventsEvents *monitor __attribute__((swift_name("monitor"))) __attribute__((deprecated("Moved to Application")));
@end


/**
 * Standard phases for application call pipelines
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationCallPipeline.ApplicationPhase")))
@interface MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Standard phases for application call pipelines
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationPhase __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase *shared __attribute__((swift_name("shared")));

/**
 * Phase for processing a call and sending a response
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase.Call)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Call __attribute__((swift_name("Call")));

/**
 * Phase for handling unprocessed calls
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase.Fallback)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Fallback __attribute__((swift_name("Fallback")));

/**
 * Phase for plugins. Most plugins should intercept this phase.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase.Features)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Features __attribute__((swift_name("Features"))) __attribute__((unavailable("Renamed to Plugins")));

/**
 * Phase for tracing calls, useful for logging, metrics, error handling and so on
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase.Monitoring)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));

/**
 * Phase for plugins. Most plugins should intercept this phase.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase.Plugins)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Plugins __attribute__((swift_name("Plugins")));

/**
 * Phase for preparing call and it's attributes for processing
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.ApplicationCallPipeline.ApplicationPhase.Setup)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Setup __attribute__((swift_name("Setup")));
@end


/**
 * A pipeline for processing incoming content.
 * When executed, this pipeline starts with an instance of [ByteReadChannel].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationReceivePipeline)
 */
__attribute__((swift_name("Ktor_server_coreApplicationReceivePipeline")))
@interface MockzillaKtor_server_coreApplicationReceivePipeline : MockzillaKtor_utilsPipeline<id, id<MockzillaKtor_server_corePipelineCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreApplicationReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * Server response send pipeline.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline)
 */
__attribute__((swift_name("Ktor_server_coreApplicationSendPipeline")))
@interface MockzillaKtor_server_coreApplicationSendPipeline : MockzillaKtor_utilsPipeline<id, id<MockzillaKtor_server_corePipelineCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreApplicationSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * A single act of communication between a client and server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.application.PipelineCall)
 *
 * @see [io.ktor.server.request.PipelineRequest]
 * @see [io.ktor.server.response.PipelineResponse]
 */
__attribute__((swift_name("Ktor_server_corePipelineCall")))
@protocol MockzillaKtor_server_corePipelineCall <MockzillaKtor_server_coreApplicationCall>
@required
@end


/**
 * An engine which runs an application.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ApplicationEngine)
 */
__attribute__((swift_name("Ktor_server_coreApplicationEngine")))
@protocol MockzillaKtor_server_coreApplicationEngine
@required

/**
 * Local addresses for application connectors.
 * If [environment]'s [connector]s was configured to use port=0, you can use this function to get an actual port
 * for these connectors.
 * Available after a server is started.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ApplicationEngine.resolvedConnectors)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolvedConnectorsWithCompletionHandler:(void (^)(NSArray<id<MockzillaKtor_server_coreEngineConnectorConfig>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resolvedConnectors(completionHandler:)")));

/**
 * Starts this [ApplicationEngine].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ApplicationEngine.start)
 *
 * @param wait if true, then the `start` call blocks a current thread until it finishes its execution.
 * If you run `start` from the main thread with `wait = false` and nothing else blocking this thread,
 * then your application will be terminated without handling any requests.
 * @return returns this instance
 */
- (id<MockzillaKtor_server_coreApplicationEngine>)startWait:(BOOL)wait __attribute__((swift_name("start(wait:)")));

/**
 * Starts this [ApplicationEngine].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ApplicationEngine.startSuspend)
 *
 * @param wait if true, then the `start` call blocks a current thread until it finishes its execution.
 * If you run `start` from the main thread with `wait = false` and nothing else blocking this thread,
 * then your application will be terminated without handling any requests.
 * @return returns this instance
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startSuspendWait:(BOOL)wait completionHandler:(void (^)(id<MockzillaKtor_server_coreApplicationEngine> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startSuspend(wait:completionHandler:)")));

/**
 * Stops this [ApplicationEngine].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ApplicationEngine.stop)
 *
 * @param gracePeriodMillis the maximum amount of time for activity to cool down
 * @param timeoutMillis the maximum amount of time to wait until a server stops gracefully
 */
- (void)stopGracePeriodMillis:(int64_t)gracePeriodMillis timeoutMillis:(int64_t)timeoutMillis __attribute__((swift_name("stop(gracePeriodMillis:timeoutMillis:)")));

/**
 * Stops this [ApplicationEngine].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ApplicationEngine.stopSuspend)
 *
 * @param gracePeriodMillis the maximum amount of time for activity to cool down
 * @param timeoutMillis the maximum amount of time to wait until a server stops gracefully
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopSuspendGracePeriodMillis:(int64_t)gracePeriodMillis timeoutMillis:(int64_t)timeoutMillis completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopSuspend(gracePeriodMillis:timeoutMillis:completionHandler:)")));

/**
 * An environment used to run this engine.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ApplicationEngine.environment)
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationEnvironment> environment __attribute__((swift_name("environment")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface MockzillaKtor_eventsEvents : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Raises the event specified by [definition] with the [value] and calls all handlers.
 *
 * Handlers are called in order of subscriptions.
 * If some handler throws an exception, all remaining handlers will still run. The exception will eventually be re-thrown.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.raise)
 */
- (void)raiseDefinition:(MockzillaKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));

/**
 * Subscribe [handler] to an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.subscribe)
 */
- (id<MockzillaKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(MockzillaKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));

/**
 * Unsubscribe [handler] from an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.unsubscribe)
 */
- (void)unsubscribeDefinition:(MockzillaKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end


/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MockzillaKtor_utilsAttributeKey<T> : MockzillaBase
- (instancetype)initWithName:(NSString *)name type:(MockzillaKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (MockzillaKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(MockzillaKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * An HTTP/2 push builder interface.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponsePushBuilder)
 *
 * @property url push URL
 * @property headers request headers
 * @property method request method
 * @property versions request versions (last modification date, etag, and so on)
 */
__attribute__((swift_name("Ktor_server_coreResponsePushBuilder")))
@protocol MockzillaKtor_server_coreResponsePushBuilder
@required
@property (readonly) MockzillaKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MockzillaKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@property (readonly) NSMutableArray<id<MockzillaKtor_httpVersion>> *versions __attribute__((swift_name("versions")));
@end


/**
 * Server's response cookies.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseCookies)
 *
 * @see [ApplicationResponse.cookies]
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreResponseCookies")))
@interface MockzillaKtor_server_coreResponseCookies : MockzillaBase
- (instancetype)initWithResponse:(id<MockzillaKtor_server_corePipelineResponse>)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));

/**
 * Appends a cookie [item] using the `Set-Cookie` response header.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseCookies.append)
 */
- (void)appendItem:(MockzillaKtor_httpCookie *)item __attribute__((swift_name("append(item:)")));

/**
 * Appends a cookie using the `Set-Cookie` response header from the specified parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseCookies.append)
 */
- (void)appendName:(NSString *)name value:(NSString *)value encoding:(MockzillaKtor_httpCookieEncoding *)encoding maxAge:(MockzillaLong * _Nullable)maxAge expires:(MockzillaKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("append(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)")));

/**
 * Appends an already expired cookie. Useful to remove client cookies.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseCookies.appendExpired)
 */
- (void)appendExpiredName:(NSString *)name domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path __attribute__((swift_name("appendExpired(name:domain:path:)"))) __attribute__((unavailable("This method doesn't bypass all flags and extensions so it will be removed in future major release. Please consider using append with expires parameter instead.")));

/**
 * Gets a cookie from a response's `Set-Cookie` header.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseCookies.get)
 */
- (MockzillaKtor_httpCookie * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
@end


/**
 * Server's response headers.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders)
 *
 * @see [ApplicationResponse.headers]
 */
__attribute__((swift_name("Ktor_server_coreResponseHeaders")))
@interface MockzillaKtor_server_coreResponseHeaders : MockzillaBase

/**
 * Server's response headers.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders)
 *
 * @see [ApplicationResponse.headers]
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Server's response headers.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders)
 *
 * @see [ApplicationResponse.headers]
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/***
 * Builds a [Headers] instance from a response header values.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders.allValues)
 */
- (id<MockzillaKtor_httpHeaders>)allValues __attribute__((swift_name("allValues()")));

/**
 * Appends a response header with the specified [name] and [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders.append)
 *
 * @param safeOnly prevents from setting unsafe headers; `true` by default
 */
- (void)appendName:(NSString *)name value:(NSString *)value safeOnly:(BOOL)safeOnly __attribute__((swift_name("append(name:value:safeOnly:)")));

/**
 * Checks whether a [name] response header is set.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders.contains)
 */
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * An engine's header appending implementation.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)engineAppendHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("engineAppendHeader(name:value:)")));

/**
 * Gets a first response header with the specified [name] or returns `null`.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders.get)
 */
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * An engine's response header names extractor.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<NSString *> *)getEngineHeaderNames __attribute__((swift_name("getEngineHeaderNames()")));

/**
 * An engine's response header values extractor.
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<NSString *> *)getEngineHeaderValuesName:(NSString *)name __attribute__((swift_name("getEngineHeaderValues(name:)")));

/**
 * Gets values of a response header with the specified [name].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ResponseHeaders.values)
 */
- (NSArray<NSString *> *)valuesName:(NSString *)name __attribute__((swift_name("values(name:)")));

/**
 * A set of headers that is managed by an engine and should not be modified manually.
 *
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSSet<NSString *> *managedByEngineHeaders __attribute__((swift_name("managedByEngineHeaders")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MockzillaKotlinCoroutineContextElement <MockzillaKotlinCoroutineContext>
@required
@property (readonly) id<MockzillaKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MockzillaKotlinCoroutineContextKey
@required
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
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MockzillaKotlinKTypeProjection : MockzillaBase
- (instancetype)initWithVariance:(MockzillaKotlinKVariance * _Nullable)variance type:(id<MockzillaKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKotlinKTypeProjection *)doCopyVariance:(MockzillaKotlinKVariance * _Nullable)variance type:(id<MockzillaKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MockzillaKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MockzillaKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * Represents an application config node
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfig)
 */
__attribute__((swift_name("Ktor_server_coreApplicationConfig")))
@protocol MockzillaKtor_server_coreApplicationConfig
@required

/**
 * Get config child node or fail
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfig.config)
 *
 * @throws ApplicationConfigurationException
 */
- (id<MockzillaKtor_server_coreApplicationConfig>)configPath:(NSString *)path __attribute__((swift_name("config(path:)")));

/**
 * Get a list of child nodes for [path] or fail
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfig.configList)
 *
 * @throws ApplicationConfigurationException
 */
- (NSArray<id<MockzillaKtor_server_coreApplicationConfig>> *)configListPath:(NSString *)path __attribute__((swift_name("configList(path:)")));

/**
 * Returns the set of keys, found by recursing the root object.
 * All entries represent leaf nodes' keys, meaning that there would be no nested
 * objects directly included as values for returned keys.
 * It's still possible that entries may be a list and the lists may contain objects.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfig.keys)
 *
 * @return set of paths with non-null values, built up by recursing the entire tree of
 * config and creating an entry for each leaf value.
 */
- (NSSet<NSString *> *)keys __attribute__((swift_name("keys()")));

/**
 * Get config property with [path] or fail
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfig.property)
 *
 * @throws ApplicationConfigurationException
 */
- (id<MockzillaKtor_server_coreApplicationConfigValue>)propertyPath:(NSString *)path __attribute__((swift_name("property(path:)")));

/**
 * Get config property value for [path] or return `null`
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfig.propertyOrNull)
 */
- (id<MockzillaKtor_server_coreApplicationConfigValue> _Nullable)propertyOrNullPath:(NSString *)path __attribute__((swift_name("propertyOrNull(path:)")));

/**
 * Returns map representation of this config.
 * Values can be `String`, `Map<String, Any>`, `List<String>` and `List<Map<String, Any>>`
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfig.toMap)
 */
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@end

__attribute__((swift_name("Ktor_utilsLogger")))
@protocol MockzillaKtor_utilsLogger
@required
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)debugMessage:(NSString *)message cause:(MockzillaKotlinThrowable *)cause __attribute__((swift_name("debug(message:cause:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message cause:(MockzillaKotlinThrowable *)cause __attribute__((swift_name("error(message:cause:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)infoMessage:(NSString *)message cause:(MockzillaKotlinThrowable *)cause __attribute__((swift_name("info(message:cause:)")));
- (void)traceMessage:(NSString *)message __attribute__((swift_name("trace(message:)")));
- (void)traceMessage:(NSString *)message cause:(MockzillaKotlinThrowable *)cause __attribute__((swift_name("trace(message:cause:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
- (void)warnMessage:(NSString *)message cause:(MockzillaKotlinThrowable *)cause __attribute__((swift_name("warn(message:cause:)")));
@property (readonly) MockzillaKtor_utilsLogLevel *level __attribute__((swift_name("level")));
@end


/**
 * Pipeline phases.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationReceivePipeline.Phases)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationReceivePipeline.Phases")))
@interface MockzillaKtor_server_coreApplicationReceivePipelinePhases : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Pipeline phases.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationReceivePipeline.Phases)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_server_coreApplicationReceivePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Executes after all transformations.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationReceivePipeline.Phases.After)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * Executes before any transformations are made.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationReceivePipeline.Phases.Before)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Executes transformations.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.request.ApplicationReceivePipeline.Phases.Transform)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * Send pipeline phases.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationSendPipeline.Phases")))
@interface MockzillaKtor_server_coreApplicationSendPipelinePhases : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Send pipeline phases.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_server_coreApplicationSendPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The latest application phase that happens right before an engine sends a response.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases.After)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases.Before)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * A phase for processing `Content-Encoding`, like compression and partial content.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases.ContentEncoding)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *ContentEncoding __attribute__((swift_name("ContentEncoding")));

/**
 * A phase for Engine to send the response out to the client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases.Engine)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));

/**
 * A phase to render any current pipeline subject into [io.ktor.http.content.OutgoingContent].
 *
 * Beyond this phase, only [io.ktor.http.content.OutgoingContent] should be produced by any interceptor.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases.Render)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));

/**
 * A phase for handling `Transfer-Encoding`, like if chunked encoding is being done manually and not by engine.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases.TransferEncoding)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *TransferEncoding __attribute__((swift_name("TransferEncoding")));

/**
 * A transformation phase that can proceed with any supported data like String.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.ApplicationSendPipeline.Phases.Transform)
 */
@property (readonly) MockzillaKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * Represents a connector configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.EngineConnectorConfig)
 */
__attribute__((swift_name("Ktor_server_coreEngineConnectorConfig")))
@protocol MockzillaKtor_server_coreEngineConnectorConfig
@required

/**
 * The network interface this host binds to as an IP address or a hostname. If null or 0.0.0.0, then bind to all interfaces.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.EngineConnectorConfig.host)
 */
@property (readonly) NSString *host __attribute__((swift_name("host")));

/**
 * The port this application should be bound to.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.EngineConnectorConfig.port)
 */
@property (readonly) int32_t port __attribute__((swift_name("port")));

/**
 * Type of the connector, e.g HTTP or HTTPS.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.EngineConnectorConfig.type)
 */
@property (readonly) MockzillaKtor_server_coreConnectorType *type __attribute__((swift_name("type")));
@end


/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface MockzillaKtor_eventsEventDefinition<T> : MockzillaBase

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * A handle to an allocated object that can be disposed to make it eligible for garbage collection.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MockzillaKotlinx_coroutines_coreDisposableHandle
@required

/**
 * Disposes the corresponding object, making it eligible for garbage collection.
 * Repeated invocation of this function has no effect.
 */
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol MockzillaKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MockzillaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MockzillaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MockzillaKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MockzillaKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface MockzillaKtor_utilsStringValuesBuilderImpl : MockzillaBase <MockzillaKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MockzillaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MockzillaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MockzillaKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MockzillaKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MockzillaMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface MockzillaKtor_httpHeadersBuilder : MockzillaKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MockzillaKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end


/**
 * A URL builder with all mutable components
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder)
 *
 * @property protocol URL protocol (scheme)
 * @property host name without port (domain)
 * @property port port number
 * @property user username part (optional)
 * @property password password part (optional)
 * @property pathSegments URL path without query
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property trailingQuery keep a trailing question character even if there are no query parameters
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface MockzillaKtor_httpURLBuilder : MockzillaBase
- (instancetype)initWithProtocol:(MockzillaKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<MockzillaKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Build a [Url] instance (everything is copied to a new instance)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.build)
 */
- (MockzillaKtor_httpUrl *)build __attribute__((swift_name("build()")));

/**
 * Build a URL string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.buildString)
 */
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<MockzillaKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MockzillaKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property MockzillaKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property MockzillaKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * A content version.
 *
 * An example of version is [EntityTagVersion] or [LastModifiedVersion].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.Version)
 */
__attribute__((swift_name("Ktor_httpVersion")))
@protocol MockzillaKtor_httpVersion
@required

/**
 * Appends relevant headers to the builder.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.Version.appendHeadersTo)
 */
- (void)appendHeadersToBuilder:(MockzillaKtor_httpHeadersBuilder *)builder __attribute__((swift_name("appendHeadersTo(builder:)")));

/**
 * Checks [requestHeaders] against this version and returns [VersionCheckResult].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.Version.check)
 */
- (MockzillaKtor_httpVersionCheckResult *)checkRequestHeaders:(id<MockzillaKtor_httpHeaders>)requestHeaders __attribute__((swift_name("check(requestHeaders:)")));
@end


/**
 * A server's response that is used in [ApplicationPlugin].
 * To learn how to send responses inside route handlers, see [Sending responses](https://ktor.io/docs/responses.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.PipelineResponse)
 *
 * @see [PipelineCall]
 * @see [io.ktor.server.request.PipelineRequest]
 */
__attribute__((swift_name("Ktor_server_corePipelineResponse")))
@protocol MockzillaKtor_server_corePipelineResponse <MockzillaKtor_server_coreApplicationResponse>
@required

/**
 * A pipeline for sending content.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.response.PipelineResponse.pipeline)
 */
@property (readonly) MockzillaKtor_server_coreApplicationSendPipeline *pipeline __attribute__((swift_name("pipeline")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol MockzillaKtor_ioJvmSerializable
@required
@end


/**
 * Represents a cookie with name, content and a set of settings such as expiration, visibility and security.
 * A cookie with neither [expires] nor [maxAge] is a session cookie.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Cookie)
 *
 * @property name
 * @property value
 * @property encoding - cookie encoding type [CookieEncoding]
 * @property maxAge number of seconds to keep cookie
 * @property expires date when it expires
 * @property domain for which it is set
 * @property path for which it is set
 * @property secure send it via secure connection only
 * @property httpOnly only transfer cookie over HTTP, no access from JavaScript
 * @property extensions additional cookie extensions
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookie")))
@interface MockzillaKtor_httpCookie : MockzillaBase <MockzillaKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name value:(NSString *)value encoding:(MockzillaKtor_httpCookieEncoding *)encoding maxAge:(MockzillaInt * _Nullable)maxAge expires:(MockzillaKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("init(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpCookieCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_httpCookie *)doCopyName:(NSString *)name value:(NSString *)value encoding:(MockzillaKtor_httpCookieEncoding *)encoding maxAge:(MockzillaInt * _Nullable)maxAge expires:(MockzillaKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("doCopy(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)")));

/**
 * Represents a cookie with name, content and a set of settings such as expiration, visibility and security.
 * A cookie with neither [expires] nor [maxAge] is a session cookie.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Cookie)
 *
 * @property name
 * @property value
 * @property encoding - cookie encoding type [CookieEncoding]
 * @property maxAge number of seconds to keep cookie
 * @property expires date when it expires
 * @property domain for which it is set
 * @property path for which it is set
 * @property secure send it via secure connection only
 * @property httpOnly only transfer cookie over HTTP, no access from JavaScript
 * @property extensions additional cookie extensions
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a cookie with name, content and a set of settings such as expiration, visibility and security.
 * A cookie with neither [expires] nor [maxAge] is a session cookie.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Cookie)
 *
 * @property name
 * @property value
 * @property encoding - cookie encoding type [CookieEncoding]
 * @property maxAge number of seconds to keep cookie
 * @property expires date when it expires
 * @property domain for which it is set
 * @property path for which it is set
 * @property secure send it via secure connection only
 * @property httpOnly only transfer cookie over HTTP, no access from JavaScript
 * @property extensions additional cookie extensions
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a cookie with name, content and a set of settings such as expiration, visibility and security.
 * A cookie with neither [expires] nor [maxAge] is a session cookie.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Cookie)
 *
 * @property name
 * @property value
 * @property encoding - cookie encoding type [CookieEncoding]
 * @property maxAge number of seconds to keep cookie
 * @property expires date when it expires
 * @property domain for which it is set
 * @property path for which it is set
 * @property secure send it via secure connection only
 * @property httpOnly only transfer cookie over HTTP, no access from JavaScript
 * @property extensions additional cookie extensions
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable domain __attribute__((swift_name("domain")));
@property (readonly) MockzillaKtor_httpCookieEncoding *encoding __attribute__((swift_name("encoding")));
@property (readonly) MockzillaKtor_utilsGMTDate * _Nullable expires __attribute__((swift_name("expires")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) BOOL httpOnly __attribute__((swift_name("httpOnly")));
@property (readonly) MockzillaInt * _Nullable maxAge __attribute__((swift_name("maxAge")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) BOOL secure __attribute__((swift_name("secure")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface MockzillaKtor_utilsGMTDate : MockzillaBase <MockzillaKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MockzillaKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MockzillaKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MockzillaKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (MockzillaKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (MockzillaKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MockzillaKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MockzillaKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MockzillaKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) MockzillaKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
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


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MockzillaKotlinKVariance : MockzillaKotlinEnum<MockzillaKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MockzillaKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MockzillaKotlinKVariance *out __attribute__((swift_name("out")));
+ (MockzillaKotlinArray<MockzillaKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MockzillaKotlinKTypeProjectionCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (MockzillaKotlinKTypeProjection *)contravariantType:(id<MockzillaKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (MockzillaKotlinKTypeProjection *)covariantType:(id<MockzillaKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (MockzillaKotlinKTypeProjection *)invariantType:(id<MockzillaKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MockzillaKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end


/**
 * Represents an application config value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue)
 */
__attribute__((swift_name("Ktor_server_coreApplicationConfigValue")))
@protocol MockzillaKtor_server_coreApplicationConfigValue
@required

/**
 * Convert the property to an arbitrary type using deserialization.
 *
 * @param type the desired type of the return value provided by `typeInfo<T>()`
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue.getAs)
 */
- (id _Nullable)getAsType:(MockzillaKtor_utilsTypeInfo *)type __attribute__((swift_name("getAs(type:)")));

/**
 * Get property list value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue.getList)
 */
- (NSArray<NSString *> *)getList __attribute__((swift_name("getList()")));

/**
 * Get property as a map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue.getMap)
 */
- (NSDictionary<NSString *, id> *)getMap __attribute__((swift_name("getMap()")));

/**
 * Get property string value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue.getString)
 */
- (NSString *)getString __attribute__((swift_name("getString()")));

/**
 * Represents the type of the application configuration value.
 *
 * The `kind` property indicates the structure or nature of the application configuration value,
 * which can assist in its processing or resolution. This property corresponds to the [Type] enum,
 * which defines the following possible values:
 * - `Single`: A single configuration value.
 * - `List`: A collection of multiple values.
 * - `Object`: A structured or nested configuration object.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue.type)
 */
@property (readonly) MockzillaKtor_server_coreApplicationConfigValueType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsLogLevel")))
@interface MockzillaKtor_utilsLogLevel : MockzillaKotlinEnum<MockzillaKtor_utilsLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaKtor_utilsLogLevel *trace __attribute__((swift_name("trace")));
@property (class, readonly) MockzillaKtor_utilsLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MockzillaKtor_utilsLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) MockzillaKtor_utilsLogLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) MockzillaKtor_utilsLogLevel *error __attribute__((swift_name("error")));
+ (MockzillaKotlinArray<MockzillaKtor_utilsLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKtor_utilsLogLevel *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Represents a type of a connector, e.g HTTP or HTTPS.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ConnectorType)
 *
 * @param name name of the connector.
 *
 * Some engines can support other connector types, hence not a enum.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreConnectorType")))
@interface MockzillaKtor_server_coreConnectorType : MockzillaBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreConnectorTypeCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_server_coreConnectorType *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));

/**
 * Represents a type of a connector, e.g HTTP or HTTPS.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ConnectorType)
 *
 * @param name name of the connector.
 *
 * Some engines can support other connector types, hence not a enum.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a type of a connector, e.g HTTP or HTTPS.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ConnectorType)
 *
 * @param name name of the connector.
 *
 * Some engines can support other connector types, hence not a enum.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a type of a connector, e.g HTTP or HTTPS.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ConnectorType)
 *
 * @param name name of the connector.
 *
 * Some engines can support other connector types, hence not a enum.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MockzillaKtor_httpURLProtocol : MockzillaBase <MockzillaKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface MockzillaKtor_httpURLBuilderCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Represents an immutable URL
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url)
 *
 * @property protocol
 * @property host name without port (domain)
 * @property port the specified port or protocol default port
 * @property specifiedPort port number that was specified to override protocol's default
 * @property encodedPath encoded path without query string
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property user username part of URL
 * @property password password part of URL
 * @property trailingQuery keep trailing question character even if there are no query parameters
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MockzillaKtor_httpUrl : MockzillaBase <MockzillaKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) MockzillaKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MockzillaKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * A list containing the segments of the URL path.
 *
 * This property was designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.pathSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.pathSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.pathSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * To address this issue, the current [pathSegments] property will be renamed to [rawSegments].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.pathSegments)
 */
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MockzillaKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) MockzillaKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));

/**
 * A list containing the segments of the URL path.
 *
 * This property is designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.rawSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.rawSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.rawSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.rawSegments)
 */
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));

/**
 * A list of path segments derived from the URL, excluding any leading
 * and trailing empty segments.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * If you need to check for trailing slash and relative/absolute paths, please check the [rawSegments] property.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.segments)
 **/
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol MockzillaKtor_httpParametersBuilder <MockzillaKtor_utilsStringValuesBuilder>
@required
@end


/**
 * Represent the result of the version comparison between content being sent and HTTP request.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.VersionCheckResult)
 *
 * @param statusCode represents [HttpStatusCode] associated with the result.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpVersionCheckResult")))
@interface MockzillaKtor_httpVersionCheckResult : MockzillaKotlinEnum<MockzillaKtor_httpVersionCheckResult *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represent the result of the version comparison between content being sent and HTTP request.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.VersionCheckResult)
 *
 * @param statusCode represents [HttpStatusCode] associated with the result.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaKtor_httpVersionCheckResult *ok __attribute__((swift_name("ok")));
@property (class, readonly) MockzillaKtor_httpVersionCheckResult *notModified __attribute__((swift_name("notModified")));
@property (class, readonly) MockzillaKtor_httpVersionCheckResult *preconditionFailed __attribute__((swift_name("preconditionFailed")));
+ (MockzillaKotlinArray<MockzillaKtor_httpVersionCheckResult *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKtor_httpVersionCheckResult *> *entries __attribute__((swift_name("entries")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@end


/**
 * Represents a cookie with name, content and a set of settings such as expiration, visibility and security.
 * A cookie with neither [expires] nor [maxAge] is a session cookie.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Cookie)
 *
 * @property name
 * @property value
 * @property encoding - cookie encoding type [CookieEncoding]
 * @property maxAge number of seconds to keep cookie
 * @property expires date when it expires
 * @property domain for which it is set
 * @property path for which it is set
 * @property secure send it via secure connection only
 * @property httpOnly only transfer cookie over HTTP, no access from JavaScript
 * @property extensions additional cookie extensions
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookie.Companion")))
@interface MockzillaKtor_httpCookieCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a cookie with name, content and a set of settings such as expiration, visibility and security.
 * A cookie with neither [expires] nor [maxAge] is a session cookie.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Cookie)
 *
 * @property name
 * @property value
 * @property encoding - cookie encoding type [CookieEncoding]
 * @property maxAge number of seconds to keep cookie
 * @property expires date when it expires
 * @property domain for which it is set
 * @property path for which it is set
 * @property secure send it via secure connection only
 * @property httpOnly only transfer cookie over HTTP, no access from JavaScript
 * @property extensions additional cookie extensions
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpCookieCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents a cookie with name, content and a set of settings such as expiration, visibility and security.
 * A cookie with neither [expires] nor [maxAge] is a session cookie.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Cookie)
 *
 * @property name
 * @property value
 * @property encoding - cookie encoding type [CookieEncoding]
 * @property maxAge number of seconds to keep cookie
 * @property expires date when it expires
 * @property domain for which it is set
 * @property path for which it is set
 * @property secure send it via secure connection only
 * @property httpOnly only transfer cookie over HTTP, no access from JavaScript
 * @property extensions additional cookie extensions
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MockzillaKtor_utilsWeekDay : MockzillaKotlinEnum<MockzillaKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MockzillaKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) MockzillaKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MockzillaKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MockzillaKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MockzillaKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) MockzillaKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MockzillaKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (MockzillaKotlinArray<MockzillaKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MockzillaKtor_utilsMonth : MockzillaKotlinEnum<MockzillaKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MockzillaKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MockzillaKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MockzillaKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MockzillaKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MockzillaKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MockzillaKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MockzillaKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MockzillaKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MockzillaKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MockzillaKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MockzillaKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MockzillaKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (MockzillaKotlinArray<MockzillaKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface MockzillaKtor_utilsGMTDateCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * An instance of [GMTDate] corresponding to the epoch beginning
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate.Companion.START)
 */
@property (readonly) MockzillaKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end


/**
 * Represents the type of application configuration value.
 *
 * `Type` enum outlines the structure or behavior of the config value, aiding in its resolution or manipulation.
 *
 * - `NULL`: Indicates an absence of value.
 * - `SINGLE`: Indicates a single value.
 * - `LIST`: Represents multiple values in list form.
 * - `OBJECT`: Represents a structured or nested configuration object.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue.Type)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationConfigValueType")))
@interface MockzillaKtor_server_coreApplicationConfigValueType : MockzillaKotlinEnum<MockzillaKtor_server_coreApplicationConfigValueType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents the type of application configuration value.
 *
 * `Type` enum outlines the structure or behavior of the config value, aiding in its resolution or manipulation.
 *
 * - `NULL`: Indicates an absence of value.
 * - `SINGLE`: Indicates a single value.
 * - `LIST`: Represents multiple values in list form.
 * - `OBJECT`: Represents a structured or nested configuration object.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.config.ApplicationConfigValue.Type)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaKtor_server_coreApplicationConfigValueType *null __attribute__((swift_name("null")));
@property (class, readonly) MockzillaKtor_server_coreApplicationConfigValueType *single __attribute__((swift_name("single")));
@property (class, readonly) MockzillaKtor_server_coreApplicationConfigValueType *list __attribute__((swift_name("list")));
@property (class, readonly) MockzillaKtor_server_coreApplicationConfigValueType *object __attribute__((swift_name("object")));
+ (MockzillaKotlinArray<MockzillaKtor_server_coreApplicationConfigValueType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKtor_server_coreApplicationConfigValueType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreConnectorType.Companion")))
@interface MockzillaKtor_server_coreConnectorTypeCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_server_coreConnectorTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Non-secure HTTP connector.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ConnectorType.Companion.HTTP)
 */
@property (readonly) MockzillaKtor_server_coreConnectorType *HTTP __attribute__((swift_name("HTTP")));

/**
 * Secure HTTP connector.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ConnectorType.Companion.HTTPS)
 */
@property (readonly) MockzillaKtor_server_coreConnectorType *HTTPS __attribute__((swift_name("HTTPS")));

/**
 * Unix domain socket connector.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.server.engine.ConnectorType.Companion.UNIX)
 */
@property (readonly) MockzillaKtor_server_coreConnectorType *UNIX __attribute__((swift_name("UNIX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface MockzillaKtor_httpURLProtocolCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create an instance by [name] or use already existing instance
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.createOrDefault)
 */
- (MockzillaKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));

/**
 * HTTP with port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTP)
 */
@property (readonly) MockzillaKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));

/**
 * secure HTTPS with port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTPS)
 */
@property (readonly) MockzillaKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));

/**
 * Socks proxy url protocol.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.SOCKS)
 */
@property (readonly) MockzillaKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));

/**
 * Web socket over HTTP on port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WS)
 */
@property (readonly) MockzillaKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));

/**
 * Web socket over secure HTTPS on port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WSS)
 */
@property (readonly) MockzillaKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));

/**
 * Protocols by names map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.byName)
 */
@property (readonly) NSDictionary<NSString *, MockzillaKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface MockzillaKtor_httpUrlCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface MockzillaKtor_utilsWeekDayCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (MockzillaKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short week day name [WeekDay.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (MockzillaKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface MockzillaKtor_utilsMonthCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (MockzillaKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short month name [Month.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (MockzillaKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
