//
// Created by zhaoys47577 on 2022/8/1.
//

#include<iostream>

int main()
{
    auto TT = 0 , *p = &TT;

    int i = 0, &r = i;
    auto a = r;

    const int ci = i,&cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;

    const auto f = ci;
    auto &g = ci;

    const auto &j = 42;

    a = 42;
    b = 42;
    c = 42;

    std::cout << a <<" "<< b <<" "<< c <<" "<< d<<" "<< e <<" "<< f << std::endl;

}
