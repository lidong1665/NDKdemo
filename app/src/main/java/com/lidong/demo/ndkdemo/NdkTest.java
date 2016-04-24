package com.lidong.demo.ndkdemo;

/**
 * Created by dong on 2016/4/3.
 */
public class NdkTest {
    /**
     *
     * @param i
     * @param j
     * @return
     */
   public static native  int add(int i,int j);

    /**
     *
     * @param message
     * @return
     */
    public static native String getNdkHelloWorld(String message);

    static {
        System.loadLibrary("ndk-test");
    }
}
