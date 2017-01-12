//
//  NSAttributedString+PPAsyncDrawingKit.h
//  PPAsyncDrawingKit
//
//  Created by DSKcpp on 2016/11/8.
//  Copyright © 2016年 DSKcpp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PPAsyncDrawingKitUtilities.h"
#import "PPTextAttributes.h"
#import <CoreText/CoreText.h>

@class PPTextRenderer;
@class PPTextAttachment;
@class PPTextHighlightRange;
@class PPTextFontMetrics;

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (PPAsyncDrawingKit)
+ (nullable PPTextRenderer *)rendererForCurrentThread;
- (NSRange)pp_stringRange;

- (CGFloat)pp_heightConstrainedToWidth:(CGFloat)width;
- (CGFloat)pp_heightConstrainedToWidth:(CGFloat)width exclusionPaths:(nullable NSArray<UIBezierPath *> *)exclusionPaths;
- (CGSize)pp_sizeConstrainedToWidth:(CGFloat)width;
- (CGSize)pp_sizeConstrainedToWidth:(CGFloat)width numberOfLines:(NSInteger)numberOfLines;
- (CGSize)pp_sizeConstrainedToSize:(CGSize)size;
- (CGSize)pp_sizeConstrainedToSize:(CGSize)size numberOfLines:(NSInteger)numberOfLines;
- (CGSize)pp_sizeConstrainedToSize:(CGSize)size numberOfLines:(NSInteger)numberOfLines derivedLineCount:(NSInteger)derivedLineCount;
- (CGSize)pp_sizeConstrainedToSize:(CGSize)size numberOfLines:(NSInteger)numberOfLines derivedLineCount:(NSInteger)derivedLineCount baselineMetrics:(nullable PPTextFontMetrics *)baselineMetrics;
- (NSRange)pp_rangeToSize:(CGSize)size;
- (NSRange)pp_rangeToSize:(CGSize)size withLimitedLines:(NSUInteger)limitedLines;

+ (instancetype)pp_attributedStringWithTextAttachment:(PPTextAttachment *)textAttachment;
+ (instancetype)pp_attributedStringWithTextAttachment:(PPTextAttachment *)textAttachment attributes:(nullable NSDictionary *)attributes;

- (CGSize)pp_drawInRect:(CGRect)rect;
- (CGSize)pp_drawInRect:(CGRect)rect context:(CGContextRef)context;
- (CGSize)pp_drawInRect:(CGRect)rect context:(CGContextRef)context numberOfLines:(NSUInteger)numberOfLines;
- (CGSize)pp_drawInRect:(CGRect)rect context:(CGContextRef)context numberOfLines:(NSUInteger)numberOfLines baselineMetrics:(nullable PPTextFontMetrics *)baselineMetrics;
@end

@interface NSMutableAttributedString (PPExtendedAttributedString)

- (void)pp_setAttribute:(NSString *)name value:(nullable id)value;
- (void)pp_setAttribute:(NSString *)name value:(nullable id)value range:(NSRange)range;

- (void)pp_setAlignment:(NSTextAlignment)alignment;
- (void)pp_setAlignment:(NSTextAlignment)alignment lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (void)pp_setAlignment:(NSTextAlignment)alignment lineBreakMode:(NSLineBreakMode)lineBreakMode lineHeight:(CGFloat)lineHeight;

- (void)pp_setLineHeight:(CGFloat)lineHeight;
- (void)pp_setLineHeight:(CGFloat)lineHeight inRange:(NSRange)range;

- (void)pp_setKerning:(CGFloat)kerning;
- (void)pp_setKerning:(CGFloat)kerning inRange:(NSRange)range;

- (void)pp_setBackgroundColor:(UIColor *)backgroundColor inRange:(NSRange)range;

- (void)pp_setColor:(UIColor *)color;
- (void)pp_setColor:(UIColor *)color inRange:(NSRange)range;

- (void)pp_setFont:(UIFont *)font;
- (void)pp_setFont:(UIFont *)font inRange:(NSRange)range;
- (NSRange)pp_effectiveRangeWithRange:(NSRange)range;

- (void)pp_setTextHighlightRange:(nullable PPTextHighlightRange *)textHighlightRange;
- (void)pp_setTextHighlightRange:(nullable PPTextHighlightRange *)textHighlightRange inRange:(NSRange)range;

- (void)pp_setTextParagraphStyle:(nullable NSParagraphStyle *)textParagraphStyle;
- (void)pp_setTextParagraphStyle:(nullable NSParagraphStyle *)textParagraphStyle inRange:(NSRange)range;

- (void)pp_setCTRunDelegate:(nullable CTRunDelegateRef)ctRunDelegate;
- (void)pp_setCTRunDelegate:(nullable CTRunDelegateRef)ctRunDelegate inRange:(NSRange)range;
@end

NS_ASSUME_NONNULL_END