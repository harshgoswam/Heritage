#include<iostream>
using namespace std;

class Employee

{
	public:
		int id;
		char name[100];
		
		void get(int id, char name [])
		{
			cout<<"Enter id:-"<<id<<endl;
			cout<<"Enter name:-"<<name<<endl;
		}
};
class Details
{
	public :
		char email[100];
		char contact [12];
		
		void set(char email[],char contact[])
		{
				cout<<"Enter email:-"<<email<<endl;
			cout<<"Enter contact:-"<<contact<<endl;
		}
 } ;
 
 class Employeedetails :public Employee,public Details
 {
 	public :
 		 int selery;
		char address[100];
		
		void data(int selery, char address[])
		{
				cout<<"Enter selery:-"<<selery<<endl;
			cout<<"Enter address:-"<<address<<endl;
			
		}
 };
 main()
 {
 	Employeedetails e;
 	e.get(101,"jay");
 	e.set("jay001@gmail.com","1234567890");
 	e.data(15000," Adajan, Surat,");
 	 
 	 
	  
	  
}
