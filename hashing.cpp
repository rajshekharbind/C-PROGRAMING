/*#include<bits/stdc++.h>
using namespace std;
int main(){
int p,r,t;
cin>>p>>r>>t;
int si=(p*r*t)/100;
cout<<si;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;\
cin>>a>>b>>c;
int avg=(a+b+c)/3;
cout<<avg;
        return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
cout<<"enter the number";
if(n%2==0){
    cout<<"number is even";
}
else{
    cout<<"number is odd";
}
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n>0){
    cout<<"positive";
}
else if(n<0){
    cout<<"negative";
}
else{
    cout<<"number is zero";
}
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
cout<<"enter the number";
int sum=0;
for(int i=0;i<=n;i++){
    sum=sum+i;
}
cout<<n<<sum;

return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=2;i<n;i++)
    if(n%i==0){
        cout<<"not prime";
        break;
    }
    else{
 cout<<" is prime";
        break;
    }

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if((a+b)>c&&(b+c)>a&& (c+a)>b){
cout<<"property of triangle";
}
else {
    cout<<"not property of triangle";
}
return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
cout<<"enter the number=";
int product=1;
for(int i=1;i<=n;i++){
    product=product*i;
}
cout<<n<<product;

return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=10;i++){
    cout<<2*i<<endl;
}
    return 0;
}*/
//volume of sphere
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int r;
float pi=3.14;
cin>>r;
float v=4/3*pi*r*r*r;
float a=4*pi*r*r;
cout<<a<<endl;
cout<<v;
    return 0;
}*/
//volume of cylinder
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int r,h;
cin>>r>>h;
float pi=3.14;
float a=2*pi*r*h;
float v=pi*r*r*h;
cout<<a<<endl<<v;
return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
/*int a=123;
cout<<a<<endl;
char b='d';
cout<<b<<endl;
bool bl=false;
cout<<bl<<endl;
float f=4.98;
cout<<f<<endl;
double d=1.23;
cout<<d<<endl;
int a='a';
cout<<a<<endl;
char ch=98;
cout<<ch<<endl;
return 0;
}*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int y,h,w;
// cin>>y>>h>>w;
// if(y<=34 && h<=6 && w<=60){
// cout<<"man is fitness";
// }
// else {
//     cout<<"man is not fitness";
// }
// return 0;
// }

//fibonacci series
//  #include<bits/stdc++.h>
//  using namespace std;
//  int f(int n){
//     int a=0,b=1; int c;
//     if(n>=1) cout<<a<<" ";
//     if(n>=2) cout<<b<<" ";
//     for(int i=3;i<=n;i++){
//         c=a+b;
//         cout<<c<<endl;
//         a=b;
//         b=c;
       
//     }
//     cout<<endl;
//  }
//  int main(){
//     int n=8;
//   cout<<f(8)<<endl;
//     return 0;
//  }

//hashing problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[a[i]] +=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
//     return 0;
// }
//only contain lower case hashing problem
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string s;
//   cin>>s;
//   int hash[25]={0};
//   for(int i=0;i<s.size();i++){
//      hash[s[i]-'a']++;
//   }
//   int q;
//   cin>>q;
//   while(q--){
//     char c;
//     cin>>c;
//     cout<<hash[c-'a']<<endl;
//   }
//   return 0;
// }

//find hashing if both upper and lower case
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;

//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         cout<<hash[c]<<endl;
//     }
//     return 0;
// }

//hashing using map
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //map<int,int>mpp;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mp[number]<<endl;
    }
    return 0;
}