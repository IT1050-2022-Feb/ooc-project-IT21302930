#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#define SIZE 2


//class of Pharmascist

class pharmacist{
	
	private:
		int pharmasistid;
		char pharmasistName[20];
	public:
		pharmacist();
		pharmacist(int pharmid,const char pharmname[]);
		void displaypharmasistDetails();
		
};

//class implentation of Pharmasist
pharmacist::pharmacist(){}
pharmacist::pharmacist(int pharmid,const char pharmname[]){
	
	pharmasistid=pharmid;
	strcpy( pharmasistName,pharmname);
	
}
void pharmacist::displaypharmasistDetails(){
	
	cout<<"Pharmasist ID:"<<pharmasistid<<endl;
	cout<<"Pharmasist Name:"<<pharmasistName<<endl;
	
}
//order class
class order {
	
	private:
		int cartId;
	public:
		order();
		order(int ctno);
		void displayOrderDetails();
		
		
};

//order class implemetation
order::order(){}
order::order(int ctno){
	
	cartId=ctno;
	
}

void order::displayOrderDetails(){
	
	cout<<"Order ID :"<<cartId<<endl;
	
}

//main program
int main()
{
	
	pharmacist *phar1;
	phar1=new pharmacist(666,"kalana Gunasekara");
	phar1->displaypharmasistDetails();
	cout<<endl;
	
	order*odr1;
	odr1=new order(888);
	odr1->displayOrderDetails();
	cout<<endl;
	
	
	return 0;
}
