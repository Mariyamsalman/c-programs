#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number:";
	cin>>num;
	if(num>0){
		cout<<"your number is positive";
	}else if(num<0){
		cout<<"your number is negative";
	}else if(num==0){
		cout<<"your number is zero";
	}
	
	return 0;
}
