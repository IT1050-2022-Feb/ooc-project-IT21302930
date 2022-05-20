#include <iostream>
#include<cstring>
#include<string>

using namespace std;

#define SIZE 2

//Enquiry Class
class enquiries{
	private:
		int enquiryId;
		char enquiryType[30];
		char enquiryDescription[30];
	
	public:
		enquiries();
		enquiries(int emid,const char emtype[30],const char emdescription[30]);
		void addEnquiry();
		void displayEnquiryDetails();
};	

//Class Implentation of Enquiry
enquiries::enquiries(){}
enquiries::enquiries(int emid,const char emtype[],const char emdescription[]){
	enquiryId=emid;
	strcpy(enquiryType,emtype);
	strcpy(enquiryDescription,emdescription);	
}
void enquiries::addEnquiry(){}
void enquiries::displayEnquiryDetails(){
	cout<<"Enquiry ID : "<<enquiryId<<endl;
	cout<<"Enquiry Type : "<<enquiryType<<endl;
	cout<<"Enquiry Description : "<<enquiryDescription<<endl;

}


//Administrator Class
class Administator{
	private:
		int AdminId;
		char AdminName[30];
	
	public:
		Administator();
		Administator(int adminid,const char adminname[30]);
		void displayAdminDetails();
};	

//Class Implentation of Administrator
Administator::Administator(){}
Administator::Administator(int adminid,const char adminname[30]){
	AdminId=adminid;
	strcpy(AdminName,adminname);

}
void Administator::displayAdminDetails(){
	cout<<"Administrator ID:"<<AdminId<<endl;
	cout<<"Administrator Name:"<<AdminName<<endl;
}


//Main Program
int main()
{
	enquiries *enq1;
	enq1=new enquiries(333,"About Product Expiry","When is the expiry date");
	enq1->displayEnquiryDetails();
	cout<<endl;
	
	Administator *ad1;
	ad1=new Administator(555,"Thilini Fonseka");
	ad1->displayAdminDetails();
	cout<<endl;
	return 0;
}
