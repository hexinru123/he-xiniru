#include <iostream>
using namespace std;
main ()
{
	float sales;
	float salary;
	while(1){
		cout<<"Enter sales in dollars (or -1 to quit):"<<endl;
		cin>>sales;
		if(sales==-1){
			return 0;
		}
		salary = 200 + sales*0.09;
		cout<<"Salary is $" << salary << endl;
	}
}
