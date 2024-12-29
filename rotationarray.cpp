/*#include<bits/stdc++.h>
using namespace std;

int rightRotate(vector<int>&arr,int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+3);
    reverse(arr.begin()+3,arr.end());
}
void print(vector<int>&arr){
    for(int i: arr){
        cout<<i<<" ";
    }
}
int main(){
    vector<int>arr={1,2,3,4,5,6,8};
    int k=3;
    cout<<"Original array "<<endl;
    print(arr);
    cout<<endl;
    cout<<"after rotate "<<endl;
    rightRotate(arr,k);
    print(arr);
    return 0;
}*/

//left rotated
/*#include<bits/stdc++.h>
using namespace std;

int leftRotate(vector<int>&arr,int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(),arr.begin()+2);
    reverse(arr.begin()+2,arr.end());
    reverse(arr.begin(),arr.end());
}
void print(vector<int>&arr){
    for(int i: arr){
        cout<<i<<" ";
    }
}
int main(){
    vector<int>arr={1,2,3,4,5,6,8};
    int k=2;
    cout<<"Original array "<<endl;
    print(arr);
    cout<<endl;
    cout<<"after rotate "<<endl;
    leftRotate(arr,k);
    print(arr);
    return 0;
}*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//      cout<<"enter strint "<<endl;
//     cin>>str;
//        cout<<"your string is"<<str<<endl;
//     return 0;
// }
//#include <iostream>
// using namespace std;

// int main() {
//     char arr[100];
 
//     cout << "Enter a string: ";
//     cin.getline(arr, 100); // Read up to 100 characters, including spaces

//     // Display the input
//     cout << "You entered: " << arr << endl;

//     return 0;
// }
//reverse

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int reverse=0,n;
//     int last;
//     cin>>n;
//     while(n!=0){
//         last=n%10;
//         reverse=reverse*10+last;
//         n=n/10;
//     }
//     cout<<reverse<<endl;
//     return 0;

// }
//converted lower to upper case
#include <iostream>
using namespace std;

int main() {
    
    char ch;
    cout << "Enter a lowercase character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch -'A' +'a';
    }
    cout << "Uppercase character: " << ch << endl;

    return 0;
}
