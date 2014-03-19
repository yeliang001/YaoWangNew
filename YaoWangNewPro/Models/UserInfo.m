//
//  UserInfo.m
//  TheStoreApp
//
//  Created by LinPan on 13-8-14.
//
//

#import "UserInfo.h"
#import "GlobalValue.h"

@implementation UserInfo

- (void)dealloc
{
    [_telephone release];
    [_name release];
    [_type release];
    [_loginMobile release];
    [_partnerType release];
    [_partnerName release];
    [_cellphone release];
    [_salt release];
    [_loginEmail release];
    [_isDeleted release];
    [_createDate release];
    [_userLevelStartTime release];
    [_userLevelId release];
    [_password release];
    [_email release];
    [_uid release];
    [_modifyDate release];
    [_income release];
    [_enterCount release];
    [_openId release];
    [_status release];
    [_ipAddress release];
    [_userScore release];
    [_lastLoginTime release];
    [_registerIP release];
    [_nickName release];
    [_ecUserId release];
    [_birthDay release];
    [_gender release];
    [_userLevelEndTime release];
    [_userId release];
    [_token release];
    [_security release];
    [_imgUrl release];
    [_levelName release];
    
    [super dealloc];
}

//- (NSString *)uid
//{
//    if ([GlobalValue getGlobalValueInstance].isUnionLogin)
//    {
//        return _nickName;
//    }
//    else
//    {
//        return _uid;
//    }
//}

@end
