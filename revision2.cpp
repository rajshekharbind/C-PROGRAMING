#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={6,9,5,4,4};
sort(begin(arr),end(arr));
for(int i:arr){
    cout<<i<<endl;
}
return 0;
}