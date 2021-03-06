/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIControl.h>
#import "NSCoding.h"
#import <UIKit/UISegmentedControl.h>
#import "UIKit-Structs.h"
#import <Availability2.h>

@class UIColor, NSMutableArray;

@interface UISegmentedControl ()
+(float)defaultHeightForStyle:(int)style size:(int)size;
+(float)defaultHeightForStyle:(int)style;
-(void)updateForMiniBarState:(BOOL)miniBarState;
-(CGPoint)_offsetForMiniBarState:(BOOL)miniBarState;
-(void)_commonSegmentedControlInit;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(int)controlSize;
-(void)setControlSize:(int)size;
-(int)segmentControlStyle;
-(void)setSegmentControlStyle:(int)style;
-(void)setAlwaysToggleForTwoSegments:(BOOL)twoSegments;
-(void)_setAutosizeText:(BOOL)text;
-(void)setBarStyle:(int)style;
-(int)barStyle;
-(void)setTransparentBackground:(BOOL)background;
-(BOOL)transparentBackground;
-(void)removeSegmentAtIndex:(unsigned)index animated:(BOOL)animated;
-(void)removeAllSegments;
-(void)setWidth:(float)width forSegmentAtIndex:(unsigned)index;
-(float)widthForSegmentAtIndex:(unsigned)index;
-(void)setContentOffset:(CGSize)offset forSegmentAtIndex:(unsigned)index;
-(CGSize)contentOffsetForSegmentAtIndex:(unsigned)index;
-(void)setEnabled:(BOOL)enabled forSegmentAtIndex:(unsigned)index;
-(BOOL)isEnabledForSegmentAtIndex:(unsigned)index;
-(void)sizeToFit;
-(void)setFrame:(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(BOOL)shouldTrack;
-(void)highlightSegment:(int)segment;
-(void)mouseDown:(GSEventRef)down;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)_resetForAppearanceChange;
-(void)_setSegmentedControlAppearance:(XXStruct_wXTbsB*)appearance;
-(BOOL)useBlockyMagnificationInClassic;
#endif
@end

@interface UISegmentedControl (SynthEvents)
-(id)scriptingInfoWithChildren;
@end

@interface UISegmentedControl (DeprecatedMethods)
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)frame withStyle:(int)style withItems:(id)items;
-(void)setDelegate:(id)delegate;
-(void)setShowsDisclosure:(BOOL)disclosure;
-(void)setMomentaryClick:(BOOL)click;
-(void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)segmentClicks;
-(void)setImagePadding:(CGSize)padding forSegment:(unsigned)segment;
-(void)selectSegment:(int)segment;
-(void)addSegmentWithTitle:(id)title;
-(void)insertSegment:(unsigned)segment withTitle:(id)title animated:(BOOL)animated;
-(void)insertSegment:(unsigned)segment withImage:(id)image animated:(BOOL)animated;
-(void)removeSegment:(unsigned)segment animated:(BOOL)animated;
-(void)setTitle:(id)title forSegment:(unsigned)segment;
-(id)titleForSegment:(unsigned)segment;
-(void)setImage:(id)image forSegment:(unsigned)segment;
-(id)imageForSegment:(unsigned)segment;
-(void)setWidth:(float)width forSegment:(unsigned)segment;
-(float)widthForSegment:(unsigned)segment;
-(void)setContentOffset:(CGSize)offset forSegment:(unsigned)segment;
-(CGSize)contentOffsetForSegment:(unsigned)segment;
-(void)setEnabled:(BOOL)enabled forSegment:(unsigned)segment;
-(BOOL)isEnabledForSegment:(unsigned)segment;
-(void)setSelectedSegment:(int)segment;
-(int)selectedSegment;
@end

@interface UISegmentedControl (InterfaceBuilderSupport)
-(id)infoViewForSegment:(int)segment;
@end

@interface UISegmentedControl (Static)
-(void)_createSegmentAtIndex:(int)index position:(unsigned)position withInfo:(id)info;
-(void)_insertSegment:(int)segment withInfo:(id)info animated:(BOOL)animated;
-(void)_clearSelectedSegment;
-(void)_removeSegmentAnimationFinished:(id)finished finished:(id)finished2 context:(void*)context;
@end

