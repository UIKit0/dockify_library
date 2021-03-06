/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSException.h"

@class NSString;

@interface LPDatabaseException : NSException
{
    NSString *_method;
    long long _line;
    long long _dbError;
    NSString *_dbErrorStr;
}

@property(readonly) NSString *dbErrorStr; // @synthesize dbErrorStr=_dbErrorStr;
@property(readonly) long long dbError; // @synthesize dbError=_dbError;
@property(readonly) long long line; // @synthesize line=_line;
@property(readonly) NSString *method; // @synthesize method=_method;
- (id)description;
- (id)initExceptionInMethod:(const char *)arg1 lineNumber:(long long)arg2 database:(struct sqlite3 *)arg3 ret:(int)arg4;

@end

