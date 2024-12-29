/*#include<bits/stdc++.h>
using namespace std;
int getpvoit(int arr[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]>=arr[0]){
    s=mid+1;
}
else {
e=mid;
}
mid=s+(e-s)/2;
}
return s;
}
int main(){
int arr[5]={7,9,1,3,5};
cout<<"the piovt element is"<<getpvoit(arr,5);
return 0;
}*/
//concept of rottatin piovt
/*#include<bits/stdc++.h>
using namespace std;
int piovt(int arr[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]>=arr[0]){
s=mid+1;
}
else {
e=mid;
}
mid=s+(e-s)/2;
}
return s;
}
int binary(int arr[],int n,int e,int s,int key){
int start=s;
int end=e;
int mid=s+(e-s)/2;
while(s<=e){
 if(arr[mid]==key){
return mid;
 } 
 if(key>arr[mid]){
    start=mid+1;
 }
 else{
end=mid-1;
 }
 mid=s+(e-s)/2;

}
return -1;

}

int roatepiovt()
int main(){



return 0;
}*/
