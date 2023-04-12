#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	const int defaultpin = 0000;
	int attempts = 0;
	int select;
	float refernce;
	char option;
	char Y;
	char N;
	int number;
	float amount;
	int pin;
	int c_pin;
	int new_pin;
	int reference;
	float balance,counter;
	string digits;
	balance=1000;
	cout<<"Authenticaion"<<endl;
	cout<<"1.Check balance"<<endl;
	cout<<"2.Reset/Change pin"<<endl;
	cout<<"3.Send"<<endl;
	cout<<"4.Allow cashout"<<endl;
	cin>>select;
	if(select==1)
	{
        do{
		cout<<"please enter your 4-digit PIN:"<<endl;
		cin>>pin;
		attempts++;
		if(pin!= defaultpin){
			cout<<"incorrect PIN.Please try again later"<<endl;
			}
		    else if(pin== defaultpin){
		    	cout<<"your balance is 1000";
			}
	}while(pin != defaultpin &&attempts<3);
	if(attempts>3){
	   cout<<"Maximum attempts reach."; 
	   cout<<"Existing program"<<endl;
	   }
	   switch(pin){
	   break;
	   }
	}
	else if(select==2)
	{
	cout<<"Are you sure you want change your pin"<<endl;
	cout<<"Choose Y/N"<<endl;
	cin>>option;
	if(option==Y){
	   cout<<"Enter New Pin"<<endl;
	   cin>>new_pin;
	   pin==new_pin;
	   cout<<"Your New pin Is "<<new_pin;
	   }
	}
	else if(select==3)
	{
	  cout<<"Enter Mobile Number"<<endl;
	  cin>>number;
	  cout<<"Enter Amount To Transfer"<<endl;
	  cin>>amount;
	  cout<<"Transfer"<<amount<<"to"<<number<<endl;
	  cout<<"Enter Reference"<<endl;
	  cin>>reference;
	  cout<<"Please enter your Pin:"<<endl;
	  cout<<"cashout Allowed"<<endl;
	  cin>>pin;
	  do{
	    attempts++;
	    if (pin != defaultpin){
		cout<<"Incorrect PIN. Please try again" <<endl;
		   }
		   else if (pin== defaultpin){
		   cout<<"You have successfully sent"<<amount<<" to "<<number<<endl;
		   cout<<"Your current balance is"<<balance-amount<<endl;
		   }
		}while (pin != defaultpin && attempts>3);
		if(attempts>3){
		cout<<"Maximum attempts reached.";
		cout<<"Existing program"<<endl;
	}
	switch(pin){
		break;
	}
	
	}
		
	return 0;
}
