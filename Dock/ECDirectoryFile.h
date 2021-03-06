/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ECDirectory, NSString;

@interface ECDirectoryFile : NSObject
{
    unsigned int _flags;
    NSString *_name;
    NSString *_threadName;
    NSString *_displayName;
    NSString *_kind;
    struct OpaqueIconRef *_icon;
    struct UTCDateTime _contentModDate;
    struct UTCDateTime _createDate;
    double _addedDate;
    unsigned int _nodeID;
    float _progress;
    ECDirectory *_directory;
}

@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned int nodeID; // @synthesize nodeID=_nodeID;
@property(readonly, nonatomic) struct UTCDateTime createDate; // @synthesize createDate=_createDate;
@property(readonly, nonatomic) struct UTCDateTime contentModDate; // @synthesize contentModDate=_contentModDate;
@property(nonatomic) struct OpaqueIconRef *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) ECDirectory *directory; // @synthesize directory=_directory;
- (void)_clearDirectory;
- (BOOL)resolvedSymlinkIsDirectory;
- (id)_threadName;
- (void)_setThreadName:(id)arg1;
- (id)_copyNameAndModifiedDate;
- (BOOL)_setIcon:(struct OpaqueIconRef *)arg1;
- (void)_updateFromFile:(id)arg1;
- (id)initWithFSRef:(const struct FSRef *)arg1 catinfo:(const struct FSCatalogInfo *)arg2 hfsname:(const struct HFSUniStr255 *)arg3 name:(id)arg4 directory:(id)arg5;
- (void)updateFile:(id)arg1;
- (long long)compareKind:(id)arg1;
- (long long)compareAddedDate:(id)arg1;
- (long long)compareModifiedDate:(id)arg1;
- (long long)compareCreateDate:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) BOOL isApplication; // @dynamic isApplication;
@property(readonly, nonatomic) BOOL isPreviewable; // @dynamic isPreviewable;
@property(readonly, nonatomic) BOOL isVolume; // @dynamic isVolume;
@property(readonly, nonatomic) BOOL isDirectory; // @dynamic isDirectory;
@property(readonly, nonatomic) NSString *fileSystemName; // @dynamic fileSystemName;
@property(readonly, nonatomic) NSString *path; // @dynamic path;
- (id)description;
- (void)dealloc;

@end

