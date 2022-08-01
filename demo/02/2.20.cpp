//
// Created by zhaoys47577 on 2022/8/1.
//
#include "iostream"

int main()
{
    int i= 42;
    int *p1 = &i;
    std::cout << i <<" "<< p1 << " " << *p1 <<std::endl;
    *p1 = *p1 * *p1;
    std::cout << i <<" "<< p1 << " " << *p1 <<std::endl;
    return 0;
}