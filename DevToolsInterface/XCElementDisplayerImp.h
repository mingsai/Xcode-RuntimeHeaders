/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCElementImp.h>

#import "XCElementDisplayerP-Protocol.h"

@class NSInvocation, NSObject, XCElementDataDelegate;

@interface XCElementDisplayerImp : XCElementImp <XCElementDisplayerP>
{
    void *_observationInfo;
    struct NSObject *_displayDelegate;
    NSObject *_displayInfo;
    XCElementDataDelegate *_dataDelegate;
    NSInvocation *_invocation;
    struct {
        unsigned int variableHorizontally:1;
        unsigned int variableVertically:1;
        unsigned int variableChangeRegistered:1;
        unsigned int actionCancelsFirst:1;
        unsigned int actionValidatesFirst:1;
        unsigned int displayOnly:1;
        unsigned int _reserved:26;
    } _dFlags;
}

@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)dealloc;
- (void)clearView;
- (void)_releaseValuesDisplayer;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
- (id)searchableString;
- (void)finishPositioning;
- (void)markForUpdate;
- (void)preparePositioning;
- (void)displayedFrameChanged:(id)arg1;
- (void)control:(id)arg1 didFailToValidatePartialString:(id)arg2 errorDescription:(id)arg3;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)discardEditing;
- (BOOL)commitEditing;
- (BOOL)isInEditingState;
- (BOOL)isEditing;
- (void)addToView;
- (id)cursorAt:(struct CGPoint)arg1;
- (BOOL)_validMouseDownLoc:(struct CGPoint)arg1;
- (void)swapView:(id)arg1;
- (id)docView;
- (id)view;
- (void)removeFromView;
- (BOOL)handleMouseDownOnElement:(struct NSObject *)arg1 event:(id)arg2;
- (void)drawFocusRing;
- (void)drawOwnForeground:(struct CGRect)arg1;
- (void)drawOwnBackground:(struct CGRect)arg1;
- (void)selectTabCandidate;
- (void)_computeKeyLoop;
- (void)performConfiguredAction;
- (void)performDelegateAction:(id)arg1;
- (long long)tag;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (SEL)action;
- (id)target;
- (BOOL)installInvocationOfSendAction:(SEL)arg1 to:(id)arg2;
- (BOOL)installInvocationOfSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (BOOL)installInvocationOf:(id)arg1 withSelector:(SEL)arg2;
- (struct NSObject *)displayDelegate;
- (void)setDisplayDelegate:(struct NSObject *)arg1;
- (id)data;
- (void)setDataWithBool:(BOOL)arg1;
- (void)setDataWithInt:(long long)arg1;
- (void)setData:(id)arg1;
- (void)installLocalDataDelegate;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (id)displayInfo;
- (void)setDisplayInfo:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)adjustForWidth:(double)arg1;
- (struct CGSize)sizeToFit;
- (void)adjustOriginalSize;
- (void)drawForeground:(struct CGRect)arg1;
@property(nonatomic) BOOL displayOnly;
@property(nonatomic) BOOL actionCancelsFirst; // @dynamic actionCancelsFirst;
@property(nonatomic) BOOL actionValidatesFirst; // @dynamic actionValidatesFirst;
@property(nonatomic) BOOL variableVertically; // @dynamic variableVertically;
@property(nonatomic) BOOL variableHorizontally; // @dynamic variableHorizontally;
- (struct CGSize)originalSize;
- (void)setOriginalSize:(struct CGSize)arg1;
- (BOOL)isDisplayer;

@end
