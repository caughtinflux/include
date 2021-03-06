//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDate, NSString;

@interface CKTimestamp : NSObject
{
    NSAttributedString *_attributedTranscriptText;
    NSDate *_date;
    id <CKMessage> _message;
}

+ (id)thePastDateFormatter;
+ (id)thisYearDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)timestampWithDate:(id)arg1 message:(id)arg2;
@property(retain, nonatomic) id <CKMessage> message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)significantTimeChange:(id)arg1;
- (id)now;
@property(readonly, nonatomic) NSAttributedString *attributedTranscriptText; // @synthesize attributedTranscriptText=_attributedTranscriptText;
@property(readonly, nonatomic) NSString *guid;
- (id)initWithDate:(id)arg1 message:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end

