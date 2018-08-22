//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int m1,m2,m3,m4,m5;
cout<<"enter the marks on 5 subjects out of 100";
cin>>m1>>m1>>m3>>m4>>m5;
float tot,avg,per;
tot=m1+m2+m3+m4+m5;
avg=tot/5;
per=tot/500*100;
cout<<"total of marks is:"<<tot<<endl;
cout<<"average of marks is:"<<avg<<endl;
cout<<"percentage of marks is:"<<per;
return 0;
}

