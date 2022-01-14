#include<iostream>

using namespace std;

void sort(int *arr,int n){
    int i,j,min_ind;
    for(int i=0;i<n-1;i++)
    {
        min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(*(arr+j)<*(arr+min_ind))
            {
                min_ind=j;
            }

        }
        swap(*(arr+min_ind),*(arr+i));

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
