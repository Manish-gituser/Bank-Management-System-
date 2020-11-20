				// Bank Management System in C++

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Bank
{	
	char name[100],address[100],y;
	int balance;
	public:
			void open_account();
			void deposite_money();
			void Withdraw_money();
			void Display_account();
			
};
void Bank::open_account()
{	
	
	cout<<"Enter Your full Name ::";
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter your Address ::";
	cin.getline(address,100);
	cout<<"What type of account you want to open Saving(s) or current (c)";
	cin>>y;
	cout<<"Enter Amount for deposite::";
	cin>>balance;
	cout<<"Your account is created";
}
void Bank::deposite_money()
{
	int Add_amount;
	cout<<"Enter How much you deposite";
	cin>>Add_amount;
	balance+=Add_amount;
	cout<<"Total Amount you deposite::\t"<<balance;
	
}
void Bank :: Display_account()
{
	cout<<"Your Full Name :: "<<name<<"\n";
	cout<<"Your Address :: \n"<<address<<"\n";
	cout<<"Type of account::\n"<<y<<"\n";
	cout<<"Total Amount ::\n"<<balance<<"\n";
	
}
void Bank::Withdraw_money()
{
	float sub_amount;
	cout<<"\n Withdraw ::";
	cout<<"Enter amount to withdraw ::";
	cout<<sub_amount;
	balance=balance-sub_amount;
	cout<<"Now Total amount is left ::"<<balance;
	
}
int main()
{
	int ch,x;
	Bank obj;
	do
	{
	
	cout<<"1) Open Account \n";
	cout<<"2) Deposite Money \n";
	cout<<"3) Withdraw Money \n";
	cout<<"4) Display Account\n";
	cout<<"5) Exit\n";
	cout<<"Select the option from above \n";
	cin>>ch;
	switch(ch)
	{
		case 1: "1) Open Account \n";
		obj.open_account();
		break;
		case 2: "2) Deposite Money \n;";
		obj.deposite_money();
		break;
		case 3:"3) Withdraw Money \n";
		obj.Withdraw_money();
		break;
		case 4:"4) Display Account \n";
		obj.Display_account();
		break;
		case 5:
				if(ch==5)
				{
				exit(1);
				}
		default:
			cout<<"Invalid Option... Plz Enter correct value \n";
		}
		
	cout<<"\n Do you want to select next option then press :: y \n";
	cout<<"If you want to exit then press :: N \n";
x=getch();
if(x=='n'||x=='N')
exit(0);
}while(x=='y'||x=='Y');
	

	
	
	getch();
	return 0;
}

