//
//  AnnouncementCell.h
//  UMBus
//
//  Created by Jonah Grant on 12/1/13.
//  Copyright (c) 2013 Jonah Grant. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AnnouncementCellModel;

@interface AnnouncementCell : UITableViewCell

@property (strong, nonatomic) AnnouncementCellModel *model;

@end
