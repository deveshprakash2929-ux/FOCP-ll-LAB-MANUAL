// // #include<iostream>
// // using namespace std;
// // class Student{
// // int rollNo;string name;int marks1;int marks2;int marks3;
// // int calculatedTotal()
// // {return(marks1+marks2+marks3);
// // }
// // public:
// // void inputDetails()
// // {
// //     cout<<"\n enter rollno,name,marks1,marks2,marks3";
// //     cin>>rollNo>>name>>marks1>>marks2>>marks3;
// // }

// // int calculateTotal()
// // {return calculatedTotal();}
// // void displayDetails(){
// // cout<<"\n name: "<<name<<"roll no.:"<<rollNo;
// // cout<<"\n marks1: "<<marks1<<"marks2: "<<marks2<<"marks3: "<<marks3;
// // cout<<"\n total marks: "<<calculateTotal();}
// // };

// // int main(){
// // Student s1; //s1 is obj/instnace of the class students
// // s1.inputDetails();
// // s1.displayDetails();
// // return 0;
// // }

// #include<iostream>
// using namespace std;
// class rectangle{
// float length;float width;
// int area()
//     {return(length*width);}
// int perimeter()
//     {return(2*(length+width));}
// public:
// void inputDimensions(){
//     cout<<"\n enter length and width of rectangle";
//     cin>>length>>width;}
// void displayDetails(){
// cout<<"\n length: "<<length<<" "<<width<<width;
// cout<<"\n area: "<<area()<<" "<<"perimeter: "<<perimeter();
// }

// };
// int main(){
// rectangle area ;
// rectangle perimeter ; //s1 is obj/instnace of the class students
// area.inputDimensions();
// area.displayDetails();
// perimeter.inputDimensions();
// perimeter.displayDetails();
// return 0;
// }

// #include <iostream>
// using namespace std;
// class BankAccount
// {
//     string accountHolderName;
//     int accountNumber;
//     double balance;

// public:
//     void inputDetails();
//     void displayDetails();
//     void deposit(double amount);
//     void withdraw(double amount);
// };
// void BankAccount::inputDetails()
// {
//     cout << "\naccount number ";
//     cin >> accountNumber;
//     cout << "\n enter account holder name";
//     cin.ignore();                   
//     getline(cin, accountHolderName); // Read the account holder name with spaces
//     cout << "\n balance ";
//     cin >> balance;
// }

// void BankAccount::deposit(double amount)
// {
//     balance += amount;
//     cout << "\n amount deposited successfully. New balance: " << balance;
// }
// void BankAccount::withdraw(double amount)
// {
//     if (amount > balance)
//     {
//         cout << "\n insufficient balance";
//     }
//     else
//     {
//         balance -= amount;
//         cout << "\n amount withdrawn successfully. New balance: " << balance;
//     }
// }
// void BankAccount::displayDetails()
// {
//     cout << "\n account holder name: " <<" "<< accountHolderName << " account number: " << accountNumber;
//     cout << "\n balance: " << balance;
// }
// int main()
// {
//     BankAccount account; // s1 is obj/instnace of the class students
//     account.inputDetails();
//     account.displayDetails();
//     cout << "\n D or W";
//     char choice;
//     cin >> choice;
//     if(choice=='D' )
//     {
//         double depositAmount;
//         cout << "\n enter amount to deposit";
//         cin >> depositAmount;
//         account.deposit(depositAmount);
//     }
//     else if(choice=='W')
//     {
//         double withdrawAmount;
//         cout << "\n enter amount to withdraw";
//         cin >> withdrawAmount;
//         account.withdraw(withdrawAmount);
//     }
//     account.displayDetails();
//     return 0;
// }






#include <iostream>
using namespace std;
class candy{
    string colour;
    int points;
    public:
    candy();
    candy(string);
    candy(int);
    void setcandy(string,int);
    void displayCandy();
    void loosecandy();
    void loosecandy(int);
    void gaincandy();
    void gaincandy(int);
};
candy::candy()
{
    colour="black";
    points=0;
}
candy::candy(string clr) 
{
    colour=clr;
    points=0;
}
candy::candy(int p) 
{
    colour="pink";
    points=p;
}
void candy::setcandy(string c,int p){
    colour=c;
    points=p;
}
void candy::displayCandy(){
    cout<<"\n colour: "<<colour<<"\n points: "<<points;
}
void candy::loosecandy(int p)
{
    points-=p;
    cout<<"\n you lost "<<p<<" points";
}
void candy::gaincandy(int p)
{
    points+=p;
    cout<<"\n you gained "<<p<<" points";
}
int main(){
    candy c1, c2;   
    c1.setcandy("red",35);
    c2.setcandy("blue",40);
    c1.displayCandy();
    c2.displayCandy();
    c1.loosecandy(10);
    c1.displayCandy();
    c2.gaincandy(20);
    c2.displayCandy();
    return 0;
}
