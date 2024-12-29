// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x=8;
//     int y=10;

// int leftshift1=x<<1;
// int leftshift2=x<<2;

// int rightshift=x>>1;
// int rightshift2=x>>2;
// cout<<"original value: "<<x<<endl;
// cout<<" leftshift1 "<<leftshift1<<" binary "<<bitset<8>(leftshift1)<<endl;
// cout<<"leftshift2 :"<<leftshift2<<" bbinary number: "<<bitset<4>(leftshift2)<<endl;

// cout<<" rightshift "<<rightshift<<" binary "<<bitset<8>(rightshift)<<endl;
// cout<<"rightshift2 :"<<rightshift2<<" bbinary number: "<<bitset<4>(rightshift2)<<endl;

// int andResult= x&y;
// cout<<" and result "<<andResult <<" binary "<<bitset<8>(andResult)<<endl;

// int orResult= x|y;
// cout<<" or result "<<orResult <<" binary "<<bitset<8>(orResult)<<endl;


// int notResult= ~x;
// cout<<" not result "<<notResult <<" binary "<<bitset<8>(notResult)<<endl;


// int xorResult= (x^y);
// cout<<" xor result "<<xorResult <<" binary "<<bitset<8>(xorResult)<<endl;
// //swap
// x=x^y;
// y=x^y;
// x=x^y;
// cout<<x<<" "<<y<<endl;

// //odd
// if(x&0){
//     cout<<"odd"<<endl;
// }
// else{
//     cout<<"even"<<endl;
// }

// x=x&(x-1);
// cout<<x<<endl;

// //clear ith bit
// x = x ^ (y << 1);

// cout<<"bit manipulation  "<<x <<" "<<bitset<8>(x)<<endl;
// return 0;
// }

//decimal to binary
#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int binary){
    int decimal=0;
    int base=1;
    while(binary>0){
        int last_bit=binary&1;
        decimal  += last_bit*base;
       base <<=1;
       binary >>=1;
    }
    return decimal;
}
int main(){
    int binaryNumber;
     cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimal1 = binaryToDecimal(binaryNumber);
    cout << "The decimal equivalent is: " << decimal1 << endl;

    return 0;
}
