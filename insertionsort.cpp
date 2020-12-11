#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    int j;
    for(int i=1;i<n;i++){
        int current=arr[i];
        for(j=i-1;j>=0;j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
int main(){
int arr[]={46,13,12,466,790};
int n=sizeof(arr)/sizeof(arr[0]);
InsertionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
