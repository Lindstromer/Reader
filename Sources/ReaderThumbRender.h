//
//	ReaderThumbRender.h
//	Reader v2.2.0
//
//	Created by Julius Oklamcak on 2011-09-01.
//	Copyright © 2011 Julius Oklamcak. All rights reserved.
//
//	This work is being made available under a Creative Commons Attribution license:
//		«http://creativecommons.org/licenses/by/3.0/»
//	You are free to use this work and any derivatives of this work in personal and/or
//	commercial products and projects as long as the above copyright is maintained and
//	the original author is attributed.
//

#import <Foundation/Foundation.h>

#import "ReaderThumbQueue.h"

@class ReaderThumbRequest;

@interface ReaderThumbRender : ReaderThumbOperation
{
@private // Instance variables

	ReaderThumbRequest *request;
}

- (id)initWithRequest:(ReaderThumbRequest *)request;

@end
