//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFComposeRecipientView.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CKOverlayViewProtocol.h"

@class CKScheduledUpdater, IMService, NSMutableDictionary, UIActionSheet, UIResponder;

@interface CKComposeRecipientView : MFComposeRecipientView <CKOverlayViewProtocol, ABPeoplePickerNavigationControllerDelegate>
{
    IMService *_preferredService;
    CDUnknownBlockType _sendBlock;
    _Bool _autoSendUponResolving;
    _Bool _atomizedForAutoSend;
    _Bool _resolvedForAutoSend;
    _Bool _canSend;
    BOOL _serviceError;
    _Bool _alreadyShowedAlertForTooManyRecipientsError;
    NSMutableDictionary *_recipientAvailabilityTimeoutTimers;
    UIActionSheet *_actionSheet;
    _Bool _forceMMS;
    UIResponder *_nextResponder;
    CKScheduledUpdater *_IDSQueryUpdater;
}

+ (double)shadowHeight;
+ (double)separatorHeight;
@property(retain, nonatomic) CKScheduledUpdater *IDSQueryUpdater; // @synthesize IDSQueryUpdater=_IDSQueryUpdater;
@property(nonatomic) UIResponder *nextResponder; // @synthesize nextResponder=_nextResponder;
@property(nonatomic) _Bool forceMMS; // @synthesize forceMMS=_forceMMS;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) BOOL serviceError; // @synthesize serviceError=_serviceError;
@property(nonatomic) _Bool canSend; // @synthesize canSend=_canSend;
@property(retain, nonatomic) IMService *preferredService; // @synthesize preferredService=_preferredService;
- (float)heightWithoutSeparator;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showErrorAlertForTooManyRecipientsUponSendIfNecessary;
- (void)_showOneTimeErrorAlertForTooManyRecipientsUponAddIfNecessary;
- (id)_recipientCausingTooManyRecipientsError;
- (_Bool)canInsertMoreRecipients;
- (void)updateRecipientLimit;
- (long long)_calculateRecipientLimit;
- (void)_stopCheckingRecipientAvailability;
- (void)reset;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (void)handleRecipientAvailabilityTimeout:(id)arg1;
- (void)removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_showActionSheetForAtom:(id)arg1 animated:(_Bool)arg2;
- (void)_refreshActionSheet;
- (BOOL)iMessageAvailabilityForRecipient:(id)arg1;
- (void)_checkAvailabilityOfAlternateAddressesForMFComposeRecipient:(id)arg1;
- (id)_alternateAddressesForMFComposeRecipient:(id)arg1 onlyIMessageAble:(_Bool)arg2;
- (_Bool)_hasTimedOutAtoms;
- (_Bool)hasPendingAtoms;
- (_Bool)hasFailedAtoms;
- (_Bool)_hasAddressWithAvailability:(BOOL)arg1;
- (_Bool)finishedComposingRecipients;
- (id)atomViewForRecipient:(id)arg1;
- (void)updateForPreferredServiceChange;
- (void)handlePreferredServiceChangedNotification:(id)arg1;
- (_Bool)shouldShowCardForPerson:(void *)arg1;
- (void)_dismissPicker:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)addRecipient:(id)arg1 atIndex:(unsigned long long)arg2 animate:(_Bool)arg3;
- (void)batchAddRecipients:(id)arg1;
- (void)addRecipient:(id)arg1;
- (_Bool)_serviceErrorIsForTooManyRecipients;
- (void)removeRecipients;
- (void)removeRecipient:(id)arg1;
- (_Bool)_addable;
- (unsigned long long)atomPresentationOptionsForRecipient:(id)arg1;
- (void)_reallyAutoSendIfReady;
- (void)_setTextColorForPreferredService:(id)arg1;
- (void)_autoSendIfReady;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)atomizeAndInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_reflowAnimated:(_Bool)arg1;
- (void)reflow;
- (void)updatePreferredServiceForRecipients:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (id)customOverlayContainer;
- (void)windowDidResignKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

