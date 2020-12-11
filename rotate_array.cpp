#include<iostream>
using namespace std;
void rotate_array(int arr[],int n,int d){
    for(int j=1;j<=d;j++){
        int temp=arr[0];
        int i;
        for(i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}


int main(){
    int arr[]={1 ,2, 3, 4 ,5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d;
    cin>>d;
    rotate_array(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
