#include<iostream>
using namespace std;
class SavingsAccount
{   private:
	   double balance;
    public:
    	SavingsAccount(double balance)
    	{(*this).balance=balance;
		}
	    double deposit(double amount)
	   {
		balance=balance+amount;
		return balance;
    	}
	    void displayBalance()
	   {
		cout<<balance<<"\n";
       }
};
int main()
{
	SavingsAccount *bptr=new SavingsAccount(5000.0);//this is a base class binder
	bptr->displayBalance();
	bptr->deposit(100.0);//when it is a binder then we use -> else we use "."
	bptr->displayBalance();
	return 0;
	
}
