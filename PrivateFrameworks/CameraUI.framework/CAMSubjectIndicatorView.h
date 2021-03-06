/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSubjectIndicatorView : UIView {
    UIImageView * __imageView;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (getter=isInactive, nonatomic) BOOL inactive;
@property (getter=isPulsing, nonatomic) BOOL pulsing;

- (void).cxx_destruct;
- (id)_imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isInactive;
- (BOOL)isPulsing;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInactive:(BOOL)arg1;
- (void)setPulsing:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startScalingWithExpansionWidth:(float)arg1 duration:(double)arg2 repeatCount:(unsigned int)arg3;

@end
