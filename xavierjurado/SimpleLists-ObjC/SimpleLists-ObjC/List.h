//
//  List.h
//  SimpleLists-ObjC
//
//  Created by Xavier Jurado on 11/06/11.
//

#import <Foundation/Foundation.h>


@protocol Node;

/**
 * Protocol for an abstract data structure that implements an ordered
 * collection of values (nodes), where the same value may occur more than once.
 *
 * @see http://en.wikipedia.org/wiki/List_(computing)
 * @see http://en.wikipedia.org/wiki/Linked_list
 */
@protocol List <NSObject>

/**
 * Add a node to the end of the list.
 *
 * @parameter node The node to be inserted.
 */
- (void)add:(id <Node>)node;

/**
 * Delete a node from the list.
 *
 * @param node The node to be deleted.
 */
- (void)remove:(id <Node>)node;

/**
 * Ask the list if it contains a given string.
 *
 * If the list contains multiple nodes with the same value, this method will
 * return the first one.
 *
 * @param string The value to be searched.
 * @return Returns the node containing that string, or nil if no node was found
 * with that value.
 */
- (id <Node>)nodeWithString:(NSString *)string;

/**
 * Ask the list to return an array of all its values.
 *
 * @return An array of all list's values (instances of NSString *).
 */
- (NSArray *)values;

@end
