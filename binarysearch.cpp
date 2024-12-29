#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        
    }
    return -1;
}
int main(){
int evenarr[6]={3,5,6,7,8,9};
int oddarr[7]={3,4,5,6,7,8,9};
int index=binary(evenarr,6,5);
cout<<"element index"<<index<<endl;
return 0;
}