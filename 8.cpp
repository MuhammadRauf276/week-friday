#include <iostream>
using namespace std;

main(){
float salevegetable;
float salefruit;
float pvegetable;
float pfruit;
float rup = 1.94;
float tvegetable;
float tfruit;
float intotal;
float fintotal;
cout<< "Enter your  price of vegetables per KG  ";
cin>>pvegetable;
cout<< "Enter your  price of fruit per KG ";
cin>>pfruit;
cout<< "Total sales vegetables per kg ";
cin>>salevegetable;
cout<< "Total sales fruits per kg  ";
cin>>salefruit;
tvegetable = pvegetable*salevegetable;
tfruit = pfruit*salefruit;
intotal = tfruit+tvegetable;
fintotal = intotal*rup;
cout<<"Your total earning of harvest in rupees is  : "<<fintotal<<"Rupees";
}




