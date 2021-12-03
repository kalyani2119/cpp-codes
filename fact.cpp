#include<iostream.h>
#include<stdlib.h>
int main()
{
  system("cls");
  int i,num,fact=1;
  cout<<"Please enter the number";
  cin>>num;
  i=num;
  while(num)
  {
    fact=fact*num;
    --num;
  }
  cout<<"The factorial of the number:"<<i<<"is"<<fact<<"\n";
  return 0;
}

