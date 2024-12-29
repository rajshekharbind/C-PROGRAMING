/*#include<bits/stdc++.h>
using namespace std;
int getMax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
int num[100];
for(int i=0;i<size;i++){
cin>>num[i];
}
cout<<"the max value is"<<getMax(num,size)<<endl;
cout<<"the min value is"<<getMin(num,size)<<endl;
return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int sum=0;  
int a[100];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
    sum=sum+a[i];
}
cout<<"the total sum of the array="<<sum<<endl;

return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int pro=1;  
int a[100];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
    pro=pro*a[i];
}
cout<<"the total pro of the array="<<pro<<endl;

return 0;
};*/
/*#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){

int start=0;
int end=n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}

cout<<endl;

}
int print( int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
int arr[6]={6,9,12,45,7,8};
reverse(arr,6);
print(arr,6);
return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
bool search(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==a[i]){
            return 1;
        }
     
    }
    return 0;
}
int main(){
    int arr[5]={7,9,0,4,3};
int key;
cin>>key;
bool found=search(arr,5,key);
if(found){
    cout<<"keys present"<<endl;
}
else{
cout<<"keys not present"<<endl;
}


}