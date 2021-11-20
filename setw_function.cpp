//setw() manipulator
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int length,breadth;
	char symbol;
	cout<<"Please enter the length:"<<endl;
	cin>>length;
	cout<<"Please enter the breadth:"<<endl;
	cin>>breadth;
	cout<<"Please enter the symbol to represent the diagram"<<endl;
	cin>>symbol;
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<breadth;j++)
		{
			cout<<setw(3)<<symbol;
		}
		cout<<endl;
	}
	system("pause>0");
}
