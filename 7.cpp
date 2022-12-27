#include <iostream>
using namespace std;

main(){
string movie;
float adticket;
float cdticket;
float tadticket;
float tcdticket;
float donation;
float total;
float mdonation;
float afdonation;
cout << "Enter movie name is ";
cin>>movie;
cout << "Enter adult Ticket Price ";
cin>>adticket;
cout << "Enter child Ticket Price ";
cin>>cdticket;
cout << "Enter number of total Adult ticket Sold ";
cin>>tadticket;
cout << "Enter number of total Child ticket ";
cin>>tcdticket;
cout << "Enter percentage to donate";
cin>>donation;
total = (adticket*tadticket)+(cdticket*tcdticket);
cout << "Your total amount generated is  "<<total<<endl;
mdonation = (total*donation)/100;
afdonation = (total)-(mdonation);
cout << "Your total amount after donation is "<<afdonation;
}



