#include<bits/stdc++.h>
using namespace std;

int firstOccurence(const vector<int> & arr,int target){
    int s=0; int n = arr.size(); int result=-1;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            result= mid;
            e=mid-1;
        }
        else if(mid<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}

int lastOccurence(const vector<int> & arr,int target){
    int s=0; int n =arr.size(); int result=-1;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            result= mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return result;
}

int totalOccurence(const vector<int> & arr,int target){
    int first= firstOccurence( arr,target);
        if(first==-1){
            return 0;
    }
    int last= lastOccurence( arr, target);
    return last-first+1;

}
int main(){
    vector <int>arr={1,1,2,2,2,4,7,8};
    int target=2;

    int first= firstOccurence( arr,target);
    int last= lastOccurence( arr, target);
    int totalOcc= totalOccurence(arr,target);

    if(first!=-1){
        cout<< target<<" "<<first<<endl;
          cout<< target<<" "<<last<<endl;
            cout<< target<<" "<<totalOcc<<endl;
    }
    else {
        cout << target << " not found in the array." << endl;
    }
    return 0;

}

