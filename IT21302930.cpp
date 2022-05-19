#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#define SIZE 2
//unregisteredUser class
class UnregisteredUser{
	private:
		char name[20];
		char email[30];
		char address[50];
	public:
		UnregisteredUser();
		UnregisteredUser(const char rname[],const char remail[],const char raddress[] );
		void registeruser();
		void updateuser();
		void regdetails();
	
};

//unregisteredUser class implemetation
UnregisteredUser::UnregisteredUser(){}
UnregisteredUser::UnregisteredUser(const char rname[],const char remail[],const char raddress[] ){
	strcpy(name,rname);
	strcpy(email,remail);
	strcpy(address,raddress);
}
void UnregisteredUser::registeruser(){}
void UnregisteredUser::updateuser(){}
void UnregisteredUser::regdetails()
{
	cout<<"Name :"<<name<<endl;
	cout<<"Email :"<<email<<endl;
	cout<<"Address :"<<address<<endl;
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
int main (){
	UnregisteredUser*u;
	u=new UnregisteredUser("Sasrika Neewin","sasri2001@gmail","New york,America" );
	u->regdetails();
	cout<<endl;
	
	order*odr1;
	odr1=new order(888);
	odr1->displayOrderDetails();
	cout<<endl;
	
	return 0;
}

