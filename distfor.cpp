/*To calculate the distance of the two given coordinate points*/
#include<iostream.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  system("cls");
  double distance,X1,Y1,X2,Y2;
  cout<<"Enter the coordinates of point 1:";
  cin>>X1>>Y1;
  cout<<"Enter the coordinates of point 2:";
  cin>>X2>>Y2;
  distance=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
  cout<<"The distance between ("<<X1<<","<<Y1<<")and("<<X2<<","<<Y2<<")is:"<<distance<<endl;
  return 0;
}

  
