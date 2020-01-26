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
       virtual void withdraw(double a)
       {
       	balance=balance-a;
       	cout<<"balance ="<<balance<<"\n";
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
       virtual void withdraw(double a)
       {
       	balance=balance-a;
       	cout<<"balance ="<<balance<<"\n";
	   }
		
};
void withdrawc(SavingsAccount *b,double amount)
{
	b->withdraw(amount);
	
}
int main()
{
	int c,amount;
	cout<<"enter 1 for savings account and 2 for Cuurent Acccount";
	cin>>c;
	cout<<"enter the amount to be withdrawn";
	cin>>amount;
	SavingsAccount *base=NULL;
	if(c==1)
	{
		base=new SavingsAccount(5000.0);
		withdrawc(base,amount);
	}
	else
	{
		base=new CurrentAccount(6000.0);
		withdrawc(base,amount);
	}
	return 0;
	
}
