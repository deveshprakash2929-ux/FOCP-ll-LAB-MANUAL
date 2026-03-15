// #include<iostream>
// using namespace std;
// void welcome(void);
// void welcome(string);
// int main()
// {
// welcome();
// welcome("\nDEVESH");
// return 0;
// }
// void welcome()
// {
//     cout<<"\nwelcvome agent";

// }
// void welcome (string name)
// {
//     cout<<"\nwelcome"<<name;
// }

// #include<iostream>
// using namespace std;
// int sum(int,int);
// float sum(float,float);
// double sum(double, double);
// int main()
// {
// cout<<endl<<sum(100,20);
// cout<<endl<<sum(10.56f,20.89f);
// cout<<endl<<sum(10.458,20.897);
// return 0;
// }
// int sum(int n1,int n2){
//     cout<<"\nint method ";
//         return n1+n2;
// }
// float sum(float n1,float n2){
// cout<<"\nfloat method ";
//     return n1+n2;
// }
// double sum(double n1,double n2){
//     cout<<"\ndouble method ";
//         return n1+n2;

// }

// #include<iostream>
// using namespace std;
// int result(int,int,int=0,int=0,int=0);
// // int result(int,int,int,int);
// // int result(int,int);
// // int result(int,int,int);

// int main()
// {
//     cout<<"\nresult of 2 subjects"<<result(45,58);
//     cout<<"\nresult of 3 subjects"<<result(57,68,95);
//     cout<<"\nresult of 4 subjects"<<result(78,49,65,77);
//     cout<<"\nresult of 5 subjects"<<result(47,69,84,56,75);
// return 0;
// }

// int result(int s1,int s2,int s3,int s4,int s5){
//     return(s1+s2+s3+s4+s5);
// }
// // int result(int s1,int s2,int s3,int s4){
// //     return(s1+s2+s3+s4);
// // }int result(int s1,int s2,int s3,int s4,int s5){
// //     return(s1+s2+s3+s4);
// // }int result(int s1,int s2,int s3,int s4,int s5){
// //     return(s1+s2+s3+s4);
// // }

// #include<iostream>
// using namespace std;

// void welcome(string="agent",string="");
// int main(){
//     welcome();
//     welcome("desvh");
//     welcome("devesh","prksh");
// return 0;
// }

// void welcome(string fname, string lname);
// {cout<<"\nwelcome "<<fname<<lname;}

// using pointers
// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
//  int main(){
//     int a,b;
//     a=30,b=55;
//     swap(&a,&b);
//     cout<<"\na="<<a<<"\nb="<<b;
//  return 0;
//  }

// usiong reference variable

// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
//  int main(){
//     int a,b;
//     a=30,b=5085;
//     swap(a,b);
//     cout<<"\na="<<a<<"\nb="<<b;
//  return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={-1,0,1,2,3};

// int a=sizeof(arr)/sizeof(arr[0]);
// int i=0;
// // bool found=false;
// for(i=0;i<a;i++){
//     for(int j=i+1;j<a;j++){
//         if(arr[i]+arr[j]==2){
//             // found=true;
//             // break;
//             cout<<"\nfound";
//             return 0;
//         }

// }
// }

// cout<<"\nno";
// return 0;
// }
// // if(found==false){
// //     cout<<"\nno";
// // }
// // else{
// //     cout<<"\nfound";
// // }
// // return 0;
// // }

#include <iostream>
using namespace std;
void computePerformance(int markss[], int size, int &max, int &min, int &avg)
{
    int max = markss[0];
    int min = markss[0];
    int avg = markss[0];
    for (int i = 0; i < size; i++)
    {
        if (markss[i] > max)
        {
            max = markss[i];
        }
        if (min > markss[i])
        {
            min = markss[i];
        }
        avg += markss[i];
    }
    avg = avg / size;
    cout << "\nmax marks=" << max;
    cout << "\nmin marks=" << min;
    cout << "\naverage marks=" << avg;
}
int main()
{
    int marks[] = {56, 78, 67, 98, 76, 23, 90, 66, 89, 75};
    int max, min, avg;
    computePerformance(marks, sizeof(marks) / sizeof(marks[0]), max, min, avg);
    return 0;
}
