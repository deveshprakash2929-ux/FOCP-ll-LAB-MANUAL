
#include<iostream>
using namespace std;
int main(){
    int arr[5], count=0;
    for(int i=0;i<5;i++){
        cout<<"Enter no.:"<<":"<<i+1;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            count++;
        }
    }
    cout<<"Numbers are divisible by both 3 and 5 are "<<count;
    return 0;
}
