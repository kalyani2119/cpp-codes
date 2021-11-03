/* To check the numbers that are divisible by 2 and 4 between 10-100 */
#include<iostream>
using namespace std;
int main()
{
  int counter = 10;
  while(counter<=100)
  {
    if(counter%2==0 && counter%4==0)
      cout<<"These are the numbers which are divisible by 2 and 4"<<counter;
   counter++;
  }
  system("pause>0");
}
