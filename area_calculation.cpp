#include<iostream>
#include<cstdlib>
#include<cmath>
#define pi 3.14;
using namespace std;

float area(float a,float b,float c)
{
	float s,ar;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}

float area(float a,float b)
{
	return a*b;
}

float area(float a)
{
	return a*a;
}

float area(float a)
{
	
	ar=pi*a*a;
	return ar;
}

int main()
{
	system("cls");
	int choice,s1,s2,s3,ar;
	do
	{
		cout<<"\nArea Main Menu\n";
		cout<<"1. TRIANGLE\n";
		cout<<"2. SQUARE\n";
		cout<<"3. RECTANGLE\n";
		cout<<"4. CIRCLE\n";
		cout<<"5. EXIT\n";
		cout<<"Please enter your choice(1-5)\t";
		cin>>choice;
		cout<<"\n";
		switch(choice)
		{
			case 1: cout<<"Enter three sides\n";
			        cin>>s1>>s2>>s3;
			        ar=area(s1,s2,s3);
			        cout<<"The area is"<<ar<<"\n";
			        break;
			case 2: cout<<"Enter the side\n";
			        cin>>s1;
					ar=area(s1);
					cout<<"The area is"<<ar<<"\n";
					break;
			case 3: cout<<"Enter length and breadth\n";
			        cin>>s1>>s2;
					ar=area(s1,s2);
					cout<<"The area is"<<ar<<"\n";
					break;
			case 4: cout<<"Enter the radius\n";
			        cin>>s1;
			        ar=area(s1);
			        cout<<"The area is"<<ar<<"\n";
			        break;
			case 5: break;
			default : cout<<"Wrong choice\n";
		}
		
		
		
	}while(choice>0&&choice<5);
	return 0;
}
