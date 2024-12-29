//concept of dot product

/*#include<iostream>
using namespace std;
typedef float ftype;

struct point2d{
  ftype x,y;
};
struct point3d{
    ftype x,y,z;
};
ftype dot(point2d a,point2d b){
    return (a.x*b.x)+(a.y*b.y);
}
ftype dot(point3d a,point3d b){
    return (a.x*b.x)+(a.y*b.y)+(a.z*b.z);
}
int main(){
    point2d p1={2.0,5.0};
    point2d p2={6.0,8.0};

    point3d p3={5.0,9.0,6.0};
    point3d p4={9.0,2.0,4.0};

    cout<<"2d dot product "<<dot(p1,p2)<<endl;
    cout<<"3d dot product "<<dot(p3,p4)<<endl;
     return 0;
}*/

//concept of dot product ,normal,projection,angle
/*#include<bits/stdc++.h>
#include<cmath>
using namespace std;
typedef float ftype;

struct point2d{
    ftype x,y;
};
ftype dot(point2d a,point2d b){
    return (a.x*b.x)+(a.y*b.y);
}
ftype norm(point2d a){
    return dot(a,a);
}
double abs(point2d a){
 return sqrt(norm(a));
}
double proj(point2d a,point2d b){
    return dot(a,b)/abs(b);
}
double angle(point2d a,point2d b){
    return acos(dot(a,b)/abs(a)*abs(b));
}
int main(){
     point2d p1={3.0,4.0};
    point2d p2={2.0,1.0};
    cout<<"dot product "<<dot(p1,p2)<<endl;
    cout<<"norm given vector "<<norm(p1)<<endl;
    cout<<"magnitude of give vector "<<abs(p1)<<endl;
    cout<<" projection of given two vector "<<proj(p1,p2)<<endl;
    cout<<"Angle of given two vector "<<angle(p1,p2)<<endl;
    return 0;

}*/

//concept of cross product
// #include<bits/stdc++.h>
// #include<cmath>
// using namespace std;
// typedef float ftype;

// struct point2d{
//     ftype x,y;
// };
// struct point3d{
//     ftype x,y,z;
// };
// point3d cross(point3d a,point3d b){
//     return point3d{
//       a.x*b.y-a.y*b.x,
//       a.y*-b.z-a.z*b.y,
//       a.z*b.x-a.x*b.z
//     };
// }
// ftype dot(point3d a,point3d b){
//     return a.x*b.x+a.y*b.y+a.z*b.z;
// }
// ftype triple(point3d a,point3d b,point3d c){
//     return dot(a,cross(b,c));
// }
// ftype dot(point2d a,point2d b){
//     return a.x*b.y-a.y*b.x;
// }

// int main() {
    
//     point3d p1 = {1.0, 2.0, 3.0};  
//     point3d p2 = {4.0, 5.0, 6.0};  

//     point3d result3d = cross(p1, p2); 
//     std::cout << "Cross product (3D): (" << result3d.x << ", " << result3d.y << ", " << result3d.z << ")\n";
//     point3d p3 = {7.0, 8.0, 9.0}; 
//     ftype tripleResult = triple(p1, p2, p3); 
//     std::cout << "Scalar triple product: " << tripleResult << "\n";
//     point2d q1 = {3.0, 4.0};  // Vector (3, 4)
//     point2d q2 = {2.0, 1.0};  // Vector (2, 1)

//     // ftype cross2d = cross(q1, q2);  // Cross product of q1 and q2
//     // std::cout << "Cross product (2D): " << cross2d << "\n";  // Result is a scalar

//     return 0;
// }

//concept of binary exponentation
// #include<bits/stdc++.h>
// using namespace std;
// long long binpow(long long a,long long b){
//     if(b==0){
//         return 1;
//     }
//     long long res=binpow(a,b/2);
//     if(b%2==0){
//         return res*res;
//     }
//     else{
//         return res*res*a;
//     }
// }
// int main(){
//     long long a=5;
//     long long b=4;
//     cout<<a<<"^"<<b<<"="<< binpow(a,b)<<endl;
//     return 0;
// }

//
#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a,long long b,long long m){
    long long res=1;
    while(b>0){
        if(b&1)
        res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}
int main(){
    long long a=2;
    long long b=4;
    long long m=1000;
    cout<<"Result "<<binpow(a,b,m)<<endl;
}