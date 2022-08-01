//
// Created by zhaoys47577 on 2022/8/1.
//
#include <iostream>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line))
    {
        if(!line.empty())
        {
            cout<<line<<endl;
        }
    }
}