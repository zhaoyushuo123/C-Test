//
// Created by zhaoys47577 on 2022/8/1.
//
#include<iostream>
int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    decltype(b) e = a;
    ++c;
    ++d;
    ++e;
    std::cout << a <<" "<< b <<" "<< c <<" "<< d <<" "<< e <<std::endl;
    return 0;

}