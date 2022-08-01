//
// Created by zhaoys47577 on 2022/8/1.
//
#include<iostream>
#include<string>

using std::string;

int main()
{
    string s1 ;
    string s2 ;
    std::cin >> s1 >> s2;
    if(s1==s2)
    {
        std::cout<<s1;
    }else {
        if(s1.size()>s2.size())
        {
            std::cout<<s1;
        }else if(s1.size()<s2.size())
        {
            std::cout<<s2;
        }else
        {
            std::cout<<"SIZE IS EQUAL BUT NOT ==";
        }
    }
}