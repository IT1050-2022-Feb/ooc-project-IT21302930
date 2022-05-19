#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#define SIZE 2
//product class
class product{
	private:
		int productId;
		char productName[30];
		char ProductDescription[30];
	
	public:
		product();
		product(int proid,const char prodname[30],const char proddescription[30]);
		void displayProductDetails();
};	

//class implentation of product
product::product(){}
product::product(int proid,const char prodname[30],const char proddescription[30]){
	productId=proid;
	strcpy(productName,prodname);
	strcpy(ProductDescription,proddescription);	
}
void product::displayProductDetails(){
	cout<<"Product ID:"<<productId<<endl;
	cout<<"Product Name:"<<productName<<endl;
	cout<<"Product Description:"<<ProductDescription<<endl;

}
//report class
class report {
	private:
		int reportId;
	public:
		report();
		report(int ctno);
		void displayReportDetails();
};

//class implentation of report
report::report(){}
report::report(int repno){
	reportId=repno;
}
void report::displayReportDetails(){
	cout<<"Report ID :"<<reportId<<endl;
}

//main program
int main()
{
	product *prd1;
	prd1=new product(444,"Vitamin C","antioxidant protects cells");
	prd1->displayProductDetails();
	cout<<endl;
	
	report* rep1;
	rep1=new report(777);
	rep1->displayReportDetails();
	cout<<endl;
	
	
	return 0;
	
}
