#include<iostream>
using namespace std;

void fun(int n){

    if(n==0)
        return;
    else{
         fun(n-1);
         if((n+1)%2!=0)
            cout<<n+1<<" ";

    }
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    fun(n);



}
