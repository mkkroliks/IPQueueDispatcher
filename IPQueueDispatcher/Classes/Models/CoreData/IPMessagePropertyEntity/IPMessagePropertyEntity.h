//
//  IPMessagePropertyEntity.h
//  Pods
//
//  Created by Ilias Pavlidakis on 15/06/2016.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class IPMessageEntity;

NS_ASSUME_NONNULL_BEGIN

@interface IPMessagePropertyEntity : NSManagedObject

- (BOOL)isValid;

@end

NS_ASSUME_NONNULL_END

#import "IPMessagePropertyEntity+CoreDataProperties.h"
