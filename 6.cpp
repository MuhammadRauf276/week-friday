#include <iostream>
using namespace std;

main(){
float pounds;
float cost;
float area;
float cpounds;
float carea;
cout <<"ENTER Bag size in pounds ";
cin >>pounds;
cout <<"Enter cost of the bag is ";
cin >>cost;
cout <<"Enter area covered by each bag ";
cin >>area;
cpounds = cost/pounds;
carea = pounds*area;
cout <<"cost of the fertilizer per pounds :"<<cpounds<<endl;
cout << "cost of fertilizing the area per square feet : "<<carea;
}


