#include<iostream>
using namespace std;
int check_rotation_array(int arr[],int n){
    int minIndex=0;
    int minElement=arr[0];
    for(int i=0;i<n;i++){
        if(minElement>arr[i]){
            minIndex=i;
            minElement=arr[i];
        }
    }
    return minIndex;
}
int main(){
int arr[]={12,28,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<check_rotation_array(arr,n);
}
