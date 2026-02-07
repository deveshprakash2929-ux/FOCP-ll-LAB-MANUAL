#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Nott aPrime number!";
        }
        else{
            cout<<" Prime number!";
            
        }

    }

    return 0;
}
