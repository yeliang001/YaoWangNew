//
//  CommentInfo.h
//  TheStoreApp
//
//  Created by LinPan on 13-8-13.
//
//  评论的model ，傻逼啊。。。鬼知道这些字段干嘛用。。写这么多还累，艹。。。

#import <Foundation/Foundation.h>

@interface CommentInfo : NSObject

@property (copy, nonatomic) NSString *adminName;           //后台添加的时候是添加人的名字，也就是管理人员的名字，前台是客户的名字
@property (copy, nonatomic) NSString *allUserSocre;        //全场获赠积分
@property (copy, nonatomic) NSString *allUserStatus;       //是否为全场积分评论：0--不是  1--是 
@property (copy, nonatomic) NSString *auditMode;           //审核方式 1：系统审核；2：人工审核
@property (copy, nonatomic) NSString *auditing;//咨询是否有回复 0  没有回复，1 有回复，有回复的咨询才可以显示;对于评论来说是审核字段。默认值0是未审核，1是已审核通过，2 审核不通过,3有敏感词审核未通过
@property (copy, nonatomic) NSString *commentScore;        //基础积分
@property (copy, nonatomic) NSString *commentScoreStatus;  //评论积分带审核状态  0:赠送待审核1:赠送通过2:拒绝赠送
@property (copy, nonatomic) NSString *consultationType;    //咨询类型  0默认，1商品咨询，2支付咨询，3配送咨询，4售后咨询
@property (copy, nonatomic) NSString *content;             //内容
@property (copy, nonatomic) NSString *goodsId;             //商品的id ，带有p的，为了适应一品多价
@property (copy, nonatomic) NSString *grade;               //评论等级 1，2，3，4，5分别代表几颗星
@property (copy, nonatomic) NSString *commentId;  
@property (copy, nonatomic) NSString *isEmail;             //咨询回复时是否发email 0回复咨询后不发送Email，1回复时要发送Email
@property (copy, nonatomic) NSString *issuedDate;          //发表时间
@property (copy, nonatomic) NSString *mainimg4;            //商品图片 170*170
@property (copy, nonatomic) NSString *nay;                 //评论的坏的等级
@property (copy, nonatomic) NSString *orderDate;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *pId;                 //商品id
@property (copy, nonatomic) NSString *priority;            //所有的回复
@property (copy, nonatomic) NSString *productName;         //商品名称，为后台咨询加入的，数据库无此字段
@property (copy, nonatomic) NSString *putTopDate;          //置顶时间 
@property (copy, nonatomic) NSString *putTopScore;        //置顶获得的积分
@property (copy, nonatomic) NSString *putTopStatus;       //置顶状态：0--未置顶  1--正在置顶  2--已置顶
@property (copy, nonatomic) NSString *recommendedDate;    //推荐时间
@property (copy, nonatomic) NSString *recommendedScore;   //以为被推荐到首页得到的积分
@property (copy, nonatomic) NSString *recommendedStatus;  //推荐状态 ：0--未推荐  1--正在推荐  2--已推荐
@property (copy, nonatomic) NSString *releaseDate;        //发布时间
@property (copy, nonatomic) NSString *replyCount;         //回复数量
@property (copy, nonatomic) NSArray *replys;              //所有的回复
@property (copy, nonatomic) NSString *reviewType;         //类型  1 咨询 ， 2 评论
@property (copy, nonatomic) NSString *rewardScore;        //奖励积分
@property (copy, nonatomic) NSString *rewardScoreStatus;  //奖励积分带审核状态 0:赠送待审核1:赠送通过2:拒绝赠送（基本不用了）
@property (copy, nonatomic) NSString *scoreDate;          //送基础分时间
@property (copy, nonatomic) NSString *status;             //0 为前台用户添加，1 为后台管理员添加，2 机器人添加
@property (copy, nonatomic) NSString *subcatalog;         //小分类，为后台咨询加入的，数据库无此字段
@property (copy, nonatomic) NSString *subject;            //标题
@property (copy, nonatomic) NSString *top5Score;          //前五条获赠积分
@property (copy, nonatomic) NSString *top5Status;         //是否为前五条：0--不是  1--是 
@property (copy, nonatomic) NSString *userImg;
@property (copy, nonatomic) NSString *userIp;
@property (copy, nonatomic) NSString *userLevelId;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *yes;                //评论的好的等级




- (NSString *)covernedUsername;//掩盖之后的名字


@end
