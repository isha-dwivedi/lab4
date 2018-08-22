//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
float ang1, ang2, ang3;
cout<<"enter the two angles of the triangle";
//input angles of the trianglr
cin>>ang1>>ang2;
//find third angle
ang3=180-(ang1+ang2);
//display output
cout<<"the third angle of the triangle is:"<<ang3;
return 0;
}
