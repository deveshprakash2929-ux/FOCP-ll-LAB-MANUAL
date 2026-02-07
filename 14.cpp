#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    char choice;

    cout<<"CHOOSE ONE: "<<endl<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Divide \n";
    cin>>choice;
    cout<<"Enter two no.: ";
    cin>>num1>>num2;


    switch (choice){

        case 1 : cout<<num1 + num2;
        break;
        case 2 : cout<<num1 - num2;
        break;
        case 3 : cout<<num1*num2;
        break;
        case 4 : cout<<num1/num2;
        break;
        default : cout<<"Invalid choice";
    }
    return 0;
}
