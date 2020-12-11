#include<iostream>
using namespace std;
void merge_two_sorted_arrays(int input1[], int input2[], int size1, int size2, int ans[]){
int i=0,j=0,k=0;
        while(i<size1 && j<size2){
                if(input1[i]>input2[j]){
                    ans[k]=input2[j];
                    j++;
                }
                else{
                    ans[k]=input1[i];
                    i++;

                }
                k++;
                }

        while(i<size1){
            ans[k]=input1[i];
            i++;
            k++;
        }
        while(j<size2){
            ans[k]=input2[j];
            j++;
            k++;
        }

}

int main(){
    int input1[]={1,2,3,4,6};
    int input2[]={3,5,8,89,90};
    int size1=sizeof(input1)/sizeof(input1[0]);
    int size2=sizeof(input2)/sizeof(input2[0]);
    int *ans=new int[size1+size2];
    merge_two_sorted_arrays(input1,input2,size1,size2,ans);
    for(int i=0;i<size1+size2;i++){
        cout<<ans[i]<<" ";
    }
}
