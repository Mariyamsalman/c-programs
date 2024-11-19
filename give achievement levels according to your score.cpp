#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"enter your score to know the level of your achievement:";
	cin>>score;
		if(score>=80)
	{
		cout<<"\nyour achievement level is:1";
		cout<<"\nsuperb!";
	}else if(score>=70){
	cout<<"\nyour achievement level is:2";
	cout<<"\nwelldone!";
}else if(score>=60){
	cout<<"your achievement level is:3";
	cout<<"\nsatisfactory!";
}else if(score>=50){
	cout<<"\nyour achievemen level is:4";
	cout<<"\nnice try!";
}else if(score>=40){
	cout<<"\nyour achievement level is:5";
	cout<<"\nwork hard!";
}else{
	cout<<"\nyou failed";
	cout<<"\nbetter luck next time!";
}

	return 0;
}
