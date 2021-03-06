/*
 *  ESRenderer.h
 *  WhirlyGlobeLib
 *
 *  Created by Steve Gifford on 1/13/11.
 *  Copyright 2011-2012 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>

/// Base protocol for a renderer
@protocol WhirlyKitESRenderer <NSObject>

/// Render to the screen, ideally within the given duration
- (void)render:(NSTimeInterval)duration;

/// Called when the layer gets resized.  Need to resize ourselves
- (BOOL)resizeFromLayer:(CAEAGLLayer *)layer;

/// Call this before defining things within the OpenGL context
- (void)useContext;

/// Set the render until time.  This is used by things like fade go keep
///  the rendering optimization from cutting off animation.
- (void)setRenderUntil:(NSTimeInterval)newTime;

@end
