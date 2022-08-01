//
// Created by zhaoys47577 on 2022/8/1.
//
#include <iostream>
int main()
{
    const int i = 42;
    auto j =i;
    const auto &k = i ;
    auto *p = &i;
    const auto j2 = i,&k2 = i;

}