//library
#include<iostream>
using namespace std;
int main()
{
//declare the variables
int a,days, year, week;
cout<<"enter the number of days";
//take input for variable a 
cin>>a;
//count the no. of days,weeks and years
year=a/365;
week=(a%365)/7;
days=a-((year*365)+(week*7));
//display the output
cout<<"the time is:"<<year<<"years, "<<week<<"weeks, "<<days<<"days";
return 0;

}
