//
// Created by zhaoys47577 on 2022/7/28.
//
#include <iostream>
int main()
{
    int sum=0;
    int value=0;
    while(std::cin>>value)
    {
        sum+=value;
    }
    std::cout<<sum<<std::endl;
    return 0;
}