//
//  videoView.h
//  orangeConference
//
//  Created by Laurence Wingo on 1/10/13.
//  Copyright (c) 2013 Laurence Wingo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@interface videoView : UIViewController <UITableViewDataSource>{
    UITableView *youtubeTableView;

}

@property (nonatomic, strong) UIButton *videoPlayButton;
@property (nonatomic, strong) UITableView *youtubeTableView;

@end
