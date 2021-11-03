#include<iostream>
#include <cmath>
using namespace std;
#define pi 3.14
int main()
{
system("cls");
double radius,surfaceArea,volume;
cout<<"Please enter the radius of the sphere:"<<endl;
cin>>radius;
surfaceArea = 4*pi*radius*radius;
volume = (4*pi*radius*radius*radius)/3;
cout<<"The surface area of the sphere is:"<<surfaceArea<<endl;
cout<<"The volume of the sphere is:"<<volume<<endl;
system("pause>0");

}
