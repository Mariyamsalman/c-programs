#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter a number:";
	cin>>number;
	switch(number)
{
    	case 1:
	   cout<<"the month is january";
	   break;
	   case 2:
	   cout<<"the month is february";
	   break;
	   case 3:
	   cout<<"the month is march";
	   break;
	   case 4:
	   cout<<"the month is april";
	   break;
	   case 5:
	   cout<<"the month is may";
	   break;
	   case 6:
	   cout<<"the month is june";
	   break;
	   case 7:
	   cout<<"the month is july";
	   break;
	   case 8:
	   cout<<"the month is august";
	   break;
	   case 9:
	   cout<<"the month is september";
	   break;
	   case 10:
	   cout<<"the month is october";
	   break;
	   case 11:
	   cout<<"the month is november";
	   break;
	   case 12:
	   cout<<"the month is december";
	   break;
		default:
			cout<<"invalid number";
		}
		return 0;
}
