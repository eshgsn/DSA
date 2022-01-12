//print the fibonacci sum 
#include<iostream>
using namespace std;
int fib(int n);
int main()
{
    int n;
   cout<<"enter the no.";
   cin>>n;
   cout<<fib(n);
   return 0;
}
int fib(int n)
{
    if (n==0||n==1){
        return n;
    }
    else return fib(n-1)+fib(n-2);

}
