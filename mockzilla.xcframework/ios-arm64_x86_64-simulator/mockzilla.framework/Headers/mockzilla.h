#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MockzillaKermitLogger, MockzillaKermitLoggerCompanion, MockzillaKermit_coreBaseLogger, MockzillaKermit_coreLogWriter, MockzillaKermit_coreSeverity, MockzillaKeychainSettings, MockzillaKotlinArray<T>, MockzillaKotlinByteArray, MockzillaKotlinByteIterator, MockzillaKotlinEnum<E>, MockzillaKotlinEnumCompanion, MockzillaKotlinException, MockzillaKotlinIllegalStateException, MockzillaKotlinKTypeProjection, MockzillaKotlinKTypeProjectionCompanion, MockzillaKotlinKVariance, MockzillaKotlinNothing, MockzillaKotlinPair<__covariant A, __covariant B>, MockzillaKotlinRuntimeException, MockzillaKotlinThrowable, MockzillaKotlinUnit, MockzillaKotlinx_io_coreBuffer, MockzillaKotlinx_serialization_coreSerialKind, MockzillaKotlinx_serialization_coreSerializersModule, MockzillaKtor_eventsEventDefinition<T>, MockzillaKtor_eventsEvents, MockzillaKtor_httpCookie, MockzillaKtor_httpCookieCompanion, MockzillaKtor_httpCookieEncoding, MockzillaKtor_httpHeadersBuilder, MockzillaKtor_httpHttpMethod, MockzillaKtor_httpHttpMethodCompanion, MockzillaKtor_httpHttpStatusCode, MockzillaKtor_httpHttpStatusCodeCompanion, MockzillaKtor_httpURLBuilder, MockzillaKtor_httpURLBuilderCompanion, MockzillaKtor_httpURLProtocol, MockzillaKtor_httpURLProtocolCompanion, MockzillaKtor_httpUrl, MockzillaKtor_httpUrlCompanion, MockzillaKtor_httpVersionCheckResult, MockzillaKtor_server_coreApplication, MockzillaKtor_server_coreApplicationCallPipeline, MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase, MockzillaKtor_server_coreApplicationConfigValueType, MockzillaKtor_server_coreApplicationReceivePipeline, MockzillaKtor_server_coreApplicationReceivePipelinePhases, MockzillaKtor_server_coreApplicationSendPipeline, MockzillaKtor_server_coreApplicationSendPipelinePhases, MockzillaKtor_server_coreConnectorType, MockzillaKtor_server_coreConnectorTypeCompanion, MockzillaKtor_server_coreRequestCookies, MockzillaKtor_server_coreResponseCookies, MockzillaKtor_server_coreResponseHeaders, MockzillaKtor_utilsAttributeKey<T>, MockzillaKtor_utilsGMTDate, MockzillaKtor_utilsGMTDateCompanion, MockzillaKtor_utilsLogLevel, MockzillaKtor_utilsMonth, MockzillaKtor_utilsMonthCompanion, MockzillaKtor_utilsPipeline<TSubject, TContext>, MockzillaKtor_utilsPipelinePhase, MockzillaKtor_utilsStringValuesBuilderImpl, MockzillaKtor_utilsTypeInfo, MockzillaKtor_utilsWeekDay, MockzillaKtor_utilsWeekDayCompanion, MockzillaMockzilla_commonAuthHeaderProviderHeader, MockzillaMockzilla_commonDashboardOptionsConfig, MockzillaMockzilla_commonDashboardOptionsConfigBuilder, MockzillaMockzilla_commonDashboardOptionsConfigCompanion, MockzillaMockzilla_commonDashboardOverridePreset, MockzillaMockzilla_commonDashboardOverridePresetCompanion, MockzillaMockzilla_commonEndpointConfiguration, MockzillaMockzilla_commonEndpointConfigurationBuilder, MockzillaMockzilla_commonMetaData, MockzillaMockzilla_commonMetaDataCompanion, MockzillaMockzilla_commonMockzillaConfig, MockzillaMockzilla_commonMockzillaConfigBuilder, MockzillaMockzilla_commonMockzillaConfigBuilderCompanion, MockzillaMockzilla_commonMockzillaConfigLogLevel, MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig, MockzillaMockzilla_commonMockzillaHttpResponse, MockzillaMockzilla_commonMockzillaHttpResponseCompanion, MockzillaMockzilla_commonMockzillaRuntimeParams, MockzillaMockzilla_commonRunTarget, MockzillaZeroConfDiscoveryServiceImplCompanion;

@protocol MockzillaKermit_coreLoggerConfig, MockzillaKermit_coreMutableLoggerConfig, MockzillaKotlinAnnotation, MockzillaKotlinAutoCloseable, MockzillaKotlinComparable, MockzillaKotlinCoroutineContext, MockzillaKotlinCoroutineContextElement, MockzillaKotlinCoroutineContextKey, MockzillaKotlinFunction, MockzillaKotlinIterator, MockzillaKotlinKAnnotatedElement, MockzillaKotlinKClass, MockzillaKotlinKClassifier, MockzillaKotlinKDeclarationContainer, MockzillaKotlinKType, MockzillaKotlinMapEntry, MockzillaKotlinSuspendFunction2, MockzillaKotlinx_coroutines_coreCoroutineScope, MockzillaKotlinx_coroutines_coreDisposableHandle, MockzillaKotlinx_io_coreRawSink, MockzillaKotlinx_io_coreRawSource, MockzillaKotlinx_io_coreSink, MockzillaKotlinx_io_coreSource, MockzillaKotlinx_serialization_coreCompositeDecoder, MockzillaKotlinx_serialization_coreCompositeEncoder, MockzillaKotlinx_serialization_coreDecoder, MockzillaKotlinx_serialization_coreDeserializationStrategy, MockzillaKotlinx_serialization_coreEncoder, MockzillaKotlinx_serialization_coreKSerializer, MockzillaKotlinx_serialization_coreSerialDescriptor, MockzillaKotlinx_serialization_coreSerializationStrategy, MockzillaKotlinx_serialization_coreSerializersModuleCollector, MockzillaKtor_httpHeaders, MockzillaKtor_httpParameters, MockzillaKtor_httpParametersBuilder, MockzillaKtor_httpRequestConnectionPoint, MockzillaKtor_httpVersion, MockzillaKtor_ioByteReadChannel, MockzillaKtor_ioJvmSerializable, MockzillaKtor_server_coreApplicationCall, MockzillaKtor_server_coreApplicationConfig, MockzillaKtor_server_coreApplicationConfigValue, MockzillaKtor_server_coreApplicationEngine, MockzillaKtor_server_coreApplicationEnvironment, MockzillaKtor_server_coreApplicationRequest, MockzillaKtor_server_coreApplicationResponse, MockzillaKtor_server_coreEngineConnectorConfig, MockzillaKtor_server_corePipelineCall, MockzillaKtor_server_corePipelineResponse, MockzillaKtor_server_coreResponsePushBuilder, MockzillaKtor_utilsAttributes, MockzillaKtor_utilsLogger, MockzillaKtor_utilsStringValues, MockzillaKtor_utilsStringValuesBuilder, MockzillaMockzilla_commonAuthHeaderProvider, MockzillaMockzilla_commonMockzillaHttpRequest, MockzillaMockzilla_commonMockzillaLogWriter, MockzillaZeroConfDiscoveryService;

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
- (MockzillaKotlinUnit * _Nullable)stopBonjourService __attribute__((swift_name("stopBonjourService()")));
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


/**
 * @property port
 * @property endpoints
 * @property logLevel
 * @property isRelease
 * @property releaseModeConfig
 * @property localhostOnly
 * @property additionalLogWriters
 * @property isNetworkDiscoveryEnabled
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig")))
@interface MockzillaMockzilla_commonMockzillaConfig : MockzillaBase
- (instancetype)initWithPort:(int32_t)port endpoints:(NSArray<MockzillaMockzilla_commonEndpointConfiguration *> *)endpoints isRelease:(BOOL)isRelease localhostOnly:(BOOL)localhostOnly logLevel:(MockzillaMockzilla_commonMockzillaConfigLogLevel *)logLevel releaseModeConfig:(MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig *)releaseModeConfig isNetworkDiscoveryEnabled:(BOOL)isNetworkDiscoveryEnabled additionalLogWriters:(NSArray<id<MockzillaMockzilla_commonMockzillaLogWriter>> *)additionalLogWriters __attribute__((swift_name("init(port:endpoints:isRelease:localhostOnly:logLevel:releaseModeConfig:isNetworkDiscoveryEnabled:additionalLogWriters:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonMockzillaConfig *)doCopyPort:(int32_t)port endpoints:(NSArray<MockzillaMockzilla_commonEndpointConfiguration *> *)endpoints isRelease:(BOOL)isRelease localhostOnly:(BOOL)localhostOnly logLevel:(MockzillaMockzilla_commonMockzillaConfigLogLevel *)logLevel releaseModeConfig:(MockzillaMockzilla_commonMockzillaConfigReleaseModeConfig *)releaseModeConfig isNetworkDiscoveryEnabled:(BOOL)isNetworkDiscoveryEnabled additionalLogWriters:(NSArray<id<MockzillaMockzilla_commonMockzillaLogWriter>> *)additionalLogWriters __attribute__((swift_name("doCopy(port:endpoints:isRelease:localhostOnly:logLevel:releaseModeConfig:isNetworkDiscoveryEnabled:additionalLogWriters:)")));

/**
 * @property port
 * @property endpoints
 * @property logLevel
 * @property isRelease
 * @property releaseModeConfig
 * @property localhostOnly
 * @property additionalLogWriters
 * @property isNetworkDiscoveryEnabled
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property port
 * @property endpoints
 * @property logLevel
 * @property isRelease
 * @property releaseModeConfig
 * @property localhostOnly
 * @property additionalLogWriters
 * @property isNetworkDiscoveryEnabled
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @property port
 * @property endpoints
 * @property logLevel
 * @property isRelease
 * @property releaseModeConfig
 * @property localhostOnly
 * @property additionalLogWriters
 * @property isNetworkDiscoveryEnabled
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

@interface MockzillaMockzilla_commonMockzillaConfig (Extensions)
- (void)validateInfoPlistOrThrow __attribute__((swift_name("validateInfoPlistOrThrow()")));
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
__attribute__((swift_name("MockzillaKt")))
@interface MockzillaMockzillaKt : MockzillaBase

/**
 * Internal method to start the Mockzilla server. Consumer apps should prefer using the top-level
 * `startMockzilla()` function to avoid breaking changes.
 *
 * @param config The config with which to initialise mockzilla.
 *
 * @note This method converts instances of PortConflictException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (MockzillaMockzilla_commonMockzillaRuntimeParams * _Nullable)startMockzillaConfig:(MockzillaMockzilla_commonMockzillaConfig *)config error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("startMockzilla(config:)")));

/**
 * Stops the Mockzilla server,
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
 * @property appName
 * @property appPackage
 * @property operatingSystemVersion
 * @property deviceModel
 * @property appVersion
 * @property runTarget
 * @property mockzillaVersion
 *
 * Don't add non optional fields to this type since that will break backward compatibility
 *
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
 * @property appName
 * @property appPackage
 * @property operatingSystemVersion
 * @property deviceModel
 * @property appVersion
 * @property runTarget
 * @property mockzillaVersion
 *
 * Don't add non optional fields to this type since that will break backward compatibility
 *
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property appName
 * @property appPackage
 * @property operatingSystemVersion
 * @property deviceModel
 * @property appVersion
 * @property runTarget
 * @property mockzillaVersion
 *
 * Don't add non optional fields to this type since that will break backward compatibility
 *
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, NSString *> *)toMap __attribute__((swift_name("toMap()")));

/**
 * @property appName
 * @property appPackage
 * @property operatingSystemVersion
 * @property deviceModel
 * @property appVersion
 * @property runTarget
 * @property mockzillaVersion
 *
 * Don't add non optional fields to this type since that will break backward compatibility
 *
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *appPackage __attribute__((swift_name("appPackage")));
@property (readonly) NSString *appVersion __attribute__((swift_name("appVersion")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) BOOL isAndroid __attribute__((swift_name("isAndroid")));
@property (readonly) NSString *mockzillaVersion __attribute__((swift_name("mockzillaVersion")));
@property (readonly) NSString *operatingSystemVersion __attribute__((swift_name("operatingSystemVersion")));
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
__attribute__((swift_name("KotlinUnit")))
@interface MockzillaKotlinUnit : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
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


/**
 * @property name
 * @property key
 * @property shouldFail
 * @property delay
 * @property endpointMatcher
 * @property versionCode
 * @property defaultHandler
 * @property errorHandler
 * @property dashboardOptionsConfig
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonEndpointConfiguration")))
@interface MockzillaMockzilla_commonEndpointConfiguration : MockzillaBase
- (instancetype)initWithName:(NSString *)name key:(id)key shouldFail:(BOOL)shouldFail delay:(MockzillaInt * _Nullable)delay dashboardOptionsConfig:(MockzillaMockzilla_commonDashboardOptionsConfig *)dashboardOptionsConfig versionCode:(int32_t)versionCode endpointMatcher:(MockzillaBoolean *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))endpointMatcher defaultHandler:(MockzillaMockzilla_commonMockzillaHttpResponse *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))defaultHandler errorHandler:(MockzillaMockzilla_commonMockzillaHttpResponse *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))errorHandler __attribute__((swift_name("init(name:key:shouldFail:delay:dashboardOptionsConfig:versionCode:endpointMatcher:defaultHandler:errorHandler:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonEndpointConfiguration *)doCopyName:(NSString *)name key:(id)key shouldFail:(BOOL)shouldFail delay:(MockzillaInt * _Nullable)delay dashboardOptionsConfig:(MockzillaMockzilla_commonDashboardOptionsConfig *)dashboardOptionsConfig versionCode:(int32_t)versionCode endpointMatcher:(MockzillaBoolean *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))endpointMatcher defaultHandler:(MockzillaMockzilla_commonMockzillaHttpResponse *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))defaultHandler errorHandler:(MockzillaMockzilla_commonMockzillaHttpResponse *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))errorHandler __attribute__((swift_name("doCopy(name:key:shouldFail:delay:dashboardOptionsConfig:versionCode:endpointMatcher:defaultHandler:errorHandler:)")));

/**
 * @property name
 * @property key
 * @property shouldFail
 * @property delay
 * @property endpointMatcher
 * @property versionCode
 * @property defaultHandler
 * @property errorHandler
 * @property dashboardOptionsConfig
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property name
 * @property key
 * @property shouldFail
 * @property delay
 * @property endpointMatcher
 * @property versionCode
 * @property defaultHandler
 * @property errorHandler
 * @property dashboardOptionsConfig
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @property name
 * @property key
 * @property shouldFail
 * @property delay
 * @property endpointMatcher
 * @property versionCode
 * @property defaultHandler
 * @property errorHandler
 * @property dashboardOptionsConfig
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MockzillaMockzilla_commonDashboardOptionsConfig *dashboardOptionsConfig __attribute__((swift_name("dashboardOptionsConfig")));
@property (readonly) MockzillaMockzilla_commonMockzillaHttpResponse *(^defaultHandler)(id<MockzillaMockzilla_commonMockzillaHttpRequest>) __attribute__((swift_name("defaultHandler")));
@property (readonly) MockzillaInt * _Nullable delay __attribute__((swift_name("delay")));
@property (readonly) MockzillaBoolean *(^endpointMatcher)(id<MockzillaMockzilla_commonMockzillaHttpRequest>) __attribute__((swift_name("endpointMatcher")));
@property (readonly) MockzillaMockzilla_commonMockzillaHttpResponse *(^errorHandler)(id<MockzillaMockzilla_commonMockzillaHttpRequest>) __attribute__((swift_name("errorHandler")));
@property (readonly) id key __attribute__((swift_name("key")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL shouldFail __attribute__((swift_name("shouldFail")));
@property (readonly) int32_t versionCode __attribute__((swift_name("versionCode")));
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
__attribute__((swift_name("Mockzilla_commonMockzillaConfig.LogLevel")))
@interface MockzillaMockzilla_commonMockzillaConfigLogLevel : MockzillaKotlinEnum<MockzillaMockzilla_commonMockzillaConfigLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
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

__attribute__((swift_name("Mockzilla_commonMockzillaLogWriter")))
@protocol MockzillaMockzilla_commonMockzillaLogWriter
@required
- (void)logLogLevel:(MockzillaMockzilla_commonMockzillaConfigLogLevel *)logLevel message:(NSString *)message tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(logLevel:message:tag:throwable:)")));
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
 * @property config
 * @property mockBaseUrl
 * @property apiBaseUrl
 * @property port
 * @property authHeaderProvider
 * @property mockzillaVersion
 * @property ip
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaRuntimeParams")))
@interface MockzillaMockzilla_commonMockzillaRuntimeParams : MockzillaBase
- (instancetype)initWithConfig:(MockzillaMockzilla_commonMockzillaConfig *)config ip:(NSString *)ip mockBaseUrl:(NSString *)mockBaseUrl apiBaseUrl:(NSString *)apiBaseUrl port:(int32_t)port authHeaderProvider:(id<MockzillaMockzilla_commonAuthHeaderProvider>)authHeaderProvider mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("init(config:ip:mockBaseUrl:apiBaseUrl:port:authHeaderProvider:mockzillaVersion:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonMockzillaRuntimeParams *)doCopyConfig:(MockzillaMockzilla_commonMockzillaConfig *)config ip:(NSString *)ip mockBaseUrl:(NSString *)mockBaseUrl apiBaseUrl:(NSString *)apiBaseUrl port:(int32_t)port authHeaderProvider:(id<MockzillaMockzilla_commonAuthHeaderProvider>)authHeaderProvider mockzillaVersion:(NSString *)mockzillaVersion __attribute__((swift_name("doCopy(config:ip:mockBaseUrl:apiBaseUrl:port:authHeaderProvider:mockzillaVersion:)")));

/**
 * @property config
 * @property mockBaseUrl
 * @property apiBaseUrl
 * @property port
 * @property authHeaderProvider
 * @property mockzillaVersion
 * @property ip
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property config
 * @property mockBaseUrl
 * @property apiBaseUrl
 * @property port
 * @property authHeaderProvider
 * @property mockzillaVersion
 * @property ip
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @property config
 * @property mockBaseUrl
 * @property apiBaseUrl
 * @property port
 * @property authHeaderProvider
 * @property mockzillaVersion
 * @property ip
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig.Builder")))
@interface MockzillaMockzilla_commonMockzillaConfigBuilder : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonMockzillaConfigBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Register an new endpoint configuration
 *
 * @param endpoint
 * @return
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)addEndpointEndpoint:(MockzillaMockzilla_commonEndpointConfiguration *)endpoint __attribute__((swift_name("addEndpoint(endpoint:)")));

/**
 * Register an new endpoint configuration
 *
 * @param endpoint
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)addEndpointEndpoint_:(MockzillaMockzilla_commonEndpointConfigurationBuilder *)endpoint __attribute__((swift_name("addEndpoint(endpoint_:)")));

/**
 * Register an additional log writer.
 *
 * Mockzilla logs will then log to standard output and to any additional log writers
 *
 * @param logWriter
 * @return
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)addLogWriterLogWriter:(id<MockzillaMockzilla_commonMockzillaLogWriter>)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));

/**
 * Completes the builder pattern, returning an immutable config.
 *
 * @return
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
 * @param isRelease
 */
- (MockzillaMockzilla_commonMockzillaConfigBuilder *)setIsReleaseModeEnabledIsRelease:(BOOL)isRelease __attribute__((swift_name("setIsReleaseModeEnabled(isRelease:)")));

/**
 * Setting this value to `true` means the mockzilla server will only accept calls from localhost.
 * Calls from other IPs will be blocked (including blocking the Mockzilla web interface)
 *
 * @param localhostOnly
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
 * choose it's port auto-magically.
 *
 * @param port
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonRunTarget")))
@interface MockzillaMockzilla_commonRunTarget : MockzillaKotlinEnum<MockzillaMockzilla_commonRunTarget *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *androiddevice __attribute__((swift_name("androiddevice")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *androidemulator __attribute__((swift_name("androidemulator")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *iosdevice __attribute__((swift_name("iosdevice")));
@property (class, readonly) MockzillaMockzilla_commonRunTarget *iossimulator __attribute__((swift_name("iossimulator")));
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
- (MockzillaMockzilla_commonMetaData *)parseMetaData:(NSDictionary<NSString *, NSString *> *)receiver __attribute__((swift_name("parseMetaData(_:)")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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
- (void)aTag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("a(tag:throwable:message:)")));
- (void)addLogWriterLogWriter:(MockzillaKotlinArray<MockzillaKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));
- (void)dTag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("d(tag:throwable:message:)")));
- (void)eTag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("e(tag:throwable:message:)")));
- (void)iTag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("i(tag:throwable:message:)")));
- (void)setLogWritersLogWriter:(MockzillaKotlinArray<MockzillaKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("setLogWriters(logWriter:)")));
- (void)setLogWritersLogWriters:(NSArray<MockzillaKermit_coreLogWriter *> *)logWriters __attribute__((swift_name("setLogWriters(logWriters:)")));
- (void)setMinSeveritySeverity:(MockzillaKermit_coreSeverity *)severity __attribute__((swift_name("setMinSeverity(severity:)")));
- (void)setTagTag:(NSString *)tag __attribute__((swift_name("setTag(tag:)")));
- (void)vTag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("v(tag:throwable:message:)")));
- (void)wTag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("w(tag:throwable:message:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MockzillaKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
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
 * @property errorPresets
 * @property successPresets
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property errorPresets
 * @property successPresets
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @property errorPresets
 * @property successPresets
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *errorPresets __attribute__((swift_name("errorPresets")));
@property (readonly) NSArray<MockzillaMockzilla_commonDashboardOverridePreset *> *successPresets __attribute__((swift_name("successPresets")));
@end

__attribute__((swift_name("Mockzilla_commonMockzillaHttpRequest")))
@protocol MockzillaMockzilla_commonMockzillaHttpRequest
@required

/**
 * @return The request body as a ByteArray. Probably only useful for non-string request payload.
 * Most use cases probably should use [bodyAsString]
 * It's safe to call this method multiple times.
 */
- (MockzillaKotlinByteArray *)bodyAsBytes __attribute__((swift_name("bodyAsBytes()")));

/**
 * @return The request body as a string. It's safe to call this method multiple times.
 */
- (NSString *)bodyAsString __attribute__((swift_name("bodyAsString()")));

/**
 * The string representation of the request body
 */
@property (readonly) NSString *body __attribute__((swift_name("body"))) __attribute__((deprecated("`body`is deprecated")));

/**
 * Network request's headers
 */
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));

/**
 * Network request method
 */
@property (readonly) MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * The underlying ktor [ApplicationRequest](https://api.ktor.io/ktor-server/ktor-server-core/io.ktor.server.request/-application-request/index.html).
 */
@property (readonly) id<MockzillaKtor_server_coreApplicationRequest> underlyingKtorRequest __attribute__((swift_name("underlyingKtorRequest")));

/**
 * The full uri of the network request
 */
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end


/**
 * @property statusCode
 * @property headers
 * @property body
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
 * @property statusCode
 * @property headers
 * @property body
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property statusCode
 * @property headers
 * @property body
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @property statusCode
 * @property headers
 * @property body
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MockzillaKotlinEnumCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Mockzilla_commonAuthHeaderProvider")))
@protocol MockzillaMockzilla_commonAuthHeaderProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)generateHeaderWithCompletionHandler:(void (^)(MockzillaMockzilla_commonAuthHeaderProviderHeader * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("generateHeader(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaConfig.BuilderCompanion")))
@interface MockzillaMockzilla_commonMockzillaConfigBuilderCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonMockzillaConfigBuilderCompanion *shared __attribute__((swift_name("shared")));
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
 * @param action
 * @return
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)configureDashboardOverridesAction:(MockzillaMockzilla_commonDashboardOptionsConfigBuilder *(^)(MockzillaMockzilla_commonDashboardOptionsConfigBuilder *))action __attribute__((swift_name("configureDashboardOverrides(action:)")));

/**
 * The block called when a network request is made to this endpoint. Note: If the value of
 * [setShouldFail] causes Mockzilla to generate a failure response, then this block
 * will *not* be called, instead the block specified by [setErrorHandler] is called.
 *
 * @param handler
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setDefaultHandlerHandler:(MockzillaMockzilla_commonMockzillaHttpResponse *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))handler __attribute__((swift_name("setDefaultHandler(handler:)")));

/**
 * No longer supported
 *
 * @param delay delay in milliseconds
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setDelayVarianceMillisVariance:(int32_t)variance __attribute__((swift_name("setDelayVarianceMillis(variance:)"))) __attribute__((deprecated("No longer supported")));

/**
 * The block called when a network request is made to this endpoint but Mockzilladecides to
 * simulate a server failure.
 *
 * @param handler
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setErrorHandlerHandler:(MockzillaMockzilla_commonMockzillaHttpResponse *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))handler __attribute__((swift_name("setErrorHandler(handler:)")));

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
 * @param name
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
 * @param regex
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setPatternRegex:(NSString *)regex __attribute__((swift_name("setPattern(regex:)")));

/**
 * Specifies whether Mockzilla should map a network request to this endpoint.
 *
 * @param matcher Used to map an incoming network request to the correct endpoint.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setPatternMatcherMatcher:(MockzillaBoolean *(^)(id<MockzillaMockzilla_commonMockzillaHttpRequest>))matcher __attribute__((swift_name("setPatternMatcher(matcher:)")));

/**
 * Controls whether calls to this endpoint should fail by default
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setShouldFailShouldFail:(BOOL)shouldFail __attribute__((swift_name("setShouldFail(shouldFail:)")));

/**
 * Sets the version this endpoint is currently set to. A change in the version code will
 * automatically clear any caches on the device associated with this endpoint.
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setVersionCodeCode:(int32_t)code __attribute__((swift_name("setVersionCode(code:)")));

/**
 * The response which is prefilled in the Mockzilla web page.
 *
 * @param response
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setWebApiDefaultResponseResponse:(MockzillaMockzilla_commonMockzillaHttpResponse *)response __attribute__((swift_name("setWebApiDefaultResponse(response:)"))) __attribute__((deprecated("Obsolete, see `configureDashboardOverrides`")));

/**
 * The error response which is prefilled in the Mockzilla web page.
 *
 * @param response
 */
- (MockzillaMockzilla_commonEndpointConfigurationBuilder *)setWebApiErrorResponseResponse:(MockzillaMockzilla_commonMockzillaHttpResponse *)response __attribute__((swift_name("setWebApiErrorResponse(response:)"))) __attribute__((deprecated("Obsolete, see `configureDashboardOverrides`")));
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

__attribute__((swift_name("Kermit_coreLogWriter")))
@interface MockzillaKermit_coreLogWriter : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isLoggableTag:(NSString *)tag severity:(MockzillaKermit_coreSeverity *)severity __attribute__((swift_name("isLoggable(tag:severity:)")));
- (void)logSeverity:(MockzillaKermit_coreSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(MockzillaKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
@end


/**
 * @property name
 * @property description
 * @property response
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOverridePreset")))
@interface MockzillaMockzilla_commonDashboardOverridePreset : MockzillaBase
- (instancetype)initWithName:(NSString *)name description:(NSString * _Nullable)description response:(MockzillaMockzilla_commonMockzillaHttpResponse *)response __attribute__((swift_name("init(name:description:response:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaMockzilla_commonDashboardOverridePresetCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaMockzilla_commonDashboardOverridePreset *)doCopyName:(NSString *)name description:(NSString * _Nullable)description response:(MockzillaMockzilla_commonMockzillaHttpResponse *)response __attribute__((swift_name("doCopy(name:description:response:)")));

/**
 * @property name
 * @property description
 * @property response
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property name
 * @property description
 * @property response
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @property name
 * @property description
 * @property response
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MockzillaMockzilla_commonMockzillaHttpResponse *response __attribute__((swift_name("response")));
@end


/**
 * @property errorPresets
 * @property successPresets
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOptionsConfig.Companion")))
@interface MockzillaMockzilla_commonDashboardOptionsConfigCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * @property errorPresets
 * @property successPresets
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonDashboardOptionsConfigCompanion *shared __attribute__((swift_name("shared")));

/**
 * @property errorPresets
 * @property successPresets
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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

__attribute__((swift_name("Ktor_server_coreApplicationRequest")))
@protocol MockzillaKtor_server_coreApplicationRequest
@required
- (id<MockzillaKtor_ioByteReadChannel>)receiveChannel __attribute__((swift_name("receiveChannel()")));
@property (readonly) id<MockzillaKtor_server_coreApplicationCall> call __attribute__((swift_name("call")));
@property (readonly) MockzillaKtor_server_coreRequestCookies *cookies __attribute__((swift_name("cookies")));
@property (readonly) id<MockzillaKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) id<MockzillaKtor_httpRequestConnectionPoint> local __attribute__((swift_name("local")));
@property (readonly) id<MockzillaKtor_httpParameters> queryParameters __attribute__((swift_name("queryParameters")));
@property (readonly) id<MockzillaKtor_httpParameters> rawQueryParameters __attribute__((swift_name("rawQueryParameters")));
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


/**
 * @property statusCode
 * @property headers
 * @property body
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonMockzillaHttpResponse.Companion")))
@interface MockzillaMockzilla_commonMockzillaHttpResponseCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * @property statusCode
 * @property headers
 * @property body
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonMockzillaHttpResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * @property statusCode
 * @property headers
 * @property body
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @property key
 * @property value
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonAuthHeaderProviderHeader")))
@interface MockzillaMockzilla_commonAuthHeaderProviderHeader : MockzillaBase
- (instancetype)initWithKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
- (MockzillaMockzilla_commonAuthHeaderProviderHeader *)doCopyKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("doCopy(key:value:)")));

/**
 * @property key
 * @property value
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @property key
 * @property value
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @property key
 * @property value
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOptionsConfig.Builder")))
@interface MockzillaMockzilla_commonDashboardOptionsConfigBuilder : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MockzillaMockzilla_commonDashboardOptionsConfigBuilder *)addErrorPresetResponse:(MockzillaMockzilla_commonMockzillaHttpResponse *)response name:(NSString * _Nullable)name description:(NSString * _Nullable)description __attribute__((swift_name("addErrorPreset(response:name:description:)")));
- (MockzillaMockzilla_commonDashboardOptionsConfigBuilder *)addSuccessPresetResponse:(MockzillaMockzilla_commonMockzillaHttpResponse *)response name:(NSString * _Nullable)name description:(NSString * _Nullable)description __attribute__((swift_name("addSuccessPreset(response:name:description:)")));
- (MockzillaMockzilla_commonDashboardOptionsConfig *)build __attribute__((swift_name("build()")));
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
- (NSArray<id<MockzillaKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MockzillaKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MockzillaKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MockzillaKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
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


/**
 * @property name
 * @property description
 * @property response
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mockzilla_commonDashboardOverridePreset.Companion")))
@interface MockzillaMockzilla_commonDashboardOverridePresetCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * @property name
 * @property description
 * @property response
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaMockzilla_commonDashboardOverridePresetCompanion *shared __attribute__((swift_name("shared")));

/**
 * @property name
 * @property description
 * @property response
 */
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol MockzillaKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(MockzillaBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(MockzillaKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) MockzillaKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<MockzillaKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MockzillaKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MockzillaKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationCall")))
@protocol MockzillaKtor_server_coreApplicationCall <MockzillaKotlinx_coroutines_coreCoroutineScope>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveNullableTypeInfo:(MockzillaKtor_utilsTypeInfo *)typeInfo completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveNullable(typeInfo:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)respondMessage:(id _Nullable)message typeInfo:(MockzillaKtor_utilsTypeInfo * _Nullable)typeInfo completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("respond(message:typeInfo:completionHandler:)")));
@property (readonly) MockzillaKtor_server_coreApplication *application __attribute__((swift_name("application")));
@property (readonly) id<MockzillaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<MockzillaKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) id<MockzillaKtor_server_coreApplicationRequest> request __attribute__((swift_name("request")));
@property (readonly) id<MockzillaKtor_server_coreApplicationResponse> response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_server_coreRequestCookies")))
@interface MockzillaKtor_server_coreRequestCookies : MockzillaBase
- (instancetype)initWithRequest:(id<MockzillaKtor_server_coreApplicationRequest>)request __attribute__((swift_name("init(request:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<NSString *, NSString *> *)fetchCookies __attribute__((swift_name("fetchCookies()")));
- (NSString * _Nullable)getName:(NSString *)name encoding:(MockzillaKtor_httpCookieEncoding *)encoding __attribute__((swift_name("get(name:encoding:)")));
@property (readonly) NSDictionary<NSString *, NSString *> *rawCookies __attribute__((swift_name("rawCookies")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MockzillaKtor_server_coreApplicationRequest> request __attribute__((swift_name("request")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MockzillaKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MockzillaKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MockzillaKtor_httpHeaders <MockzillaKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpRequestConnectionPoint")))
@protocol MockzillaKtor_httpRequestConnectionPoint
@required
@property (readonly) NSString *host __attribute__((swift_name("host"))) __attribute__((unavailable("Use localHost or serverHost instead")));
@property (readonly) NSString *localAddress __attribute__((swift_name("localAddress")));
@property (readonly) NSString *localHost __attribute__((swift_name("localHost")));
@property (readonly) int32_t localPort __attribute__((swift_name("localPort")));
@property (readonly) MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) int32_t port __attribute__((swift_name("port"))) __attribute__((unavailable("Use localPort or serverPort instead")));
@property (readonly) NSString *remoteAddress __attribute__((swift_name("remoteAddress")));
@property (readonly) NSString *remoteHost __attribute__((swift_name("remoteHost")));
@property (readonly) int32_t remotePort __attribute__((swift_name("remotePort")));
@property (readonly) NSString *scheme __attribute__((swift_name("scheme")));
@property (readonly) NSString *serverHost __attribute__((swift_name("serverHost")));
@property (readonly) int32_t serverPort __attribute__((swift_name("serverPort")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MockzillaKtor_httpParameters <MockzillaKtor_utilsStringValues>
@required
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

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MockzillaKtor_utilsPipeline<TSubject, TContext> : MockzillaBase
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(MockzillaKtor_utilsPipelinePhase *)reference phase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MockzillaKtor_utilsPipelinePhase *)reference phase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MockzillaKtor_utilsPipelinePhase *)phase block:(id<MockzillaKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(MockzillaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(MockzillaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(MockzillaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(MockzillaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MockzillaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<MockzillaKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationCallPipeline")))
@interface MockzillaKtor_server_coreApplicationCallPipeline : MockzillaKtor_utilsPipeline<MockzillaKotlinUnit *, id<MockzillaKtor_server_corePipelineCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode environment:(id<MockzillaKtor_server_coreApplicationEnvironment>)environment __attribute__((swift_name("init(developmentMode:environment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) id<MockzillaKtor_server_coreApplicationEnvironment> environment __attribute__((swift_name("environment")));
@property (readonly) MockzillaKtor_server_coreApplicationReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) MockzillaKtor_server_coreApplicationSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplication")))
@interface MockzillaKtor_server_coreApplication : MockzillaKtor_server_coreApplicationCallPipeline <MockzillaKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode environment:(id<MockzillaKtor_server_coreApplicationEnvironment>)environment __attribute__((swift_name("init(developmentMode:environment:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispose __attribute__((swift_name("dispose()"))) __attribute__((deprecated("Use disposeAndJoin() instead.")));

/**
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

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MockzillaKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MockzillaKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MockzillaKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(MockzillaKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (id)takeKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MockzillaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MockzillaKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationResponse")))
@protocol MockzillaKtor_server_coreApplicationResponse
@required
- (void)pushBuilder:(id<MockzillaKtor_server_coreResponsePushBuilder>)builder __attribute__((swift_name("push(builder:)")));
- (MockzillaKtor_httpHttpStatusCode * _Nullable)status __attribute__((swift_name("status()")));
- (void)statusValue:(MockzillaKtor_httpHttpStatusCode *)value __attribute__((swift_name("status(value:)")));
@property (readonly) id<MockzillaKtor_server_coreApplicationCall> call __attribute__((swift_name("call")));
@property (readonly) MockzillaKtor_server_coreResponseCookies *cookies __attribute__((swift_name("cookies")));
@property (readonly) MockzillaKtor_server_coreResponseHeaders *headers __attribute__((swift_name("headers")));
@property (readonly) BOOL isCommitted __attribute__((swift_name("isCommitted")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookieEncoding")))
@interface MockzillaKtor_httpCookieEncoding : MockzillaKotlinEnum<MockzillaKtor_httpCookieEncoding *>
+ (instancetype)alloc __attribute__((unavailable));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MockzillaKtor_utilsPipelinePhase : MockzillaBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MockzillaKotlinFunction
@required
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
@property (readonly) id<MockzillaKtor_server_coreApplicationConfig> config __attribute__((swift_name("config")));
@property (readonly) id<MockzillaKtor_utilsLogger> log __attribute__((swift_name("log")));
@property (readonly) MockzillaKtor_eventsEvents *monitor __attribute__((swift_name("monitor"))) __attribute__((deprecated("Moved to Application")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationCallPipeline.ApplicationPhase")))
@interface MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationPhase __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_server_coreApplicationCallPipelineApplicationPhase *shared __attribute__((swift_name("shared")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Call __attribute__((swift_name("Call")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Fallback __attribute__((swift_name("Fallback")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Features __attribute__((swift_name("Features"))) __attribute__((unavailable("Renamed to Plugins")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Plugins __attribute__((swift_name("Plugins")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Setup __attribute__((swift_name("Setup")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationReceivePipeline")))
@interface MockzillaKtor_server_coreApplicationReceivePipeline : MockzillaKtor_utilsPipeline<id, id<MockzillaKtor_server_corePipelineCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreApplicationReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationSendPipeline")))
@interface MockzillaKtor_server_coreApplicationSendPipeline : MockzillaKtor_utilsPipeline<id, id<MockzillaKtor_server_corePipelineCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MockzillaKotlinArray<MockzillaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(MockzillaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MockzillaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreApplicationSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_server_corePipelineCall")))
@protocol MockzillaKtor_server_corePipelineCall <MockzillaKtor_server_coreApplicationCall>
@required
@end

__attribute__((swift_name("Ktor_server_coreApplicationEngine")))
@protocol MockzillaKtor_server_coreApplicationEngine
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolvedConnectorsWithCompletionHandler:(void (^)(NSArray<id<MockzillaKtor_server_coreEngineConnectorConfig>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resolvedConnectors(completionHandler:)")));
- (id<MockzillaKtor_server_coreApplicationEngine>)startWait:(BOOL)wait __attribute__((swift_name("start(wait:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startSuspendWait:(BOOL)wait completionHandler:(void (^)(id<MockzillaKtor_server_coreApplicationEngine> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startSuspend(wait:completionHandler:)")));
- (void)stopGracePeriodMillis:(int64_t)gracePeriodMillis timeoutMillis:(int64_t)timeoutMillis __attribute__((swift_name("stop(gracePeriodMillis:timeoutMillis:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopSuspendGracePeriodMillis:(int64_t)gracePeriodMillis timeoutMillis:(int64_t)timeoutMillis completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopSuspend(gracePeriodMillis:timeoutMillis:completionHandler:)")));
@property (readonly) id<MockzillaKtor_server_coreApplicationEnvironment> environment __attribute__((swift_name("environment")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface MockzillaKtor_eventsEvents : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(MockzillaKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<MockzillaKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(MockzillaKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(MockzillaKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MockzillaKtor_utilsAttributeKey<T> : MockzillaBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(MockzillaKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (MockzillaKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(MockzillaKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_server_coreResponsePushBuilder")))
@protocol MockzillaKtor_server_coreResponsePushBuilder
@required
@property (readonly) MockzillaKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property MockzillaKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MockzillaKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@property (readonly) NSMutableArray<id<MockzillaKtor_httpVersion>> *versions __attribute__((swift_name("versions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreResponseCookies")))
@interface MockzillaKtor_server_coreResponseCookies : MockzillaBase
- (instancetype)initWithResponse:(id<MockzillaKtor_server_corePipelineResponse>)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
- (void)appendItem:(MockzillaKtor_httpCookie *)item __attribute__((swift_name("append(item:)")));
- (void)appendName:(NSString *)name value:(NSString *)value encoding:(MockzillaKtor_httpCookieEncoding *)encoding maxAge:(MockzillaLong * _Nullable)maxAge expires:(MockzillaKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("append(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)")));
- (void)appendExpiredName:(NSString *)name domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path __attribute__((swift_name("appendExpired(name:domain:path:)"))) __attribute__((unavailable("This method doesn't bypass all flags and extensions so it will be removed in future major release. Please consider using append with expires parameter instead.")));
- (MockzillaKtor_httpCookie * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
@end

__attribute__((swift_name("Ktor_server_coreResponseHeaders")))
@interface MockzillaKtor_server_coreResponseHeaders : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MockzillaKtor_httpHeaders>)allValues __attribute__((swift_name("allValues()")));
- (void)appendName:(NSString *)name value:(NSString *)value safeOnly:(BOOL)safeOnly __attribute__((swift_name("append(name:value:safeOnly:)")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)engineAppendHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("engineAppendHeader(name:value:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<NSString *> *)getEngineHeaderNames __attribute__((swift_name("getEngineHeaderNames()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<NSString *> *)getEngineHeaderValuesName:(NSString *)name __attribute__((swift_name("getEngineHeaderValues(name:)")));
- (NSArray<NSString *> *)valuesName:(NSString *)name __attribute__((swift_name("values(name:)")));

/**
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

__attribute__((swift_name("Ktor_server_coreApplicationConfig")))
@protocol MockzillaKtor_server_coreApplicationConfig
@required
- (id<MockzillaKtor_server_coreApplicationConfig>)configPath:(NSString *)path __attribute__((swift_name("config(path:)")));
- (NSArray<id<MockzillaKtor_server_coreApplicationConfig>> *)configListPath:(NSString *)path __attribute__((swift_name("configList(path:)")));
- (NSSet<NSString *> *)keys __attribute__((swift_name("keys()")));
- (id<MockzillaKtor_server_coreApplicationConfigValue>)propertyPath:(NSString *)path __attribute__((swift_name("property(path:)")));
- (id<MockzillaKtor_server_coreApplicationConfigValue> _Nullable)propertyOrNullPath:(NSString *)path __attribute__((swift_name("propertyOrNull(path:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationReceivePipeline.Phases")))
@interface MockzillaKtor_server_coreApplicationReceivePipelinePhases : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_server_coreApplicationReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationSendPipeline.Phases")))
@interface MockzillaKtor_server_coreApplicationSendPipelinePhases : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_server_coreApplicationSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *ContentEncoding __attribute__((swift_name("ContentEncoding")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *TransferEncoding __attribute__((swift_name("TransferEncoding")));
@property (readonly) MockzillaKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_server_coreEngineConnectorConfig")))
@protocol MockzillaKtor_server_coreEngineConnectorConfig
@required
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MockzillaKtor_server_coreConnectorType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface MockzillaKtor_eventsEventDefinition<T> : MockzillaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MockzillaKotlinx_coroutines_coreDisposableHandle
@required
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface MockzillaKtor_httpURLBuilder : MockzillaBase
- (instancetype)initWithProtocol:(MockzillaKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<MockzillaKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_httpUrl *)build __attribute__((swift_name("build()")));
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

__attribute__((swift_name("Ktor_httpVersion")))
@protocol MockzillaKtor_httpVersion
@required
- (void)appendHeadersToBuilder:(MockzillaKtor_httpHeadersBuilder *)builder __attribute__((swift_name("appendHeadersTo(builder:)")));
- (MockzillaKtor_httpVersionCheckResult *)checkRequestHeaders:(id<MockzillaKtor_httpHeaders>)requestHeaders __attribute__((swift_name("check(requestHeaders:)")));
@end

__attribute__((swift_name("Ktor_server_corePipelineResponse")))
@protocol MockzillaKtor_server_corePipelineResponse <MockzillaKtor_server_coreApplicationResponse>
@required
@property (readonly) MockzillaKtor_server_coreApplicationSendPipeline *pipeline __attribute__((swift_name("pipeline")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol MockzillaKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookie")))
@interface MockzillaKtor_httpCookie : MockzillaBase <MockzillaKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name value:(NSString *)value encoding:(MockzillaKtor_httpCookieEncoding *)encoding maxAge:(MockzillaInt * _Nullable)maxAge expires:(MockzillaKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("init(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpCookieCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_httpCookie *)doCopyName:(NSString *)name value:(NSString *)value encoding:(MockzillaKtor_httpCookieEncoding *)encoding maxAge:(MockzillaInt * _Nullable)maxAge expires:(MockzillaKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("doCopy(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
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
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
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

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MockzillaKotlinKTypeProjection *)contravariantType:(id<MockzillaKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MockzillaKotlinKTypeProjection *)covariantType:(id<MockzillaKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MockzillaKotlinKTypeProjection *)invariantType:(id<MockzillaKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MockzillaKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationConfigValue")))
@protocol MockzillaKtor_server_coreApplicationConfigValue
@required
- (id _Nullable)getAsType:(MockzillaKtor_utilsTypeInfo *)type __attribute__((swift_name("getAs(type:)")));
- (NSArray<NSString *> *)getList __attribute__((swift_name("getList()")));
- (NSDictionary<NSString *, id> *)getMap __attribute__((swift_name("getMap()")));
- (NSString *)getString __attribute__((swift_name("getString()")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreConnectorType")))
@interface MockzillaKtor_server_coreConnectorType : MockzillaBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_server_coreConnectorTypeCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_server_coreConnectorType *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MockzillaKtor_httpURLProtocol : MockzillaBase <MockzillaKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MockzillaKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (MockzillaKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
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
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MockzillaKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) MockzillaKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol MockzillaKtor_httpParametersBuilder <MockzillaKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpVersionCheckResult")))
@interface MockzillaKtor_httpVersionCheckResult : MockzillaKotlinEnum<MockzillaKtor_httpVersionCheckResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MockzillaKtor_httpVersionCheckResult *ok __attribute__((swift_name("ok")));
@property (class, readonly) MockzillaKtor_httpVersionCheckResult *notModified __attribute__((swift_name("notModified")));
@property (class, readonly) MockzillaKtor_httpVersionCheckResult *preconditionFailed __attribute__((swift_name("preconditionFailed")));
+ (MockzillaKotlinArray<MockzillaKtor_httpVersionCheckResult *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MockzillaKtor_httpVersionCheckResult *> *entries __attribute__((swift_name("entries")));
@property (readonly) MockzillaKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookie.Companion")))
@interface MockzillaKtor_httpCookieCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpCookieCompanion *shared __attribute__((swift_name("shared")));
- (id<MockzillaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MockzillaKtor_utilsWeekDay : MockzillaKotlinEnum<MockzillaKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MockzillaKtor_utilsMonth : MockzillaKotlinEnum<MockzillaKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
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
@property (readonly) MockzillaKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationConfigValueType")))
@interface MockzillaKtor_server_coreApplicationConfigValueType : MockzillaKotlinEnum<MockzillaKtor_server_coreApplicationConfigValueType *>
+ (instancetype)alloc __attribute__((unavailable));
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
@property (readonly) MockzillaKtor_server_coreConnectorType *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) MockzillaKtor_server_coreConnectorType *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) MockzillaKtor_server_coreConnectorType *UNIX __attribute__((swift_name("UNIX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface MockzillaKtor_httpURLProtocolCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (MockzillaKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) MockzillaKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) MockzillaKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) MockzillaKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) MockzillaKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) MockzillaKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
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
- (MockzillaKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MockzillaKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface MockzillaKtor_utilsMonthCompanion : MockzillaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MockzillaKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (MockzillaKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MockzillaKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
