//To display length of a string
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	char a[25];
	int len;
	cout<<"Please enter the string(max 25 characers)"<<endl;
	gets(a);
	len=strlen(a);
	//puts(a);
	cout<<"The length of the string is"<<endl<<len;
	return 0;
	
	
}
