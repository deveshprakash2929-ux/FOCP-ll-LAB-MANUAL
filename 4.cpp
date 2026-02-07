#include <iostream>
using namespace std;
int main(){
int item_no,qty,price,amount,discount,final_price;
cin>>item_no>>qty>>price;
amount=qty*price;
discount=amount*0.2;
final_price=amount-discount;
cout<<"the discounted price for purchase is: "<<final_price;
return 0;
}
