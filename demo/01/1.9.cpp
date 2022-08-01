//
// Created by zhaoys47577 on 2022/7/28.
//
#include<iostream>
int main()
{
    int sum=0;
    int i=50;
    while(i<100)
    {
        sum+=i;
        i++;
    }
    std::cout<<i<<std::endl<<sum<<std::endl;
    return 0;
}
// (100 + 50)*51/2