//
//  BalsameeDoctorApp
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"

@interface PatientsController : BaseController

/**
* Completion block definition for asynchronous call to Show Patients List */
typedef void (^CompletedGetShowPatientsList)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) getShowPatientsListAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetShowPatientsList) onCompleted;

@end