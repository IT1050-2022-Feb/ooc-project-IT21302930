#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#define SIZE 2

//cart class
class cart {
	private:
		int cartId;
	public:
		cart();
		cart(int ctno);
		void displayCart();
		void addProduct();
};

//cart class implemetation
cart::cart(){}
cart::cart(int ctno){
	cartId=ctno;
}
void cart::addProduct(){}
void cart::displayCart(){
	cout<<"Cart Number :"<<cartId<<endl;
	
}
//payment class
class payment{
	private:
		int paymentId;
		float paymentAmount;
	public:
		payment();
		payment(int pid,float payamout);
		void displayPayment();
		void confirmPayment();
		void validate();
		void paymentDetails();
};

//payment class implentation
payment::payment(){}
payment::payment(int pid,float payamout){
	paymentId=pid;
	paymentAmount=payamout;
}
void payment::displayPayment(){}
void payment::confirmPayment(){}
void payment::validate(){}
void payment::paymentDetails(){
	cout<<"Payment ID:"<<paymentId<<endl;
	cout<<"Amount:"<<paymentAmount<<endl;
	
}

//Main Program
int main()
{
	cart *c1;
	c1=new cart(8887);
	c1->displayCart();
	cout<<endl;
	
	payment *pay1;
	pay1=new payment(222,230.00);
	pay1->paymentDetails();
	cout<<endl;
	
}
