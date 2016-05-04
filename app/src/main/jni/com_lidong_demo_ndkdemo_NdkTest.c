//
// Created by dong on 2016/4/3.
//

#include<com_lidong_demo_ndkdemo_NdkTest.h>

JNIEXPORT jint JNICALL Java_com_lidong_demo_ndkdemo_NdkTest_add
  (JNIEnv *evn, jclass cla, jint i, jint j){
  return i+j;
}


JNIEXPORT jstring JNICALL Java_com_lidong_demo_ndkdemo_NdkTest_getNdkHelloWorld
  (JNIEnv *env, jclass cla, jstring j_str){

    const char *c_str = NULL;
 	char buff[128] = {0};
 	jboolean isCopy;	// 返回JNI_TRUE表示原字符串的拷贝，返回JNI_FALSE表示返回原字符串的指针
 	c_str = (*env)->GetStringUTFChars(env, j_str, &isCopy);
// 	printf(isCopy:%d,isCopy);
 	if(c_str == NULL)
 	{
 		return NULL;
 	}
// 	printf(C_str: %s , c_str);
 	sprintf(buff, hello %s, c_str);
 	(*env)->ReleaseStringUTFChars(env, j_str, c_str);
 	return (*env)->NewStringUTF(env,buff);
  }



