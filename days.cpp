/*A c++ code to find number of days in a given month.*/
#include<iostream>
using namespace std;
int main()
{
  int year,month;
  cout<<"Please enter the year and the month";
  cin>>year>>month;
  switch(month)
  {
    case 2:(year % 4 == 0 && year % 100!=0|| year % 400 == 0)?cout<<"This month has 29 days":cout<<"This month has 28 days";break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:cout<<"There are 31 days in this month";break;
    case 4:
    case 6:
    case 9:
    case 11:cout<<"This month has 30 days";break;
    default:cout<<"INVALID";
  }
  system("pause>0");
}
