//4.	Write a program to reverse a String in C/Java/Python or choice of your programming language. You can write either the recursive or
//iterative solution. For example, if a given input is "abcd," then your function should return "dcba".




#include <iostream>
using namespace std;
void reverse(string& s)
{
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        swap(s[i],s[n-i-1]);
    }
}

int main()
{
   cout<<"enter the str1";
   string s;
   cin>>s;
   reverse(s);
   cout<<s;

    return 0;
}
