//
// Created by gilbert on 2021/6/3.
//

#ifndef SET_INT_SET_INT_H
#define SET_INT_SET_INT_H
#include <vector>
#include <memory>

class set_int {
public:
    //construct an empty set
    set_int();

    explicit set_int(const int& i);

    //construct a set with n numbers of e
    set_int(const int& n, const int &e);

    //construct with an initialized List
    set_int(std::initializer_list<int> il);

    ~set_int() = default;

    set_int operator+(const set_int& rhs) const;
    set_int operator-(const set_int& rhs) const;
    set_int operator*(const set_int& rhs) const;
    bool operator==(const set_int& rhs) const;
    bool operator!=(const set_int& rhs) const;

    std::vector<set_int> getSubSet();

    std::size_t Size();


private:
    std::vector<int> m_elements;

};


#endif //SET_INT_SET_INT_H
