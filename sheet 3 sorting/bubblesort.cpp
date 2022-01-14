#include<iostream>

using namespace std;

void sort(int *arr,int n){
    int i,j;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                swap(*(arr+j),*(arr+j+1));
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    cout<<"enter the elements of array "<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    return 0;
}
