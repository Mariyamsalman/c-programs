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
	   cout<<"the day is monday";
	   break;
		case 2:
       cout<<"the day is tuesday";
       break;
		case 3:
       cout<<"the day is wednesday";
       break;
		case 4:
       cout<<"the day is thrusday";
       break;
		case 5:
       cout<<"the day is friday";
       break;
		case 6:
       cout<<"the day is saturday";
       break;
		case 7:
       cout<<"the day is sunday";
	   break;	
	   default:
		cout<<"invalid number"; 
	}
		return 0;
}
