//
//  UITableView+LoadingMore.m
//  TheStoreApp
//
//  Created by jiming huang on 12-9-8.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "UITableView+LoadingMore.h"

@implementation UITableView (LoadingMore)

-(void)loadingMoreWithFrame:(CGRect)frame target:(id)target selector:(SEL)selector type:(UITableViewLoadingMoreType)type
{
    CGFloat width=frame.size.width;
    CGFloat height=frame.size.height;
    if ([self tableFooterView]==nil)
    {
        UIView *footerView=[[UIView alloc] initWithFrame:frame];
        [self setTableFooterView:footerView];
        
//        [footerView release];
        
        UIActivityIndicatorView *indicatorView=[[UIActivityIndicatorView alloc] initWithFrame:CGRectMake(width/2-80, 5, height-10, height-10)];
        [indicatorView setActivityIndicatorViewStyle:UIActivityIndicatorViewStyleGray];
        [indicatorView startAnimating];
        [footerView addSubview:indicatorView];
//        [indicatorView release];
        
        UILabel *label=[[UILabel alloc] initWithFrame:CGRectMake(0, 0, width, height)];
        [label setBackgroundColor:[UIColor clearColor]];
        [label setText:@"正在加载"];
        [label setTextColor:[UIColor colorWithRed:135.0/255.0 green:135.0/255.0 blue:135.0/255.0 alpha:1.0]];
        [label setTextAlignment:NSTextAlignmentCenter];
        [label setFont:[UIFont systemFontOfSize:18.0]];
        [footerView addSubview:label];
//        [label release];
        
        if (type==UITableViewLoadingMoreForeIphone) {
            [indicatorView setFrame:CGRectMake(width/2-60, 10, height-20, height-20)];
            [label setTextColor:[UIColor blackColor]];
            [label setFont:[UIFont systemFontOfSize:15.0]];
        }
    }
    if ([target respondsToSelector:selector])
    {
        
        
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
        [target performSelector:selector withObject:nil];
#pragma clang diagnostic pop

        
        
    }
}
@end
