//
// Created by zhaoys47577 on 2022/8/1.
//

#include "iostream"
int main()
{
    int a=3,b=4;
    decltype(a) c = a;
    decltype(a=b) d =a;
    std::cout << (a=b);
    return 0;
}