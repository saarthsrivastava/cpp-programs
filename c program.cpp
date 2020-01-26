#include<iostream>
using namespace std;
string name[10];
float cgpa[10];
void setName(int index,string tempname)
{
	name[index]=tempname;
}
void setCgpa(int index,float tempcgpa)
{
   cgpa[index]=tempcgpa;
}
void display()
{
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"marks of "<<name[i]<<" are="<<cgpa[i]<<"\n";
	}
}
int main()
{
	string tname;
	float tcgpa;
	int i,j;
	for(i=0;i<10;i++)
	{
		cout<<"enter the name of the student:";
		cin>>tname;
		setName(i,tname);
	}
	for(j=0;j<10;j++)
	{
		cout<<"enter the cgpa of the student: ";
		cin>>tcgpa;
		setCgpa(j,tcgpa);
	}
    display();
	return 0;
}

