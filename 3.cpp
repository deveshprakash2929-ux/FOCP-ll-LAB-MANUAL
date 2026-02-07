#include <iostream>
using namespace std;
int main(){
int choice;
float c,f;
cout<<"choose conversion"<<endl;
cout<<"1.C to F"<<endl<<"2.F to C";
cin>>choice;
switch(choice){
    case 1:  
        cout << "Enter farhenheit: ";
            cin >> f;
        c=(f-32)*5/9;
        cout<<"c="<<c;
        break;

    case 2:
        cout << "Enter Celsius: ";
            cin >> c;
        f=(c*9/5)+32;  

        cout<<"f="<<f;
        break;
    default:
        cout<<"invalid choice";    
}
return 0;
}
