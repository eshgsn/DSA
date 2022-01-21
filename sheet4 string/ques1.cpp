//1.	Write a program to return the maximum occurring character in the input string, e.g., if the input string is "Java" then the function should return 'a'.
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int count[256]={0};
   string str;
   cout<<"enter the string";
   cin>>str;
   int max=0;
   char res;
   int n=str.length();
   for(int i=0;i<n;i++)
   {
       count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            res = str[i];
        }
   }
   cout<<res;
   return 0;
}
