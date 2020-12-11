#include<iostream>
using namespace std;
void rotate_array(int arr[],int low,int high){
    while(low<=high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }

}
int main(){
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1;
    rotate_array(arr,low,high);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
