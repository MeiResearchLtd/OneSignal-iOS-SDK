/**
 * Modified MIT License
 *
 * Copyright 2017 OneSignal
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * 1. The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * 2. All copies of substantial portions of the Software may only be used in connection
 * with services provided by OneSignal.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef OSInAppMessagingDefines_h
#define OSInAppMessagingDefines_h

typedef NS_ENUM(NSUInteger, OSInAppMessageDisplayPosition) {
    OSInAppMessageDisplayPositionBottom,
    
    OSInAppMessageDisplayPositionTop,
    
    OSInAppMessageDisplayPositionCentered
};

#define MESSAGE_MARGIN 0.025f

#define BANNER_ASPECT_RATIO 2.3f
#define CENTERED_MODAL_ASPECT_RATIO 0.81f

#define MAX_DISMISSAL_ANIMATION_DURATION 0.3f

// Key for NSUserDefaults trigger storage
#define OS_TRIGGERS_KEY @"OS_IN_APP_MESSAGING_TRIGGERS"

#endif /* OSInAppMessagingDefines_h */