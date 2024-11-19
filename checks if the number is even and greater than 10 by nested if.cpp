#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number to know if it is even and greater than 10:";
	cin>>num;
	if(num%2==0){
		cout<<"your number is even";
	}if (num>10){
		cout<<"\nyour number is greater than 10";
	}else
	{
		cout<<"\nyour number is less than 10";
	}
	
	
	return 0;
}

