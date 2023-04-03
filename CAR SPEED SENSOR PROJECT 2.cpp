#include<iostream>
using namespace std;
int c;
class SPEED
{
	public:
	int speed;
	int check()
	{
		cout<<"Enter the speed of car";
		cin>>speed;
	}
	void display()
	{
	if(speed>75)
	{
		cout<<"WARNING !!!"<<endl;
			cout<<"\a"<<"\a"<<"\a"<<endl;
		cout<<"Urgently lower the speed of the car"<<endl;
		
	}
	else
	cout<<"No problem with your car speed :)\n Enjoy Your ride"<<endl;
	}
};

main()
{
	SPEED person;
	person.check();
	person.display();
}
