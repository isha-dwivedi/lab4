//library
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//declare the variables
float p,r,t,ci;
cout<<"enter principle amount, rate and time";
//input from user
cin>>p>>r>>t;
//find compound interest
ci=p*pow(1+r/100,t);
//display result
cout<<"compound interest is:"<<ci;
return 0;
}
