//linear search
/*#include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[],int n,int key){
for(int i=0;i<n;i++){
if(a[i]==key){
return i;
}
}
return -1;
}
int main(){
int a[]={12,4,8,9,7,2};
int x=2;
int n=sizeof(a)/sizeof(a[0]);
int result=linearsearch(a,n,x);
cout<<result<<endl;
return 0;
}*/
//Binary search tree
/*#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size,int key){
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
mid=start+(end-start)/2;
}
return -1;
}
int main(){
int arr[]={2,4,6,8,10,12};
int index=binarysearch(arr,6,10);
cout<<"index of the element 10="<<index;

    return 0;
}*/
//code of first and last gccurence index
/*#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int arr[],int n,int key){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
if(arr[mid]==key){
ans=mid;
e=mid-1;
}
else if(key>arr[mid]){
    s=mid+1;
}
else if(key<arr[mid]){
    e=mid-1;
}
}
return ans;

}
int main(){
int arr[6]={2,5,5,7,8,9};
cout<<"first occurence element"<<firstoccurence(arr,6,5);
return 0;
}*/
//last occurence
/*#include<bits/stdc++.h>
using namespace std;
int lastoccurence(int arr[],int n,int key){
int s=0;
int e=n-1;
int ans=-1;
while(s<=e){
    int mid=s+(e-s)/2;
if(arr[mid]==key){
ans=mid;
s=mid+1;
}
else if(key>arr[mid]){
    s=mid+1;
}
else if(key<arr[mid]){
    e=mid-1;
}

}
return ans;

}
int main(){
int arr[6]={2,5,5,7,8,9};
int key=7;
cout<<"last occurence element"<<lastoccurence(arr,6,key);
return 0;
}*/
//concept of peak
#include<bits/stdc++.h>
using namespace std;
int peak(int arr[],int n){
 int s=0;
int e=n-1;
 int mid=s+(s-e)/2;
while(s<e){
if(arr[mid]<arr[mid+1]){
    s=mid+1;
}
else{
e=mid;
}
 int mid=s+(s-e)/2;

}

}
int main(){
int arr[]={7,2,9};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"peack element in element"<<peak(arr,n);
return 0;
}

