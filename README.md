# Getting started

APIs Docs for Balsamee Doctor App

## How to Build


The generated code has dependencies over external libraries like UniRest. These dependencies are defined in the ```PodFile``` file that comes with the SDK. 
To resolve these dependencies, we use the Cocoapods package manager.
Visit https://guides.cocoapods.org/using/getting-started.html to setup Cocoapods on your system.
Open command prompt and type ```pod --version```. This should display the current version of Cocoapods installed if the installation was successful.

Using command line, navigate to the directory containing the generated files (including ```PodFile```) for the SDK. 
Run the command ```pod install```. This should install all the required dependencies and create the ```pods``` directory in your project directory.

![Installing dependencies using Cocoapods](https://apidocs.io/illustration/objc?step=AddDependencies&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)

Open the project workspace using the (BalsameeDoctorApp.xcworkspace) file. Invoke the build process using `Command(⌘)+B` shortcut key or using the `Build` menu as shown below.

![Building SDK using Xcode](https://apidocs.io/illustration/objc?step=BuildSDK&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)


## How to Use

The generated code is a Cocoa Touch Static Library which can be used in any iOS project. The support for these generated libraries go all the way back to iOS 6.

The following section explains how to use the BalsameeDoctorApp library in a new iOS project.     
### 1. Starting a new project
To start a new project, left-click on the ```Create a new Xcode project```.
![Create Test Project - Step 1](https://apidocs.io/illustration/objc?step=Test1&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)

Next, choose **Single View Application** and click ```Next```.
![Create Test Project - Step 2](https://apidocs.io/illustration/objc?step=Test2&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)

Provide **Test-Project** as the product name click ```Next```.
![Create Test Project - Step 3](https://apidocs.io/illustration/objc?step=Test3&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)

Choose the desired location of your project folder and click ```Create```.
![Create Test Project - Step 4](https://apidocs.io/illustration/objc?step=Test4&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)

### 2. Adding the static library dependency
To add this dependency open a terminal and navigate to your project folder. Next, input ```pod init``` and press enter.
![Add dependency - Step 1](https://apidocs.io/illustration/objc?step=Add0&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)

Next, open the newly created ```PodFile``` in your favourite text editor. Add the following line : pod 'BalsameeDoctorApp', :path => 'Vendor/BalsameeDoctorApp'
![Add dependency - Step 2](https://apidocs.io/illustration/objc?step=Add1&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)

Execute `pod install` from terminal to install the dependecy in your project. This would add the dependency to the newly created test project.
![Add dependency - Step 3](https://apidocs.io/illustration/objc?step=Add2&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)


## How to Test

Unit tests in this SDK can be run using Xcode. 

First build the SDK as shown in the steps above and naivgate to the project directory and open the BalsameeDoctorApp.xcworkspace file.

Go to the test explorer in Xcode as shown in the picture below and click on `run tests` from the menu. 
![Run tests](https://apidocs.io/illustration/objc?step=RunTests&workspaceFolder=Balsamee-Doctor-App-ObjC&workspaceName=BalsameeDoctorApp&projectName=BalsameeDoctorApp&rootNamespace=BalsameeDoctorApp)


## Initialization

### 

Configuration variables can be set as following.
```Objc

```

# Class Reference

## <a name="list_of_controllers"></a>List of Controllers

* [GeneralController](#general_controller)
* [ReservationRequestsController](#reservation_requests_controller)
* [LiveStreamingController](#live_streaming_controller)
* [DoctorInformationsController](#doctor_informations_controller)
* [PmrController](#pmr_controller)
* [SessionsController](#sessions_controller)
* [PatientsController](#patients_controller)

## <a name="general_controller"></a>![Class: ](https://apidocs.io/img/class.png ".GeneralController") GeneralController

### Get singleton instance
```objc
General* general = [[General alloc]init] ;
```

### <a name="get_app_version_async_with_app_version"></a>![Method: ](https://apidocs.io/img/method.png ".GeneralController.getAppVersionAsyncWithAppVersion") getAppVersionAsyncWithAppVersion

> TODO: Add Description


```objc
function getAppVersionAsyncWithAppVersion:(NSDate*) appVersion
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetAppVersion) onCompleted(appVersion xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| appVersion |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSDate* appVersion = [NSDate NSDateFromNSString: @"1.2.5"];
    NSString* xAppId = @"doctor_app";

    [self.general getAppVersionAsyncWithAppVersion: appVersion xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="reservation_requests_controller"></a>![Class: ](https://apidocs.io/img/class.png ".ReservationRequestsController") ReservationRequestsController

### Get singleton instance
```objc
ReservationRequests* reservationRequests = [[ReservationRequests alloc]init] ;
```

### <a name="list_reservation_request_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".ReservationRequestsController.listReservationRequestAsyncWithXAuthenticationToken") listReservationRequestAsyncWithXAuthenticationToken

> Doctor reject resesrvation request


```objc
function listReservationRequestAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetListReservationRequest) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";

    [self.reservationRequests listReservationRequestAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, ReservationRequestsJson* response, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_reservation_request_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".ReservationRequestsController.createReservationRequestAsyncWithXAuthenticationToken") createReservationRequestAsyncWithXAuthenticationToken

> URL: /api/v5/reservation_requests  
> Method: POST  
> @param doctor_id  
> @param address  
> @param address_details  
> @param mobile_number  
> @param patient_latitude  
> @param patient_longitude  
> @param [Header] X-Authentication-Token  
> @param [Header] X-Session-Id  
> @param [Header] X-App-Id  
> @return [JsonArray]  errors  ( code: 422 )  
> @return [JsonObject] success ( code: 200 )  
> 
> * [Header] X-App-Id = doctor_app used to indicate that the request is sent from doctor app  


```objc
function createReservationRequestAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                doctorId:(NSString*) doctorId
                address:(NSString*) address
                addressDetails:(NSString*) addressDetails
                mobileNumber:(NSString*) mobileNumber
                patientLatitude:(NSString*) patientLatitude
                patientLongitude:(NSString*) patientLongitude
                completionBlock:(CompletedPostCreateReservationRequest) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId doctorId : doctorId address : address addressDetails : addressDetails mobileNumber : mobileNumber patientLatitude : patientLatitude patientLongitude : patientLongitude)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| doctorId |  ``` Required ```  | TODO: Add a parameter description |
| address |  ``` Required ```  | TODO: Add a parameter description |
| addressDetails |  ``` Required ```  | TODO: Add a parameter description |
| mobileNumber |  ``` Required ```  | TODO: Add a parameter description |
| patientLatitude |  ``` Required ```  | TODO: Add a parameter description |
| patientLongitude |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";
    NSString* doctorId = @"23147";
    NSString* address = @"address";
    NSString* addressDetails = @"address details";
    NSString* mobileNumber = @"01003498776";
    NSString* patientLatitude = @"3.15455655";
    NSString* patientLongitude = @"32.4545455";

    [self.reservationRequests createReservationRequestAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId doctorId : doctorId address : address addressDetails : addressDetails mobileNumber : mobileNumber patientLatitude : patientLatitude patientLongitude : patientLongitude  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="update_reservation_request_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".ReservationRequestsController.updateReservationRequestAsyncWithXAuthenticationToken") updateReservationRequestAsyncWithXAuthenticationToken

> URL: /api/v5/reservation_requests/:reservation_request_id  
> Method: PUT  
> @param current_status  
> @param [Header] X-Authentication-Token  
> @param [Header] X-Session-Id  
> @param [Header] X-App-Id  
> @return [JsonArray]  errors  ( code: 422 )  
> @return [JsonObject] success ( code: 200 )  
> 
> * [Header] X-App-Id = doctor_app used to indicate that the request is sent from doctor app  
> * This request can be used to accept, reject, cancel or complete a reservation request using:  
>  * current_status can be one of the following  
>  accepted, rejected, canceled, completed


```objc
function updateReservationRequestAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                currentStatus:(NSString*) currentStatus
                completionBlock:(CompletedPutUpdateReservationRequest) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId currentStatus : currentStatus)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| currentStatus |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";
    NSString* currentStatus = @"accepted";

    [self.reservationRequests updateReservationRequestAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId currentStatus : currentStatus  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_index_reservation_request_async_with_status"></a>![Method: ](https://apidocs.io/img/method.png ".ReservationRequestsController.getIndexReservationRequestAsyncWithStatus") getIndexReservationRequestAsyncWithStatus

> URL: /api/v5/reservation_requests  
> Method: GET  
> @param status  
> @param [Header] X-Authentication-Token  
> @param [Header] X-Session-Id  
> @param [Header] X-App-Id  
> @return [JsonArray]  errors  ( code: 422 )  
> @return [JsonObject] success ( code: 200 )  
> 
> * [Header] X-App-Id = doctor_app used to indicate that the request is sent from doctor app  
> * params[status] can be  used to list reservation request with the given statuses  
>  * status can be a comma ',' separated lis of the following  
>  accepted,rejected,canceled,completed  
> * params[status] can be ignored to list all reservation request


```objc
function getIndexReservationRequestAsyncWithStatus:(NSString*) status
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetIndexReservationRequest) onCompleted(status xAuthenticationToken : xAuthenticationToken xSessionId : xSessionId xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| status |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* status = @"pending,accepted";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";

    [self.reservationRequests getIndexReservationRequestAsyncWithStatus: status xAuthenticationToken : xAuthenticationToken xSessionId : xSessionId xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="update_reject_order_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".ReservationRequestsController.updateRejectOrderAsyncWithXAuthenticationToken") updateRejectOrderAsyncWithXAuthenticationToken

> Doctor reject resesrvation request


```objc
function updateRejectOrderAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                currentStatus:(NSString*) currentStatus
                completionBlock:(CompletedPutRejectOrder) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId currentStatus : currentStatus)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| currentStatus |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";
    NSString* currentStatus = @"accepted";

    [self.reservationRequests updateRejectOrderAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId currentStatus : currentStatus  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_show_reservation_request_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".ReservationRequestsController.getShowReservationRequestAsyncWithXAuthenticationToken") getShowReservationRequestAsyncWithXAuthenticationToken

> URL: /api/v5/reservation_requests/:reservation_request_id  
> Method: GET  
> @param [Header] X-Authentication-Token  
> @param [Header] X-Session-Id  
> @param [Header] X-App-Id  
> @return [JsonArray]  errors  ( code: 422 )  
> @return [JsonObject] success ( code: 200 )  
> 
> * [Header] X-App-Id = doctor_app used to indicate that the request is sent from doctor app  


```objc
function getShowReservationRequestAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetShowReservationRequest) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";

    [self.reservationRequests getShowReservationRequestAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="live_streaming_controller"></a>![Class: ](https://apidocs.io/img/class.png ".LiveStreamingController") LiveStreamingController

### Get singleton instance
```objc
LiveStreaming* liveStreaming = [[LiveStreaming alloc]init] ;
```

### <a name="update_stop_broadcast_with_completion_block"></a>![Method: ](https://apidocs.io/img/method.png ".LiveStreamingController.updateStopBroadcastWithCompletionBlock") updateStopBroadcastWithCompletionBlock

> TODO: Add Description


```objc
function updateStopBroadcastWithCompletionBlock:(CompletedPutStopBroadcast) onCompleted()
```



#### Example Usage

```objc

    [self.liveStreaming updateStopBroadcastWithCompletionBlock:  ^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="update_start_braodcast_with_completion_block"></a>![Method: ](https://apidocs.io/img/method.png ".LiveStreamingController.updateStartBraodcastWithCompletionBlock") updateStartBraodcastWithCompletionBlock

> TODO: Add Description


```objc
function updateStartBraodcastWithCompletionBlock:(CompletedPutStartBraodcast) onCompleted()
```



#### Example Usage

```objc

    [self.liveStreaming updateStartBraodcastWithCompletionBlock:  ^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_new_live_streaming_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".LiveStreamingController.createNewLiveStreamingAsyncWithXSessionId") createNewLiveStreamingAsyncWithXSessionId

> TODO: Add Description


```objc
function createNewLiveStreamingAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                liveStreamDescription:(NSString*) liveStreamDescription
                completionBlock:(CompletedPostCreateNewLiveStreaming) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId liveStreamDescription : liveStreamDescription)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| liveStreamDescription |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* liveStreamDescription = @"abc";

    [self.liveStreaming createNewLiveStreamingAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId liveStreamDescription : liveStreamDescription  completionBlock:^(BOOL success, HttpContext* context, LiveStream* response, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_ceate_a_comment_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".LiveStreamingController.createCeateACommentAsyncWithXAuthenticationToken") createCeateACommentAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function createCeateACommentAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                commentBody:(NSString*) commentBody
                completionBlock:(CompletedPostCeateAComment) onCompleted(xAuthenticationToken xSessionId : xSessionId commentBody : commentBody)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| commentBody |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* commentBody = @"7amada";

    [self.liveStreaming createCeateACommentAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId commentBody : commentBody  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_active_live_streaming_details_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".LiveStreamingController.getActiveLiveStreamingDetailsAsyncWithXAuthenticationToken") getActiveLiveStreamingDetailsAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function getActiveLiveStreamingDetailsAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedGetActiveLiveStreamingDetails) onCompleted(xAuthenticationToken xSessionId : xSessionId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";

    [self.liveStreaming getActiveLiveStreamingDetailsAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="delete_like_live_stream_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".LiveStreamingController.deleteLikeLiveStreamAsyncWithXAuthenticationToken") deleteLikeLiveStreamAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function deleteLikeLiveStreamAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedDeleteLikeLiveStream) onCompleted(xAuthenticationToken xSessionId : xSessionId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";

    [self.liveStreaming deleteLikeLiveStreamAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_like_live_stream_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".LiveStreamingController.createLikeLiveStreamAsyncWithXAuthenticationToken") createLikeLiveStreamAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function createLikeLiveStreamAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedPostLikeLiveStream) onCompleted(xAuthenticationToken xSessionId : xSessionId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";

    [self.liveStreaming createLikeLiveStreamAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="doctor_informations_controller"></a>![Class: ](https://apidocs.io/img/class.png ".DoctorInformationsController") DoctorInformationsController

### Get singleton instance
```objc
DoctorInformations* doctorInformations = [[DoctorInformations alloc]init] ;
```

### <a name="get_doctor_information_with_completion_block"></a>![Method: ](https://apidocs.io/img/method.png ".DoctorInformationsController.getDoctorInformationWithCompletionBlock") getDoctorInformationWithCompletionBlock

> TODO: Add Description


```objc
function getDoctorInformationWithCompletionBlock:(CompletedGetDoctorInformation) onCompleted()
```



#### Example Usage

```objc

    [self.doctorInformations getDoctorInformationWithCompletionBlock:  ^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="update_doctor_info_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".DoctorInformationsController.updateDoctorInfoAsyncWithXAuthenticationToken") updateDoctorInfoAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function updateDoctorInfoAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                doctorInformationLatitude:(NSString*) doctorInformationLatitude
                doctorInformationLongitude:(NSString*) doctorInformationLongitude
                doctorInformationIsVideoAvailable:(NSString*) doctorInformationIsVideoAvailable
                doctorInformationIsAvailable:(NSString*) doctorInformationIsAvailable
                completionBlock:(CompletedPutUpdateDoctorInfo) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId doctorInformationLatitude : doctorInformationLatitude doctorInformationLongitude : doctorInformationLongitude doctorInformationIsVideoAvailable : doctorInformationIsVideoAvailable doctorInformationIsAvailable : doctorInformationIsAvailable)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationLatitude |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationLongitude |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationIsVideoAvailable |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationIsAvailable |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";
    NSString* doctorInformationLatitude = @"30.0500";
    NSString* doctorInformationLongitude = @"31.2333";
    NSString* doctorInformationIsVideoAvailable = @"true";
    NSString* doctorInformationIsAvailable = @"true";

    [self.doctorInformations updateDoctorInfoAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId doctorInformationLatitude : doctorInformationLatitude doctorInformationLongitude : doctorInformationLongitude doctorInformationIsVideoAvailable : doctorInformationIsVideoAvailable doctorInformationIsAvailable : doctorInformationIsAvailable  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="pmr_controller"></a>![Class: ](https://apidocs.io/img/class.png ".PmrController") PmrController

### Get singleton instance
```objc
Pmr* pmr = [[Pmr alloc]init] ;
```

### <a name="create_new_prescription_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.createNewPrescriptionAsyncWithXSessionId") createNewPrescriptionAsyncWithXSessionId

> TODO: Add Description


```objc
function createNewPrescriptionAsyncWithXSessionId:(NSString*) xSessionId
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
                completionBlock:(CompletedPostCreateNewPrescription) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId prescriptionDate : prescriptionDate prescriptionPresDrugsAttributes0StartDate : prescriptionPresDrugsAttributes0StartDate prescriptionPresDrugsAttributes0Num : prescriptionPresDrugsAttributes0Num prescriptionPresDrugsAttributes0Duration : prescriptionPresDrugsAttributes0Duration prescriptionPresDrugsAttributes0DrugId : prescriptionPresDrugsAttributes0DrugId prescriptionPresDrugsAttributes0Dose : prescriptionPresDrugsAttributes0Dose prescriptionPresDrugsAttributes0Notes : prescriptionPresDrugsAttributes0Notes prescriptionPresDrugsAttributes1461845708794StartDate : prescriptionPresDrugsAttributes1461845708794StartDate prescriptionPresDrugsAttributes1461845708794Num : prescriptionPresDrugsAttributes1461845708794Num prescriptionPresDrugsAttributes1461845708794Duration : prescriptionPresDrugsAttributes1461845708794Duration prescriptionPresDrugsAttributes1461845708794DrugId : prescriptionPresDrugsAttributes1461845708794DrugId prescriptionPresDrugsAttributes1461845708794Dose : prescriptionPresDrugsAttributes1461845708794Dose prescriptionPresDrugsAttributes1461845708794Destroy : prescriptionPresDrugsAttributes1461845708794Destroy)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionDate |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes0StartDate |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes0Num |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes0Duration |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes0DrugId |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes0Dose |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes0Notes |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes1461845708794StartDate |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes1461845708794Num |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes1461845708794Duration |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes1461845708794DrugId |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes1461845708794Dose |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionPresDrugsAttributes1461845708794Destroy |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* prescriptionDate = @"2016-04-28";
    NSString* prescriptionPresDrugsAttributes0StartDate = @"2016-04-28";
    NSString* prescriptionPresDrugsAttributes0Num = @"3";
    NSString* prescriptionPresDrugsAttributes0Duration = @"days";
    NSString* prescriptionPresDrugsAttributes0DrugId = @"52839f9d8ad845bb51000088";
    NSString* prescriptionPresDrugsAttributes0Dose = @"90 gm";
    NSString* prescriptionPresDrugsAttributes0Notes = @"";
    NSString* prescriptionPresDrugsAttributes1461845708794StartDate = @"2016-04-28";
    NSString* prescriptionPresDrugsAttributes1461845708794Num = @"4";
    NSString* prescriptionPresDrugsAttributes1461845708794Duration = @"days";
    NSString* prescriptionPresDrugsAttributes1461845708794DrugId = @"52839f9d8ad845bb51000082";
    NSString* prescriptionPresDrugsAttributes1461845708794Dose = @"100";
    NSString* prescriptionPresDrugsAttributes1461845708794Destroy = @"false";

    [self.pmr createNewPrescriptionAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId prescriptionDate : prescriptionDate prescriptionPresDrugsAttributes0StartDate : prescriptionPresDrugsAttributes0StartDate prescriptionPresDrugsAttributes0Num : prescriptionPresDrugsAttributes0Num prescriptionPresDrugsAttributes0Duration : prescriptionPresDrugsAttributes0Duration prescriptionPresDrugsAttributes0DrugId : prescriptionPresDrugsAttributes0DrugId prescriptionPresDrugsAttributes0Dose : prescriptionPresDrugsAttributes0Dose prescriptionPresDrugsAttributes0Notes : prescriptionPresDrugsAttributes0Notes prescriptionPresDrugsAttributes1461845708794StartDate : prescriptionPresDrugsAttributes1461845708794StartDate prescriptionPresDrugsAttributes1461845708794Num : prescriptionPresDrugsAttributes1461845708794Num prescriptionPresDrugsAttributes1461845708794Duration : prescriptionPresDrugsAttributes1461845708794Duration prescriptionPresDrugsAttributes1461845708794DrugId : prescriptionPresDrugsAttributes1461845708794DrugId prescriptionPresDrugsAttributes1461845708794Dose : prescriptionPresDrugsAttributes1461845708794Dose prescriptionPresDrugsAttributes1461845708794Destroy : prescriptionPresDrugsAttributes1461845708794Destroy  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="upload_lab_request_image_group_for_reservation_request_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.uploadLabRequestImageGroupForReservationRequestAsyncWithXSessionId") uploadLabRequestImageGroupForReservationRequestAsyncWithXSessionId

> TODO: Add Description


```objc
function uploadLabRequestImageGroupForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                labRequestImageImage:(NSString*) labRequestImageImage
                completionBlock:(CompletedPostUploadLabRequestImageGroupForReservationRequest) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId labRequestImageImage : labRequestImageImage)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| labRequestImageImage |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* labRequestImageImage = @"";

    [self.pmr uploadLabRequestImageGroupForReservationRequestAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId labRequestImageImage : labRequestImageImage  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="upload_lab_request_image_file_for_reservation_request_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.uploadLabRequestImageFileForReservationRequestAsyncWithXSessionId") uploadLabRequestImageFileForReservationRequestAsyncWithXSessionId

> TODO: Add Description


```objc
function uploadLabRequestImageFileForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                labRequestImageImage:(NSString*) labRequestImageImage
                completionBlock:(CompletedPostUploadLabRequestImageFileForReservationRequest) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId labRequestImageImage : labRequestImageImage)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| labRequestImageImage |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* labRequestImageImage = @"";

    [self.pmr uploadLabRequestImageFileForReservationRequestAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId labRequestImageImage : labRequestImageImage  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="upload_prescription_image_group_file_for_reservation_request_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.uploadPrescriptionImageGroupFileForReservationRequestAsyncWithXSessionId") uploadPrescriptionImageGroupFileForReservationRequestAsyncWithXSessionId

> TODO: Add Description


```objc
function uploadPrescriptionImageGroupFileForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                prescriptionImagesGroupPrescriptionImagesAttributesImage:(NSString*) prescriptionImagesGroupPrescriptionImagesAttributesImage
                completionBlock:(CompletedPostUploadPrescriptionImageGroupFileForReservationRequest) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId prescriptionImagesGroupPrescriptionImagesAttributesImage : prescriptionImagesGroupPrescriptionImagesAttributesImage)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionImagesGroupPrescriptionImagesAttributesImage |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* prescriptionImagesGroupPrescriptionImagesAttributesImage = @"";

    [self.pmr uploadPrescriptionImageGroupFileForReservationRequestAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId prescriptionImagesGroupPrescriptionImagesAttributesImage : prescriptionImagesGroupPrescriptionImagesAttributesImage  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="upload_prescription_image_file_for_reservation_request_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.uploadPrescriptionImageFileForReservationRequestAsyncWithXSessionId") uploadPrescriptionImageFileForReservationRequestAsyncWithXSessionId

> TODO: Add Description


```objc
function uploadPrescriptionImageFileForReservationRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                prescriptionImageImage:(NSString*) prescriptionImageImage
                completionBlock:(CompletedPostUploadPrescriptionImageFileForReservationRequest) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId prescriptionImageImage : prescriptionImageImage)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| prescriptionImageImage |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* prescriptionImageImage = @"";

    [self.pmr uploadPrescriptionImageFileForReservationRequestAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId prescriptionImageImage : prescriptionImageImage  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_radiology_request_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.createRadiologyRequestAsyncWithXSessionId") createRadiologyRequestAsyncWithXSessionId

> TODO: Add Description


```objc
function createRadiologyRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                reservationRequestId:(NSString*) reservationRequestId
                radiologyRequestRadiologyScan:(NSString*) radiologyRequestRadiologyScan
                completionBlock:(CompletedPostCreateRadiologyRequest) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId reservationRequestId : reservationRequestId radiologyRequestRadiologyScan : radiologyRequestRadiologyScan)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| reservationRequestId |  ``` Required ```  | TODO: Add a parameter description |
| radiologyRequestRadiologyScan |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* reservationRequestId = @"3";
    NSString* radiologyRequestRadiologyScan = @"[800,807,814]";

    [self.pmr createRadiologyRequestAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId reservationRequestId : reservationRequestId radiologyRequestRadiologyScan : radiologyRequestRadiologyScan  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_lab_request_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.createLabRequestAsyncWithXSessionId") createLabRequestAsyncWithXSessionId

> TODO: Add Description


```objc
function createLabRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                reservationRequestId:(NSString*) reservationRequestId
                labRequestLabTests:(NSString*) labRequestLabTests
                completionBlock:(CompletedPostCreateLabRequest) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId reservationRequestId : reservationRequestId labRequestLabTests : labRequestLabTests)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| reservationRequestId |  ``` Required ```  | TODO: Add a parameter description |
| labRequestLabTests |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* reservationRequestId = @"3750";
    NSString* labRequestLabTests = @"7";

    [self.pmr createLabRequestAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId reservationRequestId : reservationRequestId labRequestLabTests : labRequestLabTests  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_show_others_async_with_reservation_request_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.getShowOthersAsyncWithReservationRequestId") getShowOthersAsyncWithReservationRequestId

> TODO: Add a method description


```objc
function getShowOthersAsyncWithReservationRequestId:(int) reservationRequestId
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetShowOthers) onCompleted(reservationRequestId xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| reservationRequestId |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    int reservationRequestId = [@"1741" intValue];
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr getShowOthersAsyncWithReservationRequestId: reservationRequestId xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_show_diagnosis_async_with_reservation_request_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.getShowDiagnosisAsyncWithReservationRequestId") getShowDiagnosisAsyncWithReservationRequestId

> Sh


```objc
function getShowDiagnosisAsyncWithReservationRequestId:(int) reservationRequestId
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetShowDiagnosis) onCompleted(reservationRequestId xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| reservationRequestId |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    int reservationRequestId = [@"1741" intValue];
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr getShowDiagnosisAsyncWithReservationRequestId: reservationRequestId xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_active_drugs_async_with_active"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.getActiveDrugsAsyncWithActive") getActiveDrugsAsyncWithActive

> TODO: Add Description


```objc
function getActiveDrugsAsyncWithActive:(int) active
                patientId:(int) patientId
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetActiveDrugs) onCompleted(active patientId : patientId xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| active |  ``` Required ```  | TODO: Add a parameter description |
| patientId |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    int active = [@"1" intValue];
    int patientId = [@"23224" intValue];
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr getActiveDrugsAsyncWithActive: active patientId : patientId xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_drugs_async_with_query"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.getDrugsAsyncWithQuery") getDrugsAsyncWithQuery

> TODO: Add Description


```objc
function getDrugsAsyncWithQuery:(NSString*) query
                xSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetDrugs) onCompleted(query xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| query |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* query = @"FOR";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr getDrugsAsyncWithQuery: query xSessionId : xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_diagnosis_staging_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.createDiagnosisStagingAsyncWithXSessionId") createDiagnosisStagingAsyncWithXSessionId

> create_diagnosis_staging
> 


```objc
function createDiagnosisStagingAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                reservationRequestId:(NSString*) reservationRequestId
                value:(NSString*) value
                completionBlock:(CompletedPostCreateDiagnosisStaging) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId reservationRequestId : reservationRequestId value : value)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| reservationRequestId |  ``` Required ```  | TODO: Add a parameter description |
| value |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";
    NSString* reservationRequestId = @"1741";
    NSString* value = @"koko wawaw";

    [self.pmr createDiagnosisStagingAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId reservationRequestId : reservationRequestId value : value  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="list_radiology_request_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.listRadiologyRequestAsyncWithXSessionId") listRadiologyRequestAsyncWithXSessionId

> TODO: Add Description


```objc
function listRadiologyRequestAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetListRadiologyRequest) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr listRadiologyRequestAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_others_async_with_reservation_request_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.createOthersAsyncWithReservationRequestId") createOthersAsyncWithReservationRequestId

> TODO: Add Description


```objc
function createOthersAsyncWithReservationRequestId:(NSString*) reservationRequestId
                value:(NSString*) value
                completionBlock:(CompletedPostCreateOthers) onCompleted(reservationRequestId value : value)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| reservationRequestId |  ``` Required ```  | TODO: Add a parameter description |
| value |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* reservationRequestId = @"10";
    NSString* value = @"test";

    [self.pmr createOthersAsyncWithReservationRequestId: reservationRequestId value : value  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="list_radiology_scans_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.listRadiologyScansAsyncWithXSessionId") listRadiologyScansAsyncWithXSessionId

> TODO: Add Description


```objc
function listRadiologyScansAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetListRadiologyScans) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr listRadiologyScansAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="list_lab_tests_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.listLabTestsAsyncWithXSessionId") listLabTestsAsyncWithXSessionId

> TODO: Add Description


```objc
function listLabTestsAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetListLabTests) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr listLabTestsAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_diagnosis_async_with_reservation_request_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.createDiagnosisAsyncWithReservationRequestId") createDiagnosisAsyncWithReservationRequestId

> TODO: Add Description


```objc
function createDiagnosisAsyncWithReservationRequestId:(NSString*) reservationRequestId
                value:(NSString*) value
                completionBlock:(CompletedPostCreateDiagnosis) onCompleted(reservationRequestId value : value)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| reservationRequestId |  ``` Required ```  | TODO: Add a parameter description |
| value |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* reservationRequestId = @"10";
    NSString* value = @"test";

    [self.pmr createDiagnosisAsyncWithReservationRequestId: reservationRequestId value : value  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="update_discontinue_prescription_drug_async_with_x_session_id"></a>![Method: ](https://apidocs.io/img/method.png ".PmrController.updateDiscontinuePrescriptionDrugAsyncWithXSessionId") updateDiscontinuePrescriptionDrugAsyncWithXSessionId

> TODO: Add Description


```objc
function updateDiscontinuePrescriptionDrugAsyncWithXSessionId:(NSString*) xSessionId
                xAuthenticationToken:(NSString*) xAuthenticationToken
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedPatchDiscontinuePrescriptionDrug) onCompleted(xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xAppId = @"doctor_app";

    [self.pmr updateDiscontinuePrescriptionDrugAsyncWithXSessionId: xSessionId xAuthenticationToken : xAuthenticationToken xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="sessions_controller"></a>![Class: ](https://apidocs.io/img/class.png ".SessionsController") SessionsController

### Get singleton instance
```objc
Sessions* sessions = [[Sessions alloc]init] ;
```

### <a name="update_log_out_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".SessionsController.updateLogOutAsyncWithXAuthenticationToken") updateLogOutAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function updateLogOutAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                doctorInformationIsAvailable:(NSString*) doctorInformationIsAvailable
                doctorInformationLang:(NSString*) doctorInformationLang
                doctorInformationLatitude:(NSString*) doctorInformationLatitude
                doctorInformationLongitude:(NSString*) doctorInformationLongitude
                completionBlock:(CompletedPutLogOut) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId doctorInformationIsAvailable : doctorInformationIsAvailable doctorInformationLang : doctorInformationLang doctorInformationLatitude : doctorInformationLatitude doctorInformationLongitude : doctorInformationLongitude)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationIsAvailable |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationLang |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationLatitude |  ``` Required ```  | TODO: Add a parameter description |
| doctorInformationLongitude |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor-app";
    NSString* doctorInformationIsAvailable = @"true";
    NSString* doctorInformationLang = @"en";
    NSString* doctorInformationLatitude = @"1";
    NSString* doctorInformationLongitude = @"1";

    [self.sessions updateLogOutAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId doctorInformationIsAvailable : doctorInformationIsAvailable doctorInformationLang : doctorInformationLang doctorInformationLatitude : doctorInformationLatitude doctorInformationLongitude : doctorInformationLongitude  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="delete_logout_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".SessionsController.deleteLogoutAsyncWithXAuthenticationToken") deleteLogoutAsyncWithXAuthenticationToken

> Doctor App log out


```objc
function deleteLogoutAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedDeleteLogout) onCompleted(xAuthenticationToken xSessionId : xSessionId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";

    [self.sessions deleteLogoutAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="update_save_session_device_token_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".SessionsController.updateSaveSessionDeviceTokenAsyncWithXAuthenticationToken") updateSaveSessionDeviceTokenAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function updateSaveSessionDeviceTokenAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                deviceToken:(NSString*) deviceToken
                completionBlock:(CompletedPutSaveSessionDeviceToken) onCompleted(xAuthenticationToken xSessionId : xSessionId deviceToken : deviceToken)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| deviceToken |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* deviceToken = @"f9ddda083107a9c6b21fb48815532aa71867c23e731951463e4e35cb806c052d";

    [self.sessions updateSaveSessionDeviceTokenAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId deviceToken : deviceToken  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_user_details_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".SessionsController.getUserDetailsAsyncWithXAuthenticationToken") getUserDetailsAsyncWithXAuthenticationToken

> Get individual with more details 
> 1 - reservation_request


```objc
function getUserDetailsAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                completionBlock:(CompletedGetUserDetails) onCompleted(xAuthenticationToken xSessionId : xSessionId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";

    [self.sessions getUserDetailsAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="patients_controller"></a>![Class: ](https://apidocs.io/img/class.png ".PatientsController") PatientsController

### Get singleton instance
```objc
Patients* patients = [[Patients alloc]init] ;
```

### <a name="get_show_patients_list_async_with_x_authentication_token"></a>![Method: ](https://apidocs.io/img/method.png ".PatientsController.getShowPatientsListAsyncWithXAuthenticationToken") getShowPatientsListAsyncWithXAuthenticationToken

> TODO: Add Description


```objc
function getShowPatientsListAsyncWithXAuthenticationToken:(NSString*) xAuthenticationToken
                xSessionId:(NSString*) xSessionId
                xAppId:(NSString*) xAppId
                completionBlock:(CompletedGetShowPatientsList) onCompleted(xAuthenticationToken xSessionId : xSessionId xAppId : xAppId)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| xAuthenticationToken |  ``` Required ```  | TODO: Add a parameter description |
| xSessionId |  ``` Required ```  | TODO: Add a parameter description |
| xAppId |  ``` Required ```  | TODO: Add a parameter description |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* xAuthenticationToken = @"{{token}}";
    NSString* xSessionId = @"{{session_id}}";
    NSString* xAppId = @"doctor_app";

    [self.patients getShowPatientsListAsyncWithXAuthenticationToken: xAuthenticationToken xSessionId : xSessionId xAppId : xAppId  completionBlock:^(BOOL success, HttpContext* context, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)



