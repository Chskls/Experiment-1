#include <iostream>
using namespace std;

int main(){
	float netBalance, d1, payment, d2, in, inttt=0.0152;
	
	cout << "Your Net Balance: ";
	cin >> netBalance;
	cout << "Your Payment: ";
	cin >> payment;
	cout << "Your number of Days in Billing Cycle: ";
	cin >> d1;
	cout << "Your  number of days payment is made before billing cycle: ";
	cin >> d2;
		cout<<"Your average daily balance is: " ;
		
	float	db= (((netBalance*d1)-(payment*d2))/d1);
	
cout << db<<endl;
	cout<<"Your interest rate is " << inttt << " and ";
	cout<<"your interest on the unpaid balance is: " ;
		
	float undb =db*inttt;

	
cout << undb<<endl;
return 0;
}
