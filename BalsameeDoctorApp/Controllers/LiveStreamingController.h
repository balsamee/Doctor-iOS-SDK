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
#import "LiveStream.h"

@interface LiveStreamingController : BaseController

/**
* Completion block definition for asynchronous call to stop broadcast */
typedef void (^CompletedPutStopBroadcast)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
*/
- (void) updateStopBroadcastWithCompletionBlock:(CompletedPutStopBroadcast) onCompleted;

/**
* Completion block definition for asynchronous call to start braodcast */
typedef void (^CompletedPutStartBraodcast)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
*/
- (void) updateStartBraodcastWithCompletionBlock:(CompletedPutStartBraodcast) onCompleted;

/**
* Completion block definition for asynchronous call to Create New live streaming */
typedef void (^CompletedPostCreateNewLiveStreaming)(BOOL success, HttpContext* context, LiveStream* response, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    liveStreamDescription    Required parameter: Example: 
*/
- (void) createNewLiveStreamingAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                liveStreamDescription:(NSString*) liveStreamDescription
                completionBlock:(CompletedPostCreateNewLiveStreaming) onCompleted;

/**
* Completion block definition for asynchronous call to ceate a comment */
typedef void (^CompletedPostCeateAComment)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
* @param    commentBody    Required parameter: Example: 
*/
- (void) createCeateACommentAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                commentBody:(NSString*) commentBody
                completionBlock:(CompletedPostCeateAComment) onCompleted;

/**
* Completion block definition for asynchronous call to get active live streaming details */
typedef void (^CompletedGetActiveLiveStreamingDetails)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
*/
- (void) getActiveLiveStreamingDetailsAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedGetActiveLiveStreamingDetails) onCompleted;

/**
* Completion block definition for asynchronous call to like live stream */
typedef void (^CompletedDeleteLikeLiveStream)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
*/
- (void) deleteLikeLiveStreamAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedDeleteLikeLiveStream) onCompleted;

/**
* Completion block definition for asynchronous call to like live stream */
typedef void (^CompletedPostLikeLiveStream)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
*/
- (void) createLikeLiveStreamAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedPostLikeLiveStream) onCompleted;

@end