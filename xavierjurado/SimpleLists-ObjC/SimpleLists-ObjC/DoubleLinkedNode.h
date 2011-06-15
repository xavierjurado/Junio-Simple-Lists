//
//  DoubleLinkedNode.h
//  SimpleLists-ObjC
//
//  Created by Xavier Jurado on 12/06/11.
//

#import <Foundation/Foundation.h>
#import "Node.h"


@interface DoubleLinkedNode : NSObject <Node>

@property (nonatomic, copy) NSString *value;
@property (nonatomic, retain) DoubleLinkedNode *nextNode;
@property (nonatomic, assign) DoubleLinkedNode *prevNode;

@end
