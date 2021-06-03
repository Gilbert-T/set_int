//
// Created by gilbert on 2021/6/3.
//

#include "set_int.h"
#include <algorithm>
set_int::set_int() : m_elements(){

}

set_int::set_int(const int &i) : m_elements{i}{

}

set_int::set_int(const int &n, const int &e) : m_elements(n, e){

}

set_int::set_int(std::initializer_list<int> il) : m_elements{il}{

}

bool set_int::operator==(const set_int &rhs) const {
    for(auto i : m_elements){
        auto iter = std::find(rhs.m_elements.begin(), rhs.m_elements.end(), i);
        if (iter == rhs.m_elements.end()){
            return false;
        }
    }
    return true;
}

bool set_int::operator!=(const set_int &rhs) const {
    return !operator==(rhs);
}

set_int  set_int::operator+(const set_int &rhs) const {

}
set_int  set_int::operator-(const set_int &rhs) const {

}
set_int  set_int::operator*(const set_int &rhs) const {

}



std::size_t set_int::Size() {
    return m_elements.size();
}
std::vector<set_int> set_int::getSubSet() {
//    std::vector<set_int> result;
//    for(int i = 0; i < m_elements.size(); ++i){
//        if(i == 0){
//            set_int empty;
//            result.push_back(empty);
//            result.push_back(m_elements);
//        }
//        if(i == m_elements.size() - 1){
//            result.push_back(m_elements);
//            set_int empty;
//            result.push_back(empty);
//        }
//        //select one
//        for(int j = 0; j < m_elements.size(); ++j){
//            set_int tmp(m_elements[j]);
//            result.push_back(tmp);
//        }
//
//        //select two
//        for(int i = 0; i < m_elements.size(); ++i){
//            set_int first(m_elements[i])
//            set_int Second = *this - first;
//            for(int j = 0; j < Second.m_elements.size())
//        }
//
//
//        set_int
//
//    }
//    if(m_elements.size() == 1){
//        set_int empty;
//        result.push_back(empty);
//        result.push_back(m_elements);
//        return result;
//    }else{
//
//    }
}