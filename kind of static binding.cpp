#include<iostream>
using namespace std;
class SavingsAccount
{   private:
	   double balance;
    public:
    	SavingsAccount(double balance)
    	{(*this).balance=balance;
		}
	   virtual double deposit(double amount)
	   {
		balance=balance+amount;
		return balance;
    	}
	    virtual void displayBalance()
	   {
		cout<<balance<<"\n";
       }
};
class CurrentAccount:public SavingsAccount
{
	private:
	 double balance;
	public:
		CurrentAccount(double balance):SavingsAccount(0.0)
    	{
		 (*this).balance=balance;
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
	bptr=new CurrentAccount(6000.0);//assigning it to the derived class binder but it still is static binding.we are pointing it to the derived class so it will only point and will not call the constructor.it is kind of type casting.
	bptr->displayBalance();
	bptr->deposit(500.0);
	bptr->displayBalance();
	return 0;
	
}
