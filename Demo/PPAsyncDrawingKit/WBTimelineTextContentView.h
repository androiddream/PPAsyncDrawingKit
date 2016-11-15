//
//  WBTimelineTextContentView.h
//  PPAsyncDrawingKit
//
//  Created by DSKcpp on 2016/11/10.
//  Copyright © 2016年 DSKcpp. All rights reserved.
//

#import "PPAsyncDrawingView.h"

@class WBTimelineTableViewCellDrawingContext;
@class PPTextRenderer;
@class WBTimelineItem;

@interface WBTimelineTextContentView : PPAsyncDrawingView
+ (CGSize)sizeForTag:(id)arg1;
+ (void)renderDrawingContext:(WBTimelineTableViewCellDrawingContext *)drawingContext userInfo:(NSDictionary *)userInfo;
@property (nonatomic, strong) NSMutableArray *attachmentViews;
@property (nonatomic, strong) NSMutableArray *attachments;
@property (nonatomic, assign) unsigned long long touchingItemIndex;
@property (nonatomic, assign) struct CGRect unionAreaHighlightedFeedbackFrame;
@property (nonatomic, assign) double detaRightPading;
@property (nonatomic, assign) double timeSourceReleventWidth;
@property (nonatomic, assign) BOOL isSourceRectBeReset;
@property (nonatomic, assign) BOOL customSourceColorDefault;
@property (nonatomic, strong) NSMutableArray *wb_accessibilityElements;
@property (nonatomic, strong) PPTextRenderer *metaInfoTextRenderer;
@property (nonatomic, assign) BOOL quotedItemHighlighted;
@property (nonatomic, strong) NSMutableAttributedString *sourceInfoString;
//@property (nonatomic, strong) WBTimelineLargeCardView *largeCardView;
@property (nonatomic, assign) BOOL disableTextLinkHighlight;
@property (nonatomic, strong) PPTextRenderer *respondTextRenderer;
@property (nonatomic, strong) PPTextRenderer *titleTextRenderer;
@property (nonatomic, strong) PPTextRenderer *quotedItemTextRenderer;
@property (nonatomic, strong) PPTextRenderer *itemTextRenderer;
//@property (nonatomic, assign) __weak id <WBTimelineTextContentViewDelegate> delegate;
@property (nonatomic, assign) BOOL highlighted;
@property (nonatomic, strong) WBTimelineTableViewCellDrawingContext *drawingContext;
- (void)adClickeStatisticsWithActionCode:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)reloadAccessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)shouldReloadAccessibilityElementsWhenSettingDrawingContext;
- (void)didPressSourceButton:(id)arg1 ActiveRange:(id)arg2;
- (BOOL)textRenderer:(id)arg1 shouldInteractWithActiveRange:(id)arg2;
- (void)textRenderer:(id)arg1 didPressActiveRange:(id)arg2;
- (id)timelineURLForScheme:(id)arg1;
- (id)schemeForMiniCardActiveRange:(id)arg1 andAttributedText:(id)arg2;
- (void)pressedActiveRange:(id)arg1 inText:(id)arg2;
- (void)otherTouchableItemLongPressed:(unsigned long long)arg1;
- (void)otherTouchableItemPressed:(unsigned long long)arg1 params:(id)arg2;
- (void)didPressVideoCard;
- (void)largeCardPressed:(id)arg1;
- (BOOL)checkCanEnterPageInfo:(id)arg1 withScheme:(id)arg2;
- (struct CGRect)pressedItemAttachmentPointIsQuoted:(BOOL)arg1 Rect:(struct CGRect)arg2;
- (struct CGRect)pressedItemaAttachmentPointInWindow:(id)arg1;
- (void)pressedTimelineURL:(id)arg1;
- (void)textRenderer:(id)arg1 placeAttachment:(id)arg2 frame:(struct CGRect)arg3 context:(struct CGContext *)arg4;
- (id)activeRangesForTextRenderer:(id)arg1;
- (id)contextViewForTextRenderer:(id)arg1;
- (id)rendererAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSArray *textRenderers;
- (void)longTouchAtPoint:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)checkNeedToDrawUnionAreaHightlightedFeedback:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)removeAttachmentViews;
- (void)addAttachmentViews;
@property (nonatomic, assign) BOOL enableAsyncDrawing; // @synthesize enableAsyncDrawing=_enableAsyncDrawing;
- (void)resetSourceInfoStringWidth:(double)arg1 right:(double)arg2;
- (void)drawMetaInfoWithTimelineItem:(WBTimelineItem *)timelineItem InRect:(CGRect)rect withContext:(CGContextRef)context initialDrawingCount:(NSUInteger)drawingCount;
- (double)titleItemTextMaxWidth;
- (void)setupMetaInfoRenderer:(id)arg1 timelineItem:(id)arg2;
- (id)memberIconImageNameForTimelineItem:(id)arg1;
- (void)setDrawingContextWithIsNotCustomSource:(BOOL)arg1;
- (id)attributedStringIgnoreActiveRangeColorForAttributedString:(id)arg1;
@property(readonly, nonatomic) BOOL reduceDrawingContents;
- (unsigned long long)touchingOtherTouchableItemIndex:(struct CGPoint)arg1 finishBlock:(id)arg2;
- (struct CGRect)otherTouchableItemFrameOfPoint:(struct CGPoint)arg1;
- (void)dealloc;

- (id)pageInfoIdentifier;


- (id)textRenderers;
- (void)recentCommentsPressed;
- (struct CGRect)recentCommentsTouchingArea;
- (void)setDrawingContext:(WBTimelineTableViewCellDrawingContext *)drawingContext;
+ (void)renderDrawingContextForRecentComments:(id)arg1 userInfo:(id)arg2;
+ (void)renderDrawingContextForUnionArea:(id)arg1 userInfo:(id)arg2;
+ (id)recentCommentAttributedTextsWithStringArray:(id)arg1;
+ (id)forwardStatusAttributedTextsOfUnionAreaFrom:(id)arg1;
+ (id)statisticsStringWithNumberForLongStr:(long long)arg1;
+ (id)statisticsStringWithNumber:(long long)arg1;
@property (nonatomic, strong) PPTextRenderer *commentCountSummaryRender; // @synthesize commentCountSummaryRender=_commentCountSummaryRender;
@property (nonatomic, strong) NSMutableArray *commentSummaryTextRenderers; // @synthesize commentSummaryTextRenderers=_commentSummaryTextRenderers;
@property (nonatomic, strong) NSMutableArray *forwardSummaryTextRendersers; // @synthesize forwardSummaryTextRendersers=_forwardSummaryTextRendersers;
@property (nonatomic, strong) PPTextRenderer *forwardSummaryRender; // @synthesize forwardSummaryRender=_forwardSummaryRender;
@property (nonatomic, strong) PPTextRenderer *likeSummaryRender; // @synthesize likeSummaryRender=_likeSummaryRender;
@property (nonatomic, strong) NSMutableArray *commentTextRenderers; // @synthesize commentTextRenderers=_commentTextRenderers;
@end