/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "TTLogicalScreen.h"

@interface TTLogicalScreen (UnicharAccess)
- (id)string;
- (unsigned long long)unicharLength;
- (unsigned long long)activeStorageUnicharLength;
- (unsigned long long)unicharOffsetForDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (CDStruct_4bcfbbae)displayPositionForUnicharOffset:(unsigned long long)arg1;
- (struct _NSRange)unicharRangeForLine:(unsigned long long)arg1;
- (id)stringForUnicharRange:(struct _NSRange)arg1;
- (void)truncateUnicharOffsetCacheAtLine:(unsigned long long)arg1;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
@end
