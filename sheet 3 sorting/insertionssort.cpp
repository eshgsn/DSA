#include<iostream>

using namespace std;

void sort(int *arr,int n){
    int i,j,temp;
    for(int i=0;i<n-1;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=temp;

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
    cout<<endl;

    return 0;
}
