#include <iostream>
using namespace std;

main(){
string name;
int subject_1;
int subject_2;
int subject_3;
int subject_4;
int subject_5;
float sum;
float percentage;
cout <<"Enter your Name  ";
cin>>name;
cout <<"Enter your subject 1 marks ";
cin>>subject_1;
cout <<"Enter your subject 2 marks ";
cin>>subject_2;
cout <<"Enter your subject 3 marks ";
cin>>subject_3;
cout <<"Enter your subject 4 marks ";
cin>>subject_4;
cout <<"Enter your subject 5 marks ";
cin>>subject_5;
sum =subject_1 + subject_2 + subject_3 + subject_4 +subject_5;
percentage = (sum/500)*100;
cout<<"Your Percentage is "<<percentage;
}