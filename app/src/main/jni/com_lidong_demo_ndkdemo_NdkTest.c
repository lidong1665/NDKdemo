//
// Created by dong on 2016/4/3.
//

#include<com_lidong_demo_ndkdemo_NdkTest.h>

JNIEXPORT jint JNICALL Java_com_lidong_demo_ndkdemo_NdkTest_add
  (JNIEnv *evn, jclass cla, jint i, jint j){
  return i+j;
}

