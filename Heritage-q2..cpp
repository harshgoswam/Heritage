#include<iostream>
#include<string.h>

using namespace std;

class Animal
{
	public :
	
		int age;
		char name[50];
		
		
	void set(int age,char name[])
	{
		this->age= age;
		strcpy(this->name,name);
	}
};

class Zebra :public Animal
{
	public :
		void display()
		{
			cout<<" Zebra Name is="<<name<<endl;
			cout<<" Zebra Age is="<<age<<endl;
			cout<<"The zebra comes from Africa"<<endl;
		}
};

class Dolphin :public Animal
{
	public :
		void getData()
		{
			cout<<" Dolphin Name is="<<name<<endl;
			cout<<" Dolphin Age is="<<age<<endl;
	    	cout<<"The dolphin comes from New Zeland"<<endl;
		}
};

main()
{
	Zebra zebra;
	Dolphin dolphin;
	
	zebra.set(20,"Ana");
	    cout<<endl;
	dolphin.set(25,"Jin");
	    cout<<endl;

	zebra.display();
		cout<<endl;
	dolphin.getData();
	    cout<<endl;
}
