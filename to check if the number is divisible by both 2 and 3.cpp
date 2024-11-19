#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter a number to check it is divisible by 2 and 3:";
cin>>num;
if(num%2==0){
	if(num%3==0){
		cout<<"the number is divisible by both 2 and 3";
	}
	else
	cout<<"it is not divisible by both 2 and 3";
}
	return 0;
}
