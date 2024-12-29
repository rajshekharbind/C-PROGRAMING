//peak element
// #include<bits/stdc++.h>
// using namespace std;
// int pick(int a[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         int mid=s+(e-s)/2;
//         if(a[mid]<a[mid+1]){
//             s=mid+1;
//         }
//         // else if(a[mid]>a[mid+1]){//if find the peak element left half side the use this concept
//         //     e=mid-1;
//         // }
//         else
//             e=mid;

//     }
//     return s;
// }
// int main(){
//     int a[]={1,2,3,2,1};
//   int n=sizeof(a)/sizeof(a[0]);
//   int peakindex= pick(a,n);
//   cout<<"index of peack element "<<peakindex<<endl;
//   cout<<"element "<<a[peakindex]<<endl;

// }

//pivot element

// #include<bits/stdc++.h>
// using namespace std;

// int pivot(int a[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         int mid=s+(e-s)/2;
//         if(a[mid]>a[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//     }
//     return s;
// }
// int main(){
//     int a[]={3,8,10,17,1};
//     int n=sizeof(a)/sizeof(a[0]);
//     int pioteindex=pivot(a,n);
//     cout<<"index of pivot "<<pioteindex<<endl;
//     cout<<"value of this pivot element "<<a[pioteindex]<<endl;

//     return 0;
// }

//max and min element in a given array
// #include<bits/stdc++.h>
// using namespace std;
// int maxmin(int a[],int n,int &max, int &min){
//     max=INT_MIN;
//     min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//         if(a[i]<min){
//             min=a[i];
//         }}}
// int main(){
//     int a[]={1,7,6,5,4,9};
//     int n= sizeof(a)/sizeof(a[0]);
//     int max,min;
//     maxmin(a,n,max,min);
//     cout<<"maximum element in the array "<<max<<endl;
//     cout<<"minimum element of the array "<<min<<endl;
//     return 0;
// }

//reverse the array

// #include<bits/stdc++.h>
// using namespace std;

// int reverseArray(int a[],int n){
//     int s=0;int e=n-1;
//     while(s<e){
//         swap(a[s],a[e]);
//         s++;e--;
//     }
// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int a[]={3,4,8,9,6,5};
//     int n=sizeof(a)/sizeof(a[0]);
//     cout<<"Original array "<<endl;
//     print(a,n);
//     reverseArray(a,n);
//     cout<<"reverse array "<<endl;
//     print(a,n);
//     cout<<"sorted array "<<endl;
//     sort(a,a+n);
//     print(a,n);
//     //sorted in decreasing order
//     cout<<"sorted in decresing order "<<endl;
//     sort(a, a + n, greater<int>());
//     print(a,n);
// }



//unique and dupplicate element of the array


// #include<bits/stdc++.h>
// using namespace std;
// int duplicateandunique(int a[],int n){
//     unordered_map<int,int>freqMap;
//     for(int i=0;i<n;i++){
//         freqMap[a[i]]++;
//     }
//     cout<<"dupplicate "<<endl;
//     for(auto &it: freqMap){
//         if(it.second>1){
//             cout<<it.first<<" ";
//         }
//     }
//     //cout<<(freqMap.size()==n ? "None":"")<<endl;
//        cout<<endl;
//     cout<<"unique number: "<<endl;
//      for(auto &it: freqMap){
//         if(it.second==1){
//             cout<<it.first<<" ";
//         }
//     }
//     cout<<endl;

// }
// int main(){
// int a[]={1,2,4,5,6,7,8,2,3,2,2,2};
// int n=sizeof(a)/sizeof(a[0]);

// duplicateandunique(a,n);
// return 0;

// }

#include<bits/stdc++.h>
using namespace std;
double Squart(int n,int precision=2){
    if(n==0 | n==1){
        return n;
    }
    int s=0;int e=n;
    double ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
   double increment=0.1;
   for(int i=0;i<precision;i++){
    while(ans*ans<=n){
        ans +=increment;

    }
    ans -=increment;
    increment /=10;
   }
   return ans;
}
int main(){
int Number;
cout<<"Enter the number "<<endl;
cin>>Number;
double SquartValue=Squart(Number,2);
//cout<<"square root of the given number "<<Number<< " is :"<<SquartValue<<endl;
 cout << "Square root of " << Number << " is approximately: " << fixed << setprecision(2) << SquartValue << endl;

    return 0;
}