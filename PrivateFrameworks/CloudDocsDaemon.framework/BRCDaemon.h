/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDaemon : NSObject <BRCAccountHandlerDelegate, BRCReachabilityDelegate, NSXPCListenerDelegate, UMUserSyncStakeholder> {
    BRCAccountHandler * _accountHandler;
    NSObject<OS_dispatch_queue> * _accountLoaderQueue;
    NSObject<OS_dispatch_queue> * _accountReadyQueue;
    NSObject<OS_dispatch_queue> * _accountResumedQueue;
    NSString * _appSupportDirPath;
    NSString * _cacheDirPath;
    Class  _containerClass;
    BOOL  _deviceUnlocked;
    NSMutableDictionary * _dirPaths;
    BOOL  _disableAccountChangesHandling;
    BOOL  _disableAppsChangesHandling;
    NSArray * _fileProviders;
    unsigned int  _forceIsGreedyState;
    BOOL  _hasNotEnoughDiskSpaceToBeFunctional;
    BOOL  _isInSyncBubble;
    NSError * _loggedOutError;
    UMUserSyncTask * _loginTask;
    NSString * _logsDirPath;
    BOOL  _resumed;
    int  _serverAvailabilityNotifyToken;
    BRCAccountSession * _session;
    NSMutableDictionary * _shareAcceptOperationsByURL;
    NSOperationQueue * _shareAcceptQueue;
    NSObject<OS_dispatch_source> * _sigIntSrc;
    NSObject<OS_dispatch_source> * _sigQuitSrc;
    NSObject<OS_dispatch_source> * _sigTermSrc;
    NSDate * _startupDate;
    NSObject<OS_dispatch_queue> * _startupQueue;
    NSXPCListener * _tokenListener;
    NSString * _ubiquityTokenSalt;
    BOOL  _unitTestMode;
    BRCVersionsFileProvider * _versionsProvider;
    NSXPCListener * _xpcListener;
    NSObject<OS_dispatch_queue> * _xpcListenersReadyQueue;
}

@property (nonatomic, readonly) BRCAccountHandler *accountHandler;
@property (nonatomic, retain) NSString *appSupportDirPath;
@property (nonatomic, retain) NSString *cacheDirPath;
@property (nonatomic, retain) Class containerClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAccountChangesHandling;
@property (nonatomic) BOOL disableAppsChangesHandling;
@property (nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) unsigned int forceIsGreedyState;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isInSyncBubble;
@property (nonatomic, retain) NSError *loggedOutError;
@property (nonatomic, retain) NSString *logsDirPath;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) NSDate *startupDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *ubiquityTokenSalt;
@property (nonatomic, readonly) BRCVersionsFileProvider *versionsProvider;

+ (id)daemon;

- (void).cxx_destruct;
- (void)_createSyncBubbleTasks;
- (void)_finishStartup;
- (BOOL)_haveRequiredKernelFeatures;
- (void)_initSignals;
- (BOOL)_isDeviceUnlocked;
- (void)_loadAccountIfNeeded;
- (void)_resumeAccount;
- (void)_setupCacheDelete;
- (BOOL)_shouldCacheDeleteForVolume:(id)arg1;
- (void)_startXPCListeners;
- (void)_startupAndLoadAccount;
- (id)accountHandler;
- (void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2;
- (void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2;
- (id)appSupportDirPath;
- (id)cacheDirPath;
- (BOOL)checkEnoughDiskSpaceToBeFunctional;
- (Class)containerClass;
- (id)dirPathForSyncedFolderType:(unsigned int)arg1;
- (BOOL)disableAccountChangesHandling;
- (BOOL)disableAppsChangesHandling;
- (BOOL)doesNotHaveEnoughDiskSpaceToBeFunctional;
- (void)dumpToContext:(id)arg1;
- (id)endpoint;
- (void)exitWithCode:(int)arg1;
- (id)fileProviderForSyncedFolderType:(unsigned int)arg1;
- (id)fileProviderForURL:(id)arg1;
- (unsigned int)forceIsGreedyState;
- (void)handleExitSignal:(int)arg1;
- (id)init;
- (BOOL)isInSyncBubble;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadAccount;
- (void)localeDidChange;
- (id)loggedOutError;
- (id)logsDirPath;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)networkReachabilityFlagsChanged:(unsigned int)arg1;
- (id)registerShareAcceptOperation:(id)arg1 forURL:(id)arg2;
- (void)restart;
- (void)resumeFileProviderForSyncedFolderType:(unsigned int)arg1;
- (void)resumeIPCAcceptation;
- (BOOL)retrySyncBubbleLaterIfNeededWithError:(id)arg1;
- (BOOL)selfCheck:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)session;
- (void)setAppSupportDirPath:(id)arg1;
- (void)setCacheDirPath:(id)arg1;
- (void)setContainerClass:(Class)arg1;
- (void)setDirPath:(id)arg1 forSyncedFolderType:(unsigned int)arg2;
- (void)setDisableAccountChangesHandling:(BOOL)arg1;
- (void)setDisableAppsChangesHandling:(BOOL)arg1;
- (void)setDoesNotHaveEnoughDiskSpaceToBeFunctional:(BOOL)arg1;
- (void)setForceIsGreedyState:(unsigned int)arg1;
- (void)setIsInSyncBubble:(BOOL)arg1;
- (void)setLoggedOutError:(id)arg1;
- (void)setLogsDirPath:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setUpAnonymousListener;
- (void)setUpSandbox;
- (void)start;
- (id)startupDate;
- (void)suspendFileProviderForSyncedFolderType:(unsigned int)arg1;
- (void)suspendIPCAcceptation;
- (id)ubiquityTokenSalt;
- (void)uploadContent;
- (id)versionsProvider;
- (void)waitForConfiguration;
- (void)waitOnAccountResumedQueue;
- (void)waitUntilDeviceIsUnlocked;
- (void)willSwitchUser;

@end
