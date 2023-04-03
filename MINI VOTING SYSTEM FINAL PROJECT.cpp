#include<iostream>
#include<cstring>
 using namespace std;
//DECLARATIONS
int selection,AGE,PASSWORD,genpass;
char FIRST_NAME[50];char first_name[50];
char LAST_NAME[50];char last_name[50];
char GENDER;
char MOB[50];char mob[50];
int chosevote;
int count1=0,count2=0,count3=0,count4=0;
//DECLARATIONS CLOSED

//CASTE A VOTE
class caste
{
   public:
   void function()
   {
    cout<<"Select your candidate\n1.AAM BANDA PARTY\n2.RASHTRIYA CONGRESS\n3.SIRKAAR PARTY\n4.JAI HO PARTY"<<endl;	
    cin>>chosevote;
switch(chosevote)
{
	case 1:
		count1=count1+1;
		cout<<"Thanks for voting"<<endl;
		break;
	case 2:
		count2=count2+1;
		cout<<"Thanks for voting"<<endl;
		break;
	case 3:
		count3=count3+1;
		cout<<"Thanks for voting"<<endl;
		break;
	case 4:
		count4=count4+1;
		cout<<"Thanks for voting"<<endl;
		break;
	default:
		cout<<"Please enter a valid candidate selection number.";
   }
		
}
};
//CASTE A VOTE CLOSED

//CLASS PASSWORD
class password
{
	public:
		int a=strlen(FIRST_NAME);
		int b=strlen(LAST_NAME);
		void unique(int i)
		{
			//int a=strlen(FIRST_NAME);
			//int b=strlen(LAST_NAME);
			cout<<"Your unique digit is "<<a+b<<endl;
			cout<<"Please enter your password"<<endl;
			cin>>PASSWORD;
		}
};
//CLASS PASSWORD CLOSED

//CLASS LOGIN
class LOGIN:public caste
{
public:
void login()
{
cout<<"first name"<<endl;
cin>>first_name;
cout<<"last name"<<endl;
cin>>last_name;
cout<<"Last two digits of Password"<<endl;
cin>>genpass;
int c=strlen(first_name);
int d=strlen(last_name);
int security=c+d;
if(genpass==security)
 {
 cout<<"Login successfull"<<endl;

				function();
	}
else
cout<<"Kindly register first"<<endl;//NO FUNCTION COUT
}
};
//CLASS LOGIN CLOSED


//CLASS REGISTERATION
class REGISTERATION
{
public:
void registering()
{
	cout<<"FIRST NAME"<<endl;
			cin>>FIRST_NAME;
			cout<<"LAST NAME"<<endl;
			cin>>LAST_NAME;
			cout<<"AGE"<<endl;
			cin>>AGE;
			cout<<"GENDER"<<endl;
			cin>>GENDER;
			cout<<"MONTH OF BIRTH"<<endl;
			cin>>MOB;
			cout<<"Thank You for registering"<<endl;
			cout<<"Your password is the month of birth number followed by unique digit issued by us"<<endl;
		cout<<"like for March it is 03 followed by the unique code(say 21) then password is 0321"<<endl;
	}	
};
//CLASS REGISTERATION CLOSED
main()
{
	//WELCOMING THE USER
	cout<<"WELCOME TO ONLINE NATIONAL PORTAL FOR VOTING"<<endl;
	//OBJECTS 
	REGISTERATION regis;
	password pass;
	LOGIN logs;
	//SELECTION
	cout<<"Select from the following options\n1.Registeration\n2.Login"<<endl;	cin>>selection;
	switch(selection)
	{
		case 1:
			regis.registering();
			pass.unique(1);	
			break;
		case 2:
			logs.login();
	}
}


