//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KeychainSyncCountryInfo, NSArray, NSString, PSEditableTableCell, PSListController, PSPhoneNumberSpecifier, PSSpecifier;

@interface KeychainSyncPhoneSettingsFragment : NSObject
{
    NSArray *_specifiers;
    PSPhoneNumberSpecifier *_phoneNumberSpecifier;
    PSSpecifier *_countrySpecifier;
    PSListController *_listController;
    NSString *_phoneNumber;
    KeychainSyncCountryInfo *_countryInfo;
    id <KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
    NSString *_title;
}

@property(retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
- (void)reloadSpecifiers;
@property(readonly, nonatomic) NSArray *specifiers;
- (id)initWithListController:(id)arg1;
@property(readonly, nonatomic) PSEditableTableCell *phoneNumberCell;
- (id)phoneNumberForSpecifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (id)dialingCountryInfoForSpecifier:(id)arg1;
- (void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2;
- (id)unformattedPhoneNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)resignFirstResponder;
@property(nonatomic) id <KeychainSyncPhoneSettingsFragmentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)textFieldChanged:(id)arg1;

@end
