//
// Created by zhaoys47577 on 2022/8/1.
//
#include<iostream>
int main()
{
    int i,&ri = i;
    i = 5;
    ri=10;
    std::cout << i << " " << ri << std::endl;
    return 0;
}