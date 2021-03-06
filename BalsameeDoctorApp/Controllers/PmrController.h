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

@interface PmrController : BaseController

/**
* Completion block definition for asynchronous call to Create New Prescription */
typedef void (^CompletedPostCreateNewPrescription)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    prescriptionDate    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes0StartDate    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes0Num    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes0Duration    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes0DrugId    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes0Dose    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes0Notes    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes1461845708794StartDate    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes1461845708794Num    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes1461845708794Duration    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes1461845708794DrugId    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes1461845708794Dose    Required parameter: Example: 
* @param    prescriptionPresDrugsAttributes1461845708794Destroy    Required parameter: Example: 
*/
- (void) createNewPrescriptionAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                prescriptionDate:(NSString*) prescriptionDate
                prescriptionPresDrugsAttributes0StartDate:(NSString*) prescriptionPresDrugsAttributes0StartDate
                prescriptionPresDrugsAttributes0Num:(NSString*) prescriptionPresDrugsAttributes0Num
                prescriptionPresDrugsAttributes0Duration:(NSString*) prescriptionPresDrugsAttributes0Duration
                prescriptionPresDrugsAttributes0DrugId:(NSString*) prescriptionPresDrugsAttributes0DrugId
                prescriptionPresDrugsAttributes0Dose:(NSString*) prescriptionPresDrugsAttributes0Dose
                prescriptionPresDrugsAttributes0Notes:(NSString*) prescriptionPresDrugsAttributes0Notes
                prescriptionPresDrugsAttributes1461845708794StartDate:(NSString*) prescriptionPresDrugsAttributes1461845708794StartDate
                prescriptionPresDrugsAttributes1461845708794Num:(NSString*) prescriptionPresDrugsAttributes1461845708794Num
                prescriptionPresDrugsAttributes1461845708794Duration:(NSString*) prescriptionPresDrugsAttributes1461845708794Duration
                prescriptionPresDrugsAttributes1461845708794DrugId:(NSString*) prescriptionPresDrugsAttributes1461845708794DrugId
                prescriptionPresDrugsAttributes1461845708794Dose:(NSString*) prescriptionPresDrugsAttributes1461845708794Dose
                prescriptionPresDrugsAttributes1461845708794Destroy:(NSString*) prescriptionPresDrugsAttributes1461845708794Destroy
                completionBlock:(CompletedPostCreateNewPrescription) onCompleted;

/**
* Completion block definition for asynchronous call to Upload lab request image group for reservation request */
typedef void (^CompletedPostUploadLabRequestImageGroupForReservationRequest)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    labRequestImageImage    Required parameter: Example: 
*/
- (void) uploadLabRequestImageGroupForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                labRequestImageImage:(NSString*) labRequestImageImage
                completionBlock:(CompletedPostUploadLabRequestImageGroupForReservationRequest) onCompleted;

/**
* Completion block definition for asynchronous call to Upload lab request image file for reservation request */
typedef void (^CompletedPostUploadLabRequestImageFileForReservationRequest)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    labRequestImageImage    Required parameter: Example: 
*/
- (void) uploadLabRequestImageFileForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                labRequestImageImage:(NSString*) labRequestImageImage
                completionBlock:(CompletedPostUploadLabRequestImageFileForReservationRequest) onCompleted;

/**
* Completion block definition for asynchronous call to Upload prescription image group file for reservation request */
typedef void (^CompletedPostUploadPrescriptionImageGroupFileForReservationRequest)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    prescriptionImagesGroupPrescriptionImagesAttributesImage    Required parameter: Example: 
*/
- (void) uploadPrescriptionImageGroupFileForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                prescriptionImagesGroupPrescriptionImagesAttributesImage:(NSString*) prescriptionImagesGroupPrescriptionImagesAttributesImage
                completionBlock:(CompletedPostUploadPrescriptionImageGroupFileForReservationRequest) onCompleted;

/**
* Completion block definition for asynchronous call to Upload prescription image file for reservation request */
typedef void (^CompletedPostUploadPrescriptionImageFileForReservationRequest)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    prescriptionImageImage    Required parameter: Example: 
*/
- (void) uploadPrescriptionImageFileForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                prescriptionImageImage:(NSString*) prescriptionImageImage
                completionBlock:(CompletedPostUploadPrescriptionImageFileForReservationRequest) onCompleted;

/**
* Completion block definition for asynchronous call to Create Radiology Request */
typedef void (^CompletedPostCreateRadiologyRequest)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    reservationRequestId    Required parameter: Example: 
* @param    radiologyRequestRadiologyScan    Required parameter: Example: 
*/
- (void) createRadiologyRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                reservationRequestId:(NSString*) reservationRequestId
                radiologyRequestRadiologyScan:(NSString*) radiologyRequestRadiologyScan
                completionBlock:(CompletedPostCreateRadiologyRequest) onCompleted;

/**
* Completion block definition for asynchronous call to Create Lab Request */
typedef void (^CompletedPostCreateLabRequest)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    reservationRequestId    Required parameter: Example: 
* @param    labRequestLabTests    Required parameter: Example: 
*/
- (void) createLabRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                reservationRequestId:(NSString*) reservationRequestId
                labRequestLabTests:(NSString*) labRequestLabTests
                completionBlock:(CompletedPostCreateLabRequest) onCompleted;

/**
* Completion block definition for asynchronous call to Show Others */
typedef void (^CompletedGetShowOthers)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: type endpoint description here
* @param    reservationRequestId    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) getShowOthersAsyncWithReservationRequestId:(int) reservationRequestId
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetShowOthers) onCompleted;

/**
* Completion block definition for asynchronous call to Show Diagnosis */
typedef void (^CompletedGetShowDiagnosis)(BOOL success, HttpContext* context, NSError* error);

/**
* Sh
* @param    reservationRequestId    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) getShowDiagnosisAsyncWithReservationRequestId:(int) reservationRequestId
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetShowDiagnosis) onCompleted;

/**
* Completion block definition for asynchronous call to Active Drugs */
typedef void (^CompletedGetActiveDrugs)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    active    Required parameter: Example: 
* @param    patientId    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) getActiveDrugsAsyncWithActive:(int) active
                patientId:(int) patientId
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetActiveDrugs) onCompleted;

/**
* Completion block definition for asynchronous call to drugs */
typedef void (^CompletedGetDrugs)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    query    Required parameter: Example: 
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) getDrugsAsyncWithQuery:(NSString*) query
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetDrugs) onCompleted;

/**
* Completion block definition for asynchronous call to create_diagnosis_staging */
typedef void (^CompletedPostCreateDiagnosisStaging)(BOOL success, HttpContext* context, NSError* error);

/**
* create_diagnosis_staging
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
* @param    reservationRequestId    Required parameter: Example: 
* @param    value    Required parameter: Example: 
*/
- (void) createDiagnosisStagingAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                reservationRequestId:(NSString*) reservationRequestId
                value:(NSString*) value
                completionBlock:(CompletedPostCreateDiagnosisStaging) onCompleted;

/**
* Completion block definition for asynchronous call to List Radiology  Request */
typedef void (^CompletedGetListRadiologyRequest)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) listRadiologyRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetListRadiologyRequest) onCompleted;

/**
* Completion block definition for asynchronous call to Create Others */
typedef void (^CompletedPostCreateOthers)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    reservationRequestId    Required parameter: Example: 
* @param    value    Required parameter: Example: 
*/
- (void) createOthersAsyncWithReservationRequestId:(NSString*) reservationRequestId
                value:(NSString*) value
                completionBlock:(CompletedPostCreateOthers) onCompleted;

/**
* Completion block definition for asynchronous call to List Radiology Scans */
typedef void (^CompletedGetListRadiologyScans)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) listRadiologyScansAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetListRadiologyScans) onCompleted;

/**
* Completion block definition for asynchronous call to List Lab Tests */
typedef void (^CompletedGetListLabTests)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) listLabTestsAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetListLabTests) onCompleted;

/**
* Completion block definition for asynchronous call to Create Diagnosis */
typedef void (^CompletedPostCreateDiagnosis)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    reservationRequestId    Required parameter: Example: 
* @param    value    Required parameter: Example: 
*/
- (void) createDiagnosisAsyncWithReservationRequestId:(NSString*) reservationRequestId
                value:(NSString*) value
                completionBlock:(CompletedPostCreateDiagnosis) onCompleted;

/**
* Completion block definition for asynchronous call to Discontinue  Prescription Drug */
typedef void (^CompletedPatchDiscontinuePrescriptionDrug)(BOOL success, HttpContext* context, NSError* error);

/**
* TODO: Add Description
* @param    xSessionId    Required parameter: Example: 
* @param    xAuthenticationToken    Required parameter: Example: 
* @param    xAppId    Required parameter: Example: 
*/
- (void) updateDiscontinuePrescriptionDrugAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedPatchDiscontinuePrescriptionDrug) onCompleted;

@end