#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int num1,num2;
char op;
cout<<"enter the two numbers:";
cin>>num1>>num2;
cout<<"enter the operator";
cin>>op;
switch(op)
{
case '+':
cout<<"this is the sum of nums"<<num1+num2;
break;
case '-':
cout<<"this is the subtraction of nums"<<num1-num2;
break;
case '*':
cout<<"this is the product of nums"<<num1*num2;
break;
case '/':
cout<<"this is the sum of nums"<<num1/num2;
break;
default:
	cout<<"invalid operator";
}
	return 0;
}
