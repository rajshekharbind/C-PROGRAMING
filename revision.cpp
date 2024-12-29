/*#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5>a={2,7,9,6,1};
int size=a.size();
cout<<a.size()<<endl;
cout<<a.empty()<<endl;
cout<<a.front()<<endl;
cout<<a.back()<<endl;
cout<<"all element"<<endl;
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
cout<<a.at(3)<<endl;
return 0;
}*/
/*#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
vector<int>v;
cout<<"capacity="<<v.capacity()<<endl;
v.push_back(5);
cout<<"capacity="<<v.capacity()<<endl;
v.push_back(7);
cout<<"capacity="<<v.capacity()<<endl;
v.push_back(9);
cout<<"capacity="<<v.capacity()<<endl;
cout<<"size "<<v.size()<<endl;
cout<<"front "<<v.front()<<endl;
cout<<"back "<<v.back()<<endl;
cout<<"before pop "<<endl;
for(int i:v){
    cout<<i <<" ";

}
cout<<endl;
v.pop_back();
v.pop_back();
cout<<"after pop"<<endl;
for(int i:v){
cout<<i<<endl;
}
return 0;
}*/
/*#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
set<int ,greater<int>>a;
a.insert(6);
a.insert(56);
a.insert(61);
a.insert(67);
a.insert(8);
for(auto i:a){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}*/
/*#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
set<char>a;
a.insert('A');
a.insert('G');
a.insert('Y');
a.insert('H');
a.insert('F');
for(auto i:a){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}*/
/*#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main(){

set<int,greater<int>>s1;
s1.insert(8);
s1.insert(7);
s1.insert(6);
s1.insert(10);
s1.insert(5);

s1.insert(8);
s1.insert(1);
/*for(auto i:s1){
    cout<<i<<" "<<endl;
}
//printing set s1
set<int ,greater<int>> ::iterator itr;
cout<<"print the set s1"<<endl;
for(itr=s1.begin();itr!=s1.end();itr++){
    cout<<*itr<<endl;
}
cout<<endl;
set<int>s2(s1.begin(),s1.end());
cout<<"set s2 element is"<<endl;
for(itr=s2.begin();itr!=s2.end();itr++){
cout<<*itr<<" "<<endl;
}
cout<<endl;
int num;
num=s2.erase(6);
cout<<"erase ="<<endl;
cout<<num<<endl;
for(itr=s2.begin();itr!=s2.end();itr++){
    cout<<*itr<<endl;
}
cout<<endl;
cout<<"Lower bond"<<*s1.lower_bound(5)<<endl;
cout<<"uper bond"<<*s1.upper_bound(8)<<endl;
cout<<"Lower bond"<<*s2.lower_bound(1)<<endl;
cout<<"uper bond"<<*s2.upper_bound(10)<<endl;
return 0;
}*/
/*#include<iostream>
#include<set>
using namespace std;
int main(){
set <int> myset{4,7,8,9};
for(auto it=myset.begin();it!=myset.end();it++){
    cout<<' '<<*it<<endl;
}
return 0;
}*/
/*#include<iostream>
#include<set>
using namespace std;
int main(){
set <char> myset{'t','p','h','g'};
for(auto it=myset.begin();it!=myset.end();it++){
    cout<<' '<<*it<<endl;
}
return 0;
}*/
/*#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
set <string> myset{"name","isuuu","raj"};
for(auto it=myset.begin();it!=myset.end();it++){
    cout<<' '<<*it<<endl;
}
return 0;
}*/


