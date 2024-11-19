#include<iostream>
using namespace std;
int main()
{
	int age,income_level;
	cout<<"enter your age and income level:";
	cin>>age>>income_level;
	if(age>=60&&income_level>=30000){
		cout<<"you can get loan till 1 lacs";
	}if(age>=50&&income_level>=30000){
		cout<<"you can get loan till 1.5 lacs";
	}if(age>=40&&income_level>=30000){
		cout<<"you can get loan till 2 lacs";
	}if(age>=30&&income_level>=30000){
		cout<<"you can get loan till 2.5 lacs";
	}if(age>=20&&income_level>=30000){
		cout<<"you can get loan till 3 lacs";
	}
	
	return 0;
}
