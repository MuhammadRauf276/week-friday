#include <iostream>
using namespace std;

main(){
float useryear;
float usermonth;
float userday;
float currentyear;
float currentmonth;
float currentday;
cout<< "Enter user date of birth month date";
cin>>usermonth;
cout<< "Enter your date of birth year ";
cin>>useryear;
cout<< "Enter your current month ";
cin>>currentmonth;
cout<< "Enter your Current Year ";
cin>>currentyear;
float totalageyear;
totalageyear = currentyear-useryear;
float calusermonth;
calusermonth = 12-usermonth;
float calcurrentmonth;
calcurrentmonth = 12-currentmonth;
float totalagemonth;
totalagemonth = (calcurrentmonth) + (calusermonth);
cout<<"Your current age is "<<totalageyear<<" Years "<<totalagemonth<<" months";
}



