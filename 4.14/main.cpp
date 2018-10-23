#include <iostream>
using namespace std;
main ()
{
	int account_number;
	float beginning_balance;
	float total_charge;
	float total_credits;
	float credit_limit;
	float new_balance;
	while(1){
		cout<<"Enter account number (or -1 to quit):"<<endl;
		cin>>account_number;
		if(account_number==-1){
			return 0;
		}
		cout<<"Enter beginning balance:"<<endl;
		cin>>beginning_balance;
		cout<<"Enter total charge:"<<endl;
		cin>>total_charge;
		cout<<"Enter total credits:"<<endl;
		cin>>total_credits;
		cout<<"Enter credit limit:"<<endl;
		cin>>credit_limit;

		new_balance = beginning_balance + total_charge -total_credits;
		cout<<"New Balance is " << new_balance << endl;
		if(new_balance > credit_limit){
			cout<<"Account:"<< account_number << endl;
			cout<<"credit limit:"<<credit_limit << endl;
			cout<<"Balance:"<<new_balance << endl;
			cout<<"Credit Limit Exceeded";
		}
	}
}
