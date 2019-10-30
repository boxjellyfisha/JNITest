package com.deer.jnitest

class MathJNI {
    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    external fun plusJNI(var1: Int, var2: Int): Int

    companion object {

        // Used to load the 'native-lib' library on application startup.
        init {
            System.loadLibrary("math-lib")
        }
    }
}
