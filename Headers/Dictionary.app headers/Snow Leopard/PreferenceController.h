/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DSDictionaryObj, NSIndexSet, NSMutableArray, NSString, NSURL, NSWindow, WebView;

@interface PreferenceController : NSObject
{
    NSWindow *_preferenceWindow;
    NSMutableArray *_dictionariesWithFlags;
    NSString *_defaultSizeString;
    NSIndexSet *_dictionaryListSet;
    id _contextualMenuBehaviorRadioButton;
    WebView *_dictPrefWebView;
    long long _contextualMenuBehavior;
    NSURL *_emptyPrefsHTMLURL;
    DSDictionaryObj *_lastSelectedDictionary;
    long long _numberOfDictionaries;
    BOOL _loadingHTML;
    BOOL _windowWillCloseDone;
    BOOL _preferenceWasChanged;
    unsigned long long _modifiersInOpen;
    NSMutableArray *_childNameArchive;
}

+ (id)sharedPreferenceWithCreate:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)show;
- (void)prepareToQuit;
- (id)dictionaryInfoArray;
- (void)windowWillClose:(id)arg1;
- (void)setDefaultSizeString:(id)arg1;
- (void)contextualMenuBehaviorChoosed:(id)arg1;
- (void)setDictionariesWithFlags:(id)arg1;
- (void)setDictionaryListSet:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
- (void)_checkAndUpdateApplicationPreference;
- (BOOL)_updateCurrentDictionaryPrefs;
- (id)_retrievePrefsFromHTML;
- (void)_setPrefsToHTML:(id)arg1 withCopyright:(id)arg2;
- (id)_copyrightHTML:(id)arg1 withFontSize:(id)arg2;
- (long long)contextualMenuBehavior;

@end

