#include<iostream>
using namespace std;
int main()
{
		int num;
	cout<<"enter a number to know if it is positive and even.";
	cin>>num;
	if(num>0){
		cout<<"your number is positive";
	}if (num%2==0){
		cout<<"\nyour number is even";
	}else
	{
		cout<<"\nyour number is not positive and even";
	}
	return 0;
}
