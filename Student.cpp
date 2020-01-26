#include<iostream>
using namespace std;
class Student
{
	public:
	  string name[10];
	  float cgpa[10];
	 Student()
	 {
	 	cout<<"i am in the default constructor"<<"\n";
	  } 
     void setName(int index,string name)
     {
	  (*this).name[index]=name;//this keyword is doing typecasting here.it is used to point to the current object 
     }
     void setCgpa(int index,float cgpa)
     {
     	(*this).cgpa[index]=cgpa;
	 }
	 void display()
     {
	  int i;
	  for(i=0;i<10;i++)
	  {
		 cout<<"marks of "<<name[i]<<" are="<<cgpa[i]<<"\n";
	  } 
     }
     

};
int main()
{
	string tname;
	float tcgpa;
	int i,j;
	Student s;
	for(i=0;i<10;i++)
	{
		cout<<"enter the name of the student";
		cin>>tname;
		s.setName(i,tname);
	}
	for(j=0;j<10;j++)
	{
		cout<<"enter the cgpa of the student";
		cin>>tcgpa;
		s.setCgpa(j,tcgpa);
	}
	s.display();
	return 0;
}

