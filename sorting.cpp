
///selection sorted..........................
// #include<bits/stdc++.h>
// using namespace std;
// void selection(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[minindex]){
//                   minindex=j;
//             }
         
//         }
//         swap(a[minindex],a[i]);
//     }
// }
// void print(int a[],int n){
// for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;
// }
// int main(){
// int a[]={7,9,7,0,5,4,4,2};
// int n=sizeof(a)/sizeof(a[0]);
// print(a,n);
// selection(a,n);
// print(a,n);
// return 0;
// }


//insertion sorted........................
// #include<bits/stdc++.h>
// using namespace std;

// void insertion(int a[],int n){
//     for(int i=1;i<n;i++){
//         int key=a[i];
//         int j=i-1;
//         while(j>=0 & a[j]>=key){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=key;
//     }
// }
// void print(int a[],int n){
// for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;
// }
// int main(){
//     int a[]={7,9,7,0,5,4,4,2};
// int n=sizeof(a)/sizeof(a[0]);
// print(a,n);
// insertion(a,n);
// print(a,n);
// return 0;
// }

//bubble sorted...........................
// #include<bits/stdc++.h>
// using namespace std;
// void Bubblesort(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }
//     }

// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int a[]={5,9,6,3,2,1};
//     int n=sizeof(a)/sizeof(a[0]);
//     cout<<"original array "<<endl;
//     print(a,n);
//     Bubblesort(a,n);
//     cout<<"after sorted the array "<<endl;
//     print(a,n);
//     return 0;
// }


//count sorted---->t.c=O(n+k),s.c=O(k+n).............................
// #include<bits/stdc++.h>
// using namespace std;
// void CountingSort(int a[],int n){
//     int max_value=*max_element(a,a+n);
//     vector<int>count(max_value+1,0);

//     for(int i=0;i<n;i++){
// count[a[i]]++;
//     }
//     int index=0;
//     for(int i=0;i<max_value;i++){
//         while(count[i]>0){
//             a[index++]=i;
//             count[i]--;
//         }
//     }
// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
//     int a[]={3,9,5,4,4,3,8};
//     int n=sizeof(a)/sizeof(a[0]);
//     cout<<"original array "<<endl;
//     print(a,n);
//     cout<<"after sorted by counting method "<<endl;
//     CountingSort(a,n);
//     print(a,n);
//     return 0;
// }

// merge sorted..............................................

// #include<bits/stdc++.h>
// using namespace std;
// void merge(int a[],int L,int R,int mid){
//     int n1=mid-L+1;
//     int n2=R-mid;

//     int Leftarray[n1];
//     int Rightarray[n2];

//     for(int i=0;i<n1;i++){
//         Leftarray[i]=a[L+i];
    
//     }

//      for(int i=0;i<n2;i++){
//         Rightarray[i]=a[mid+i+1];

//     }
//     int i=0;
//     int j=0;
//     int k=L;
//     while(i<n1 && j<n2){
//         if(Leftarray[i]<= Rightarray[j]){
//             a[k]=Leftarray[i];
//             i++;
//         }
//         else{
//             a[k]=Rightarray[j];
//             j++;
//         }
//         k++;
//     }

//     while(i<n1){
//         a[k]=Leftarray[i];
//         i++;
//         k++;
//     }

//     while(j<n2){
//         a[k]=Rightarray[j];
//         j++;
//         k++;
//     }
// }
// void mergeSort(int a[],int L,int R){
//     if(L<R){
//        int mid=L+(R-L)/2;
//        mergeSort(a,L,mid);
//        mergeSort(a,mid+1,R);
//        merge(a,L,R,mid);
//     }
  
   
// }

// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
// int a[]={2,7,9,5,3,6,9,0,3};
// int n=sizeof(a)/sizeof(a[0]);

// cout<<"without sorted array "<<endl;
// print(a,n);

// mergeSort(a,0,n-1);

// cout<<" after sorted the array "<<endl;

// print(a,n);



// return 0;
// }





//Quick Sorteding ..................
#include<bits/stdc++.h>
using namespace std;
int quick(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void quickSort(int a[],int low,int high){
    if(low<high){
        int pi=quick(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);

    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   cout<<endl;
}

int main(){
int a[]={2,4,7,9,0,1,2,3,6};
    int n=sizeof(a)/sizeof(a[0]);
     
     cout<<" the array without sorted "<<endl;
     print(a,n);

     quickSort(a,0,n-1);

     cout<<"sorted array "<<endl;
     print(a,n);

return 0;
}

//Heap sorted

#include<bits/stdc++.h>
using namespace std;

void heapeafy(int a[],int n,int i){
    int largest=i;
    int left=2*i+1;
   int right= 2*i+2;
   if(left<n&& a[left]>a[largest]){
    largest=left;
   }
   if(right<n&& a[right]>a[largest]){
    largest=right;
   }
   if(largest !=i){
    swap(a[i],a[largest]);
    heapeafy(a,n,largest);
   }

}
void heapSort(int a[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapeafy(a,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapeafy(a,i,0);
    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[]={2,5,7,8,9,0,1};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"without sorted array "<<endl;
    print(a,n);
    heapSort(a,n);
    cout<<"sorted the array "<<endl;
    print(a,n);
    return 0;
}