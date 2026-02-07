#include<iostream>

using namespace std;

int main(){
    int arr[5], max, sec_max;

    for(int i=0;i<5;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    max = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Largest number is "<<max<<endl;
    sec_max = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]<max && arr[i]>sec_max){
            sec_max = arr[i];
        }
    }
    cout<<"Second largest number is "<<sec_max;
    return 0;
}
