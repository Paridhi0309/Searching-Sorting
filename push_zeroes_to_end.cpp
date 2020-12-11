#include<iostream>
using namespace std;
void pushzeros(int arr[],int n)
{
    int countn=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[countn]=arr[i];
            countn++;
        }
    }
    for(int i=countn;i<n;i++){
        arr[i]=0;
    }

}
int main(){
    int arr[]={14,15,0,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    pushzeros(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
