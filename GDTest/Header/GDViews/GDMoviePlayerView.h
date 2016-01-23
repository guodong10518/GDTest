//
//  GDMoviePlayerView.h
//  ALMoviePlayerController
//
//  Created by wangguodong on 15/11/9.
//  Copyright © 2015年 Anthony Lobianco. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    GDMoviePlayerStyleEmbedded,
    GDMoviePlayerStyleFullscreen
}GDMoviePlayerStyle;

@protocol GDMoviePlayerViewDelegate <NSObject>
- (void)hideStatusBar:(BOOL)shouldHide;
@end

@interface GDMoviePlayerView : UIView
@property (nonatomic, readonly) BOOL movieFullscreen;
@property (nonatomic, assign) id<GDMoviePlayerViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame superView:(UIView *)superView;
- (void)setContentURL:(NSURL *)contentURL;
- (void)setViewStyle:(GDMoviePlayerStyle)style;
@end
