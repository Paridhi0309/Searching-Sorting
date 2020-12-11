#include<iostream>
using namespace std;
void left_rotate_array(int arr[],int n){
    int temp=arr[0];
    int i;
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
void rotate_array(int arr[],int n,int low,int high,int d){
   for(int i=0;i<d;i++){
    left_rotate_array(arr,n);

   }

}
int main(){
    int arr[]={1,2,9,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int d;
    cin>>d;
    rotate_array(arr,n,low,high,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
