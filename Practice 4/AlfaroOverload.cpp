#include<iostream>
using namespace std;

void GetAve(int a, int b, int c);
void GetAve(double a, double b, double c);


int main(){
    GetAve(20, 60, 100); cout << endl;
    GetAve(2.41, 3.333, 12.25);cout << endl;
    
    int x,y,z;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    cout<<"z = "; cin>>z;
    GetAve(x,y,z); cout << endl;
    
    float a,b,c;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    GetAve(a,b,c); cout << endl;
    
    double u,v,w;
    cout<<"u = "; cin>>u;
    cout<<"v = "; cin>>v;
    cout<<"w = "; cin>>w;
    GetAve(u,v,w); cout << endl;
}

void GetAve(int a, int b, int c){
    int ave = (a + b + c)/ 3;
    cout << "Average of " << a << ", " << b << ", and " << c << " is " << ave << endl;
}
void GetAve(double a, double b, double c){
    float ave = (a + b + c)/ 3;
    cout << "Average of " << a << ", " << b << ", and " << c << " is " << ave << endl;
}
