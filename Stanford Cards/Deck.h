//
//  Deck.h
//  Stanford Cards
//
//  Created by Rafael Pereira on 02/11/13.
//  Copyright (c) 2013 BSIDES. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
