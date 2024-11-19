#include<iostream>
#include<string>
using namespace std;
int main()
{
	string month;
	cout<<"enter the month to know of which season it is:";
	cin>>month;
	if (month=="december"||month=="january"||month=="february")
	{
		cout<<"it is winter season";
	}else if(month=="march"||month=="april"||month=="may"){
	cout<<"it is spring season";
}else if(month=="june"||month=="july"||month=="august"){
	cout<<"it is summer season";
	}else if(month=="september"||month=="october"||month=="november"){
		cout<<"it is autumn season";
	}
	else
	cout<<"invalid month";
	return 0;
}
