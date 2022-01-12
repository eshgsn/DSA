//to print the whole series till n no.
#include<iostream>
using namespace std;
int fib(int n);
int main()
{
    int n;
    int i=0;
   cout<<"enter the no.";
   cin>>n;
   while(i<n)
   {
       cout<<fib(i)<<" ";
       i++;
   }
   return 0;
}
int fib(int n)
{

    if (n==0||n==1){
        return n;
    }

    else {
            return (fib(n-1)+fib(n-2));

    }


}
