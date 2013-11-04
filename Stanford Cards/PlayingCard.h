//
//  PlayingCard.h
//  Stanford Cards
//
//  Created by Rafael Pereira on 04/11/13.
//  Copyright (c) 2013 BSIDES. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
