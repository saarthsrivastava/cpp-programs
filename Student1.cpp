#include<iostream>
using namespace std;
class Student
{
	public:
	  string name;
	  float cgpa;
	 Student()
	 {
	 	cout<<"i am in the default constructor"<<"\n";
	 	name="";
	 	cgpa=0.0;
	  } 
	  Student(string name,float cgpa)
	 {
	 	cout<<"i am in the parameterised constructor"<<"\n";
	 	(*this).name=name;
	 	(*this).cgpa=cgpa;
	  } 
     /*void setName(int index,string name)
     {
	  (*this).name[index]=name;//this keyword is doing typecasting here.it is used to point to the current object 
     }
     void setCgpa(int index,float cgpa)
     {
     	(*this).cgpa[index]=cgpa;
	 }*/
     void display()
     {
     	cout<<name<<"\n";
     	cout<<cgpa<<"\n";
	 }

};
int main()
{
	string tname;
	float tcgpa;
	Student s1;
	Student s2("harsha",9.8);
	/*int i,j;
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
	}*/
	s1.display();
	s2.display();
	return 0;
}

