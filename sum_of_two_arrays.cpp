#include<iostream>
using namespace std;
void sum_of_two_arrays(int input1[],int input2[],int size1,int size2,int output[],int outsize){
    int i=size1,j=size2,k;
    int sum=0,carry=0;
    if(size1>size2){
        while(i>=0 && j>=0){
        sum=input1[i]+input2[j]+carry;
        carry=sum/10;
        output[k]=sum%10;
        i--;
        j--;
        k--;

        }
        while(i>=0){
            sum=input1[i]+carry;
            carry=sum/10;
            output[k]=sum%10;
            i--;
            k--;
        }
        output[0]=carry;
    }
    else if(size1==size2){
        k=size1;
        while(i>=0 && j>=0){
        sum=input1[i]+input2[j]+carry;
        carry=sum/10;
        output[k]=sum%10;
        i--;
        j--;
        k--;
        }
        output[0]=carry;
    }
    else{
        k=size2;
        while(i>=0 && j>=0){
            sum=input1[i]+input2[j]+carry;
            carry=sum/10;
            output[k]=sum%10;
            i--;
            j--;
            k--;
        }
        while(j>=0){
            sum=input2[j]+carry;
            carry=sum/10;
            output[k]=sum%10;
            j--;
            k--;
        }
        output[0]=carry;
    }
}

int main(){
    int size1,size2;
    cin>>size1;
    int input1[size1],input2[size2];
    for(int i=0;i<size1;i++){
        cin>>input1[i];
    }
    cin>>size2;
    for(int i=0;i<size2;i++){
        cin>>input2[i];
    }
    int outsize=1+max(size1,size2);
    int *output=new int[outsize];
    sum_of_two_arrays(input1,input2,size1,size2,output,outsize);
    for(int i=0;i<outsize;i++){
        cout<<output[i]<<" ";
    }
}
