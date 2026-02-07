#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a, b, c,r1, r2;
    cout<<"Enter the value of a b c : ";
    cin>>a>>b>>c;
    if(d>0){
        r1 = (-b + sqrt((b*b-4*a*c)))/(2*a); 
        r2 = (-b - sqrt((b*b-4*a*c)))/(2*a); 
        cout<<"Roots are real and distinct!";
        cout<<"R1: "<<r1<<endl;
        cout<<"R2: "<<r2<<endl;
    }
    else if(d==0){
        root1 = -b/(2*a);
        cout<<"Roots are real & equal!";
        cout<<"R1: "<<r1<<endl;
    }
    else{
        cout<<"Roots are imaginary!!";
    }

    return 0;
}
