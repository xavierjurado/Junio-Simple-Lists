//
//  SimpleLists_UnitTest.h
//  SimpleLists-UnitTest
//
//  Created by Xavier Jurado on 11/06/11.
//

#import <SenTestingKit/SenTestingKit.h>


@interface SimpleLists_UnitTest : SenTestCase

- (void)testSingleLinkedList;
- (void)testDoubleLinkedList;
- (void)testLinkedListClass:(Class)LinkedListClass nodeClass:(Class)NodeClass;

@end
