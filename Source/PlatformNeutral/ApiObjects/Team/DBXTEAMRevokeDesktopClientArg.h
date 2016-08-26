///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXTEAMDeviceSessionArg.h"

@class DBXTEAMRevokeDesktopClientArg;

/// 
/// The `DBXTEAMRevokeDesktopClientArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMRevokeDesktopClientArg : DBXTEAMDeviceSessionArg <DBXSerializable> 

/// Whether to delete all files of the account (this is possible only if
/// supported by the desktop client and  will be made the next time the client
/// access the account)
@property (nonatomic, copy) NSNumber * _Nonnull deleteOnUnlink;

/// Full constructor for the `RevokeDesktopClientArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSessionId:(NSString * _Nonnull)sessionId teamMemberId:(NSString * _Nonnull)teamMemberId deleteOnUnlink:(NSNumber * _Nullable)deleteOnUnlink;

/// Convenience constructor for the `RevokeDesktopClientArg` struct (exposes
/// only non-nullable instance variables with no default value).
- (nonnull instancetype)initWithSessionId:(NSString * _Nonnull)sessionId teamMemberId:(NSString * _Nonnull)teamMemberId;

/// Returns a human-readable representation of the
/// `DBXTEAMRevokeDesktopClientArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMRevokeDesktopClientArg` struct.
/// 
@interface DBXTEAMRevokeDesktopClientArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMRevokeDesktopClientArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMRevokeDesktopClientArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMRevokeDesktopClientArg` object from
/// a json-compatible dictionary representation.
+ (DBXTEAMRevokeDesktopClientArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end