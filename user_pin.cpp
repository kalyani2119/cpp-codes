#include<iostream>
using namespace std;
int main()
{
	int user_pin=1234,pin,count=0;
	do{
		cout<<"Please enter your secret number\n";
		cin>>pin;
		if(pin!=user_pin)
		count++;
	}while(count<3 && pin!=user_pin);
	if(count<3)
	cout<<"LOADING.....";
	else
	cout<<"BLOCKED";
	system("pause>0");
}
