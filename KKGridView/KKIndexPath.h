//
//  KKIndexPath.h
//  KKGridView
//
//  Created by Kolin Krewinkel on 7.25.11.
//  Copyright 2011 kxk design. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KKIndexPath : NSObject

- (id)initWithIndex:(NSUInteger)index section:(NSUInteger)section;
+ (id)indexPathForIndex:(NSUInteger)index inSection:(NSUInteger)section;

- (id)initWithNSIndexPath:(NSIndexPath *)indexPath;
+ (id)indexPathWithNSIndexPath:(NSIndexPath *)indexPath;

@property (nonatomic, readwrite) NSUInteger section;
@property (nonatomic, readwrite) NSUInteger index;

@end