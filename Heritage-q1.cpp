#include<iostream>

using namespace std;

class Mother 
{
	public :
		 void dispaly()
		 {
		 	cout<< "hello mother!"<<endl;
		 }

};
class Daughter  : public Mother
 {
	public :
		void dispaly()
		{
			cout<<"hello daugther!"<<endl;
		}
		
};
main()
{
	Mother mo;
	Daughter dau;
	mo.dispaly();
	dau.dispaly();
	
}


