//
// Created by gilbert on 2021/6/4.
//
#include <iostream>
#include "set_int.h"
#include "set_int_test.h"
void equal_test(){
    set_int s1{1, 2, 3};
    set_int s2{4, 5, 6};
    set_int s3{1, 2, 3};

    std::cout << std::boolalpha << (s1 == s2) << std::endl;
    std::cout << std::boolalpha << (s1 != s2) << std::endl;
    std::cout << std::boolalpha << (s1 == s3) << std::endl;
    std::cout << std::boolalpha << (s1 != s3) << std::endl;
}