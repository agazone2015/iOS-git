//
//  ToDoItem.h
//  ShoppingList
//
//  Created by Agnieszka Carroll on 10/03/2015.
//  Copyright (c) 2015 Agnieszka Carroll. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSData *creationDate;

@end
