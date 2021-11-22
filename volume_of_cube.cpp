//volume of a cube
#include <iostream>
using namespace std;

    int main()
    {
    	int a;
    	float vol;
		cout << "\n\n Calculate the volume of a cube :\n";
		cout << "---------------------------------------\n";		
        cout<<" Please enter the side of a cube : ";
    	cin>>a;
    	vol=(a*a*a);
        cout<<" The volume of a cube is : "<< vol << endl;
        cout << endl;
        return 0;
    }
