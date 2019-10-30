//
// Created by  Kelly Hong on 2019/1/21.
//

#ifndef JNITEST_HELLO_LIB_H
#define JNITEST_HELLO_LIB_H

#include <string>
using namespace std;

class hello_lib {

public:
    hello_lib();
    string hello_country();
    string hello_street();
    string hello_block();
};


#endif //JNITEST_HELLO_LIB_H
