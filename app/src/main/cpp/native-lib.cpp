#include "native-lib.h"
#include <cstring>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_deer_jnitest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    std::string hello = "Hello world from C++!";
    hello_lib h;
    hello += h.hello_country();
    hello += h.hello_street();
    hello += h.hello_block();
    return env->NewStringUTF(hello.c_str());
}