#include<iostream>
#include<math.h>
using namespace std;

void pattern(int n){
    if(n==0)
        return;
    else
    {
        pattern(--n);
        cout<<pow(3,n)<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}
/*
1 + 3 + 9 + 27 + ... + 3^n
*/
