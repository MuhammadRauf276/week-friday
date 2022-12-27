#include <iostream>
using namespace std;

main(){
float invelocity;
float finvelocity;
float time;
float acceleration;
cout<<" Enter initial Velocity ";
cin>>invelocity;
cout << "Enter acceleration ";
cin>>acceleration;
cout<< "Enter time  ";
cin>>time;
finvelocity = (acceleration*time)+invelocity;
cout<< "Your Final Velocity is  "<<finvelocity;
}