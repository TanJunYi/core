﻿/* DO NOT EDIT THIS FILE - it is machine generated */
#if defined BOARD_ANDROID
#include <jni.h>
#elif (defined BOARD_PC) && (defined BOARD_PC_JNI)
#include "./include/jni.h"
#endif
/* Header for class net_irext_decode_sdk_IRDecode */

#ifndef _Included_net_irext_decode_sdk_IRDecode
#define _Included_net_irext_decode_sdk_IRDecode
#ifdef __cplusplus
extern "C" {
#endif
#undef net_irext_decode_sdk_IRDecode_BIND_ABOVE_CLIENT
#define net_irext_decode_sdk_IRDecode_BIND_ABOVE_CLIENT 8L
#undef net_irext_decode_sdk_IRDecode_BIND_ADJUST_WITH_ACTIVITY
#define net_irext_decode_sdk_IRDecode_BIND_ADJUST_WITH_ACTIVITY 128L
#undef net_irext_decode_sdk_IRDecode_BIND_ALLOW_OOM_MANAGEMENT
#define net_irext_decode_sdk_IRDecode_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef net_irext_decode_sdk_IRDecode_BIND_AUTO_CREATE
#define net_irext_decode_sdk_IRDecode_BIND_AUTO_CREATE 1L
#undef net_irext_decode_sdk_IRDecode_BIND_DEBUG_UNBIND
#define net_irext_decode_sdk_IRDecode_BIND_DEBUG_UNBIND 2L
#undef net_irext_decode_sdk_IRDecode_BIND_IMPORTANT
#define net_irext_decode_sdk_IRDecode_BIND_IMPORTANT 64L
#undef net_irext_decode_sdk_IRDecode_BIND_NOT_FOREGROUND
#define net_irext_decode_sdk_IRDecode_BIND_NOT_FOREGROUND 4L
#undef net_irext_decode_sdk_IRDecode_BIND_WAIVE_PRIORITY
#define net_irext_decode_sdk_IRDecode_BIND_WAIVE_PRIORITY 32L
#undef net_irext_decode_sdk_IRDecode_CONTEXT_IGNORE_SECURITY
#define net_irext_decode_sdk_IRDecode_CONTEXT_IGNORE_SECURITY 2L
#undef net_irext_decode_sdk_IRDecode_CONTEXT_INCLUDE_CODE
#define net_irext_decode_sdk_IRDecode_CONTEXT_INCLUDE_CODE 1L
#undef net_irext_decode_sdk_IRDecode_CONTEXT_RESTRICTED
#define net_irext_decode_sdk_IRDecode_CONTEXT_RESTRICTED 4L
#undef net_irext_decode_sdk_IRDecode_MODE_APPEND
#define net_irext_decode_sdk_IRDecode_MODE_APPEND 32768L
#undef net_irext_decode_sdk_IRDecode_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define net_irext_decode_sdk_IRDecode_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef net_irext_decode_sdk_IRDecode_MODE_MULTI_PROCESS
#define net_irext_decode_sdk_IRDecode_MODE_MULTI_PROCESS 4L
#undef net_irext_decode_sdk_IRDecode_MODE_PRIVATE
#define net_irext_decode_sdk_IRDecode_MODE_PRIVATE 0L
#undef net_irext_decode_sdk_IRDecode_MODE_WORLD_READABLE
#define net_irext_decode_sdk_IRDecode_MODE_WORLD_READABLE 1L
#undef net_irext_decode_sdk_IRDecode_MODE_WORLD_WRITEABLE
#define net_irext_decode_sdk_IRDecode_MODE_WORLD_WRITEABLE 2L
#undef net_irext_decode_sdk_IRDecode_START_CONTINUATION_MASK
#define net_irext_decode_sdk_IRDecode_START_CONTINUATION_MASK 15L
#undef net_irext_decode_sdk_IRDecode_START_FLAG_REDELIVERY
#define net_irext_decode_sdk_IRDecode_START_FLAG_REDELIVERY 1L
#undef net_irext_decode_sdk_IRDecode_START_FLAG_RETRY
#define net_irext_decode_sdk_IRDecode_START_FLAG_RETRY 2L
#undef net_irext_decode_sdk_IRDecode_START_NOT_STICKY
#define net_irext_decode_sdk_IRDecode_START_NOT_STICKY 2L
#undef net_irext_decode_sdk_IRDecode_START_REDELIVER_INTENT
#define net_irext_decode_sdk_IRDecode_START_REDELIVER_INTENT 3L
#undef net_irext_decode_sdk_IRDecode_START_STICKY
#define net_irext_decode_sdk_IRDecode_START_STICKY 1L
#undef net_irext_decode_sdk_IRDecode_START_STICKY_COMPATIBILITY
#define net_irext_decode_sdk_IRDecode_START_STICKY_COMPATIBILITY 0L
/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irOpen
 * Signature: II(Ljava/lang/String;)
 */
JNIEXPORT jint JNICALL Java_net_irext_decode_sdk_IRDecode_irOpen
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irOpenBinary
 * Signature: II(Ljava/lang/String;)
 */
JNIEXPORT jint JNICALL Java_net_irext_decode_sdk_IRDecode_irOpenBinary
  (JNIEnv *, jobject, jint, jint, jbyteArray, jint);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irDecode
 * Signature: I(Lnet/irext/decodesdk/bean/ACStatus;I)[I
 */
JNIEXPORT jintArray JNICALL Java_net_irext_decode_sdk_IRDecode_irDecode
  (JNIEnv *, jobject, jint, jobject, jint);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_irext_decode_sdk_IRDecode_irClose
  (JNIEnv *, jobject);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irACGetTemperatureRange
 * Signature: (I)Lcom/irext/remote/bean/jnibean/TemperatureRange;
 */
JNIEXPORT jobject JNICALL Java_net_irext_decode_sdk_IRDecode_irACGetTemperatureRange
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irACGetSupportedMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_irext_decode_sdk_IRDecode_irACGetSupportedMode
  (JNIEnv *, jobject);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irACGetSupportedWindSpeed
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_irext_decode_sdk_IRDecode_irACGetSupportedWindSpeed
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irACGetSupportedSwing
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_irext_decode_sdk_IRDecode_irACGetSupportedSwing
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_irext_decode_sdk_IRDecode
 * Method:    irACGetSupportedWindDirection
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_irext_decode_sdk_IRDecode_irACGetSupportedWindDirection
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_irext_decode_sdk_IRDecode_LocalBinder */

#ifndef _Included_net_irext_decode_sdk_IRDecode_LocalBinder
#define _Included_net_irext_decode_sdk_IRDecode_LocalBinder
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif