//
// Created by  Kelly Hong on 2019/1/17.
//

#ifndef JNITEST_NATIVE_LIB_H
#define JNITEST_NATIVE_LIB_H

#include "hello_lib.h"
#include <jni.h>


extern "C" {

    JNIEXPORT jstring JNICALL
    Java_com_deer_jnitest_MainActivity_stringFromJNI(
            JNIEnv *env,
            jobject /* this */);
};

#endif //JNITEST_NATIVE_LIB_H
