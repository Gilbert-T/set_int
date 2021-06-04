//
// Created by gilbert on 2021/6/3.
//

#include "set_int.h"
#include <algorithm>
#include <bitset>
set_int::set_int() : m_elements(),
                     m_size(m_elements.size()){

}

set_int::set_int(const int &i) : m_elements{i},
                                 m_size(m_elements.size()){

}

set_int::set_int(const int &n, const int &e) : m_elements(n, e),
                                               m_size(m_elements.size()){

}

set_int::set_int(std::initializer_list<int> il) : m_elements{il},
                                                  m_size(m_elements.size()){

}
set_int::set_int(const set_int &rhs) : m_elements(rhs.m_elements),
                                       m_size(m_elements.size()) {

}

set_int::set_int(set_int &&rhs) noexcept : m_elements(std::move(rhs.m_elements)) ,
                                 m_size(m_elements.size()) {

}

set_int& set_int::operator=(const set_int &rhs) {
    m_elements = rhs.m_elements;
    m_size = rhs.m_size;
    return *this;
}
set_int& set_int::operator=(set_int &&rhs) noexcept {
    m_elements = std::move(rhs.m_elements);
    m_size = std::move(rhs.m_size);
    return *this;
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
    set_int tmp(*this);
    for(auto i : rhs.m_elements){
        if(std::find(tmp.m_elements.begin(), tmp.m_elements.end(), i) == tmp.m_elements.end()){
            tmp.m_elements.push_back(i);
            tmp.m_size = tmp.m_elements.size();
        }
    }
    return tmp;

}
set_int  set_int::operator-(const set_int &rhs) const {
    set_int tmp;
    for(auto i : m_elements){
        if(std::find(rhs.m_elements.begin(), rhs.m_elements.end(), i) == rhs.m_elements.end()){
            tmp.m_elements.push_back(i);
            tmp.m_size = tmp.m_elements.size();
        }
    }
    return tmp;
}
set_int  set_int::operator*(const set_int &rhs) const {
    set_int tmp;
    for(auto i : m_elements){
        if(std::find(rhs.m_elements.begin(), rhs.m_elements.end(), i) != rhs.m_elements.end()){
            tmp.m_elements.push_back(i);
            tmp.m_size = tmp.m_elements.size();
        }
    }
    return tmp;
}
std::ostream& operator<<(std::ostream& os, const set_int& rhs){
    os << "[";
    for(int i = 0; i < rhs.m_size; ++i){
        os << rhs.m_elements[i] << (i == rhs.m_size - 1 ? "" : " ");
    }
    os << "]";
    return os;
}




std::size_t set_int::Size() {
    return m_elements.size();
}
std::vector<set_int> set_int::getSubSet() {
    std::vector<set_int> result;
    auto countOfSubSet = 1 << m_size;
    for(int i = 0; i < countOfSubSet; ++i){
        set_int tmp;
        for(int j = 0; j < m_size; ++j){
            if( (i & (1 << j))){
                tmp.m_elements.push_back(m_elements[j]);
                tmp.m_size = tmp.m_elements.size();
            }
        }
        result.push_back(tmp);
    }
   return result;
}