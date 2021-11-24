//to draw right angled triangle
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int length;
	char symbol;
	cout<<"Please enter the length of the triangle:"<<endl;
	cin>>length;
	cout<<"Please enter the symbol:"<<endl;
	cin>>symbol;
	for(int i=1;i<=length;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<setw(3)<<symbol;
		}
		cout<<endl;
	}
    system("pause>0");
	
}
