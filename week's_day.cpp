// A c++ program to display week's day(1-7)
#include<iostream.h>
#include<stdlib.h>
using namespace std;
int main()
{
  system("cls");
  int day;
  cout<<"Please enter the number of the week's day(1-7) : "<<endl;
  cin>>day
    switch(day)
    {
      case 1 : cout<<"Sunday";
        break;
      case 2 : cout<<"Monday";
        break;
      case 3 : cout<<"Tuesday";
        break;
      case 4 : cout<<"Wednesday";
        break;
      case 5 : cout<<"Thurday";
        break;
      case 6 : cout<<"Friday";
        break;
      case 7 : cout<<"Saturday";
        break;
      default: cout<<"Invalid number!";
    }
  system(pause>0);
}
        
  
