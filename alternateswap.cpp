/*#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
cout<<a[i]<<" ";
    }
    cout<<endl;
}
void alternateswap(int a[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
int even[6]={4,7,9,6,0,5};
int odd[7]={5,9,0,6,3,2,1};
alternateswap(even,6);
print(even,6);
cout<<endl;
alternateswap(odd,7);
print(odd,7);
return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

int fun(int a[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ a[i];
    }
    return ans;
}

int main() {
    int a[9] = {3, 6, 3, 1, 6, 5, 5, 3, 1};
    int result = fun(a, 9);
    cout << "answer = " << result << endl;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
ans=ans^a[i];
    }
    for(int i=1;i<=size;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
int a[7]={4,7,9,6,3,2,4};
int result=fun(a,7);
cout<<"answer= "<<result<<endl;
return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int fun(int a[], int size) {
    int ans = 0;
    
    // XOR all the elements in the array
    for(int i = 0; i < size; i++) {
        ans = ans ^ a[i];
    }
    for(int i = 1; i < size; i++) {
        ans = ans ^ i;
    }
    
    return ans;
}

int main() {
    int a[7] = {4, 7, 9, 6, 3, 2, 4};  
    int result = fun(a, 7);
    cout << "answer= " << result << endl;
    return 0;
}*/


