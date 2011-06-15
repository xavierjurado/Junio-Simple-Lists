//
//  Node.h
//  SimpleLists-ObjC
//
//  Created by Xavier Jurado on 11/06/11.
//

#import <Foundation/Foundation.h>


@protocol Node <NSObject>

/** A simple string value */
@property (nonatomic, copy) NSString *value;

/**
 * Initializes and returns a Node with an empty string as its value.
 * 
 * @return Returns an initialized Node object.
 */
- (id)init;

/**
 * Initializes and returns a Node with the specified string as its value.
 *
 * If the value is nil, the node is initialized with an empty string @"".
 * 
 * @param string The desired value of the Node object.
 * @return Returns an initialized Node object with the desired value.
 */
- (id)initWithString:(NSString *)string;

/**
 * Creates and returns a Node object with the specified string as its value.
 *
 * This is a convenience method that returns an autoreleased object created
 * through initWithString:
 * 
 * @param string The desired value of the Node object.
 * @return Returns an autoreleased Node object with the desired value.
 * @see initWithString:
 */
+ (id)nodeWithString:(NSString *)string;

@end
