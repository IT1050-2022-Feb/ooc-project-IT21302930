#include <iostream>
#include<cstring>
#include<string>
using namespace std;
#define SIZE 2
//unregisteredUser class
class UnregisteredUser{
	protected:
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

//registered user class
class RegisteredUser:public UnregisteredUser {
	private:
		int userId;
		char userName[20];
		char password[20];
	public:
		RegisteredUser();
		RegisteredUser(int no,const char mname[],const char mpassword[]);
		void login();
		void updateAccount();
		void displayRegisterUserDetails();
};
//register user class implemetation
RegisteredUser::RegisteredUser(){}
RegisteredUser::RegisteredUser(int no,const char mname[],const char mpassword[]){
	userId=no;
	strcpy(userName,mname);
	strcpy(password,mpassword);
}
void RegisteredUser::login(){}
void RegisteredUser::updateAccount(){}
void RegisteredUser::displayRegisterUserDetails(){
	cout<<"User ID :"<<userId<<endl;
	cout<<"Name:"<<userName<<endl;
	cout<<"Password:"<<password<<endl;
	
}
//main program
int main(){
		UnregisteredUser*u;
	u=new UnregisteredUser("Sasrika Neewin","sasri2001@gmail","New york,America" );
	u->regdetails();
	cout<<endl;
	
	RegisteredUser *r1;
	r1=new RegisteredUser(111,"Nimal_03","**********");
	r1->displayRegisterUserDetails();
	cout<<endl;
	
	return 0;
}

