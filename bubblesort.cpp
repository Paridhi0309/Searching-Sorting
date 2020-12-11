#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int main(){
int arr[]={46,85,12,465,79};
int n=sizeof(arr)/sizeof(arr[0]);
BubbleSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
