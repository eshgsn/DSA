//7.	Write a program to check if two String is an anagram of each other. An anagram contains are of the same length and contains 
// the same character, but in a different order, for example, "Army" and "Mary" is the anagram. Your program should return true if 
//  both Strings are the anagram, false otherwise.



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int n=s.length();
        
        int count[256]={0};
        for(int i=0;i<n;i++)
        {
            count[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            count[t[i]]--;
        }
       for (auto it: count) {
            if (count[it]!=0) return false;
        }
        return true;    
    }

int main()
{
   cout<<"enter the str1";
   string s;
   cin>>s;
   cout<<"enter the str2";
   string t;
   cin>>t;
   cout<<isAnagram(s,t);
   
   
}
