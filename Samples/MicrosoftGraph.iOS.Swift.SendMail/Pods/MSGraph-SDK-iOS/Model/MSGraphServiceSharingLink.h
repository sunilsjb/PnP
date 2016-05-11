/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHSERVICESHARINGLINK_H
#define MSGRAPHSERVICESHARINGLINK_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

@class MSGraphServiceIdentity;
#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphServiceSharingLink
 *
 */
@interface MSGraphServiceSharingLink : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>

/** Property application
 *
 */
@property (nonatomic,  copy, setter=setApplication:, getter=application) MSGraphServiceIdentity * application;

/** Property type
 *
 */
@property (nonatomic,  copy, setter=setType:, getter=type) NSString * type;

/** Property webUrl
 *
 */
@property (nonatomic,  copy, setter=setWebUrl:, getter=webUrl) NSString * webUrl;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif