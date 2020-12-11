#include<iostream>
using namespace std;
void SORT012(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={1,2,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    SORT012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
