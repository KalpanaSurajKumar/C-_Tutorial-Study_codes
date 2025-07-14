// Multiple inheritence in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		string name;
//		string fav_food;
//		void A_inst(string nam,string food){
//			name = nam;
//			fav_food = food;
//			cout<<"The name of the person is:"<<name<<endl;
//			cout<<"The favourite food of the person is:"<<fav_food<<endl;
//		}
//		
//};
//class B{
//	string B_name;
//	string fav_laptop;
//	public:
//		void B_inst(string B,string fav_la){
//			B_name = B;
//			fav_laptop = fav_la;
//			cout<<"The name of the B person is:"<<B_name<<endl;
//			cout<<"The name of the favourite laptop is:"<<fav_laptop<<endl;
//			
//		}
//	
//};
//class C:public A,public B{
//	public:
//		string book_name = "Bhagwat Geeta";
//		
//};
//int main(){
//	C c;
//	c.A_inst("Suraj Kumar","Matar Paneer");
//	c.B_inst("Maya","HP");
//	cout<<"The historic book is:"<<c.book_name<<endl;
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Father{
//	protected:
//		string name = "Vijay Kumar Jha";
//		string profession = "Technician";
//		
//		
//		
//		
//
//};
//class Mother{
//	protected:
//		string m_name = "Kalpana";
//		string profession_m = "Everything";
//		
//};
//class Son:public Father, public Mother{
//	public:
//		string s_name;
//		string profession;
//		void info(string s_n,string pro){
//			s_name = s_n;
//			profession = pro;
//			cout<<"The name of the son is:"<<s_name<<endl;
//			cout<<"The profession of the son is:"<<profession<<endl;
//			
//		}
//};
//int main(){
//	Son s;
//	s.info("Suraj Kumar Jha","Machine learning Engineer");
//	return 0;
//}

//3
#include<iostream>
using namespace std;
class Kalpana{
	public:
		int total_company;
		long int total_employee;
		string founder;
		void kal_info(int t,long int te,string fo){
			total_company = t;
			total_employee = te;
			founder = fo;
			cout<<"The Total number of companies is:"<<total_company<<endl;
			cout<<"The Total number of employees is:"<<total_employee<<endl;
			cout<<"The founder of the kalpana family is:"<<founder<<endl;
		}
		
		

};
class Kumar_intelligence{
	public:
		string type;
		int no_of_employee;
		string products;
		void intelligence(string ty,int ie,string pro){
			type = ty;
			no_of_employee = ie;
			products = pro;
			cout<<"The type of company is:"<<type<<endl;
			cout<<"The number of Employee is:"<<no_of_employee<<endl;
		}
};

class company_info:public Kalpana, public Kumar_intelligence{
	public:
		string family_name;
		string country;
		int country_avail;
		void info_c(string fn,string co,int c_a){
			family_name = fn;
			country = co;
			country_avail = c_a;
			cout<<"The name of the company family is:"<<family_name<<endl;
			cout<<"The name of the origin of the country is:"<<country<<endl;
			cout<<"The products available in the country is:"<<country_avail<<endl;
		}
	
};
int main(){
	company_info in;
	in.info_c("Kalpana Company","India",196);
	in.kal_info(100,100000000,"Suraj Kumar Jha");
	in.intelligence("Artificial Intelligence",15000000," various Generative ai models and ai Robots");
	return 0;
}

