//Program 4.14
#include<iostream>
#include<string>
using namespace std;
main()
{
	int Account_Number;
	float Balance, Total_Charge, Total_Credit, Credit_Limit, New_Balance;
	cout<<"Enter account number (or -1 to quit):";
	cin>>Account_Number;
	while(Account_Number!=-1) //checking while condition
	{
		cout<<"Enter beginning Balance:";
		cin>>Balance;
		cout<<"Enter total charges:";
		cin>>Total_Charge;
		cout<<"Enter total credits:";
		cin>>Total_Credit;
		cout<<"Enter Credit limit:";
		cin>>Credit_Limit;
		
		New_Balance=(Balance + Total_Charge) - Total_Credit; //formula for new Balance
		cout<<"New Balance is "<<New_Balance<<"\n";
		cout<<"Account number: "<<Account_Number<<"\n";
		cout<<"Credit Limit:"<<Credit_Limit<<"\n";
		cout<<"Balance:"<<New_Balance<<"\n";
		if(Credit_Limit<New_Balance) //credit limit condition
		cout<<"Credit_Limit Exceeded. ";
		cout<<"\n\n";
		cout<<"Enter account number (or -1 to quit):";
	    cin>>Account_Number;
	}
}
