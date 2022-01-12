#include<iostream>
using namespace std;

void fun(int n){

    if(n==0)
        return;
    else{
         fun(n-2);
         cout<<n<<" ";

    }
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    if(n%2==0){
        fun(n);
    }
    else{
        n=n-1;
        fun(n);
    }


}
