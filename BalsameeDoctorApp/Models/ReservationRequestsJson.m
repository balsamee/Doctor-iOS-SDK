//
//  BalsameeDoctorApp
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import "ReservationRequestsJson.h"

@implementation ReservationRequestsJson

/**
* TODO: Write general description for this method
*/
@synthesize reservationRequests;



/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap
{
    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    [map addEntriesFromDictionary: @{
        @"reservation_requests": @"reservationRequests"  
    }];

    return map;
}

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper
{ 
  return [[JSONKeyMapper alloc] initWithDictionary: [self keyMap]];
}

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName
{
    return YES;
}

@end