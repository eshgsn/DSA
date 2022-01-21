//3.	Write a program to test if two given String is a rotation of each other or not,
//  e.g. if the given String is "XYZ" and "ZXY" then your function should return true, but if the input is "XYZ" and "YXZ" then return false.

#include <iostream>

using namespace std;
bool fun(string s,string s2)
{
    string str;
    str=s+s;
    if(str.find(s2))
        return true ;
    else 
        return false;
}

int main()
{
   cout<<"enter the str1";
   string s;
   cin>>s;
   cout<<"enter the str2";
   string s2;
   cin>>s2;
   cout<<fun(s,s2);

    return 0;
}
