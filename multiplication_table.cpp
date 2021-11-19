//multiplication table
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please the number to display it's tables:"<<endl;
	cin>>number;
	for(int i=number;i<=number;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
		cout<<endl;
	}
	system("pause>0");
}
