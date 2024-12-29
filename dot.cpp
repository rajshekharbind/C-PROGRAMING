// #include<bits/stdc++.h>

// using namespace std;

// int main(){
// int n;
// cin>>n;
// string s=" ";
// char cur='a';
// for(int i=0;i<n;i++){
//     if(cur>'z'){
//         cur='a';
//         s.push_back(cur);
// cur++;
//     }
//    // cout<<s<<endl;
//     cout<<cur<<endl;
// }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
      vector<int>b(n);
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) cin>>b[i];

      sort(a.begin(),a.end());
      sort(b.begin(),b.end() ,greater<int>());
      int dot=0;
      for(int i=0;i<n;i++){
      dot +=(a[i]* b[i]);
      }
      cout<<dot<<endl;
}

int main(){

solve();

return 0;
}
