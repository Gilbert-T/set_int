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

void print_test(){
    set_int s1{1, 2, 3};
    set_int s2{4, 5, 6};
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
}

void add_set_test(){
    set_int s1{1, 2, 3};
    set_int s2{4, 5, 6};
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << "s2 = " << s2 << std::endl;
    auto s3 = s1 + s2;
    std::cout << "s1 + s2 = " << s3 << std::endl;

    set_int s4{1, 2, 3};
    auto s5 = s1 + s4;
    std::cout << "s4 = " << s4 << std::endl;
    std::cout << "s1 + s4 = " << s5 << std::endl;

    set_int s6{3, 4, 5};
    auto s7 = s1 + s6;
    std::cout << "s6 = " << s6 << std::endl;
    std::cout << "s1 + s6 = " << s7 << std::endl;
}