//To check whether the triangles are equilateral triangles,isosceles or scalene triangle
#include <iostream>
using namespace std;
int main()
{
  int x,y,z;
  cout<<"Enter the sides of the triangle"<<endl;
  cin>>x>>y>>z;
  if(x==y&&y==z&&z==x)
  {
    cout<<"It's an equilateral triangle";
  }
  else
  {
    if(x!=y&&y!=z&&z!=x)
      cout<<"It's a scalene triangle";
    else
      cout<<"It's an isosceles triangle";
  }
  system("pause>0");
}

      
  
