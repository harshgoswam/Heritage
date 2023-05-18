#include<iostream>
#include<string.h>


using namespace std;

class A
{
	public :
		int id;
		char name[50];
		char role[50];
		int salayr;
		char experience[50];
		char copm_name[50];
		char address[50];
		char email[50];
		char contact[12];
		
		void set()
		{
			cout<<"Enter Employee Id:-";
			cin>>id;
			cout<<"Enter Employee Name:-";
	    	cin>>name;
	    	cout<<"Enter Employee Role:-";
	    	cin>>role;
			
		}
		
		
};
class B : public A
{
	   public :
	   	
	   	void get()
	   	{  
		   cout<<"Enter Employee experience:-";
		   cin>>experience;
		   cout<<"Enter Employee salayr:-";
		   cin>>salayr;	
	   }
};
class C  : public B
{
	public :
		
		void display()
	{
		cout<<"Employee Name:-"<<name<<endl
		<<"Employee Role:-"<<role<<endl
		<<"Employee Salary:-"<<salayr<<endl;
	}
	
		void data()
		{
			cout<<"Enter Employee address:-";
			cin>>address;
			cout<<"Enter Employee copm_name:-";
			cin>>copm_name;
			
		}
};
class D :public C
{
	public :
		void info()
		{
			cout<<"Enter Employee Email:-";
			cin>>email;
			cout<<"Enter Employee Contact:-";
			cin>>contact;
			
		}
		void Display()
		{
			cout<<"Employee Id:-"<<id<<endl;
			display();
	    	cout<<"Employee Experience:-"<<experience<<endl
	    	<<"Employee Company Name:-"<<copm_name<<endl
	    	<<"Employee Address:-"<<address<<endl
	    	<<"Employee Email:-"<<email<<endl
	    	<<"Employee Contact:-"<<contact<<endl;	
		}
};
main()
 {
 	D n;
 	n.set();
 	n.get();
 	n.data();
 	n.info();
 	n.Display();
 	 
 }
