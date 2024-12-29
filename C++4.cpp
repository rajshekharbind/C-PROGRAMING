
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
    cout<<"this is a intger number"<<endl;
char z;
cin >>z;
for(char i = 'a'; i<= 'z';i++){
    cout<<"this smaal latter"<<i<<endl;
    break;
}
char Z;
cin>>Z;

for(char i ='A';i<= 'Z';i++){
    cout<<"this captal latter"<<i<<endl;
 break;
}

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int  i = 1; i<=10; i++)
{
cout<<3*i<<endl;
}
return 0;
}*/
//perform the calculater
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
char op;
cout<<"enter the operation we want to perform"<<endl;
cin>>op;
switch(op){
case '+':
cout<<(a+b)<<endl;
break;
case '-':
cout<<(a-b)<<endl;
break;
case '*':
cout<<(a*b)<<endl;
break;
case '/':
cout<<(a/b)<<endl;
break;
default:
cout<<"enter the correct operation to perform"<<endl;
}
return 0;
}*/
//power
#include<bits/stdc++.h>
using namespace std;
int power(){
int a,b;
cin>>a>>b;
int ans=1;
for(int i=1;i<=b;i++){
    ans=ans*a;
}
return ans;
}
int main(){
cout<<"is answer:"<<power()<<endl;
return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
int factorial=1;
for(int i=1;i<=n;i++){
    factorial=factorial*i;
}
return factorial;
}
int nCr(int n,int r){
    int num=factorial(n);
int denom=factorial(r)*factorial(n-r);
return num/denom;
}
int main(){
int n,r;
cin>>n>>r;
cout<<"the answer is="<<nCr(n,r)<<endl;
return 0;
}*/