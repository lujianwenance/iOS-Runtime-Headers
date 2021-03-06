/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TULogging : NSObject {
}

+ (void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 backtrace:(bool)arg4 format:(id)arg5;
+ (void)registerForShouldLogChangedNotification;
+ (bool)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2;
+ (bool)shouldLogType:(id)arg1;
+ (void)unregisterForShouldLogChangedNotification;

@end
