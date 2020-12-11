#include<iostream>
using namespace std;
int BinarySearch(int arr[],int l,int e,int x)
{
    int mid=(l+e)/2;
    while(l<=e)
    {
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            return BinarySearch(arr,mid+1,e,x);
        }
        else{
            return BinarySearch(arr,l,mid-1,x);
        }
    }
}
int main()
{
    int arr[]={2,7,89,91,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    cout<<BinarySearch(arr,0,n,x);
}
