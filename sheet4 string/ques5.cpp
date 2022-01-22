//5.	Write a program to print all permutations of a given String in Java/C/Python or any programming language of your choice. 
//For example, if given input is "123" then your program should print all 6 permutations e.g. "123", "132", "213", "231", "312" and "321".

#include <iostream>
using namespace std;
void Permutations(string str, int l, int r){
   if (l == r)
   cout<<str<<" ";
   else{
      for (int i = l; i <= r; i++){
         swap(str[l], str[i]);
         Permutations(str, l+1, r);
         swap(str[l], str[i]);
      }
   }
}
int main(){
   cout<<"enter string ";
   string str;
   cin>>str;
   int n = str.size();
   Permutations(str, 0, n-1);
   return 0;
}
