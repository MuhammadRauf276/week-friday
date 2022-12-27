#include <iostream>
using namespace std;

main(){
int int_1,save_2,save_3,save_4,sum;
cout<<"enter the  Four digit number   ";
cin>>int_1;
save_2= int_1%10;
int_1=int_1/10;
save_3=int_1%10;
int_1=int_1/10;
save_4=int_1%10;
int_1=int_1/10;
sum =int_1+save_2+save_3+save_4 ;
cout<<"sum of modulus is : "<<sum;

}
