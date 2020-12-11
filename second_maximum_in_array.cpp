#include<iostream>
#include<climits>
using namespace std;
int second_max(int arr[],int n){
    int maximum=INT_MIN,second_maximum=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            second_maximum=maximum;
            maximum=arr[i];
        }
        else if(arr[i]>second_maximum && arr[i]!=maximum)
        {
            second_maximum=arr[i];
        }
    }
    return second_maximum;

}
int main(){
int arr[]={12,67,90,66,11};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<second_max(arr,n);

}
