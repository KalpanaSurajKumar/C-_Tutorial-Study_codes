// Virtual Base Class in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		void print(){
//			cout<<"This is Suraj Kumar Jha"<<endl;
//		}
//};
//
//class B:public A{
//	public:
//		void info(){
//			cout<<"I am a B type Person"<<endl;
//		}
//};
//class C:public A{
//	public:
//		void Great(){
//			cout<<"Suraj Kumar is Great!"<<endl;
//		}
//};
//class D:public B,public C{
//	public:
//		void Electronics(){
//			cout<<"MY favourite Electronics Device is: Laptop"<<endl;
//		}
//};
//int main(){
//	D d;
//	d.print();  // This causes Ambigious Error
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		void print(){
//			cout<<"This is Suraj Kumar Jha"<<endl;
//		}
//};
//class B: virtual public A{
//	public:
//		void display(){
//			cout<<"This is  a Good Laptop which is Super Amazing"<<endl;
//		}
//};
//class C:virtual public A{
//	public:
//		void show(){
//			cout<<"Maya is Kaya"<<endl;
//		}
//};
//class D:public B,public C{
//	void Message(){
//		cout<<"I am using C++ programming language"<<endl;
//	}
//};
//int main(){
//	D d;
//	d.print();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Student{
//	public:
//		int roll_no;
//		string name;
//	public:
//		  void setvalue(int num,string nam){
//			roll_no = num;
//			name = nam;
//			cout<<"The value of the roll number is:"<<roll_no<<endl;
//			cout<<"The name of the Student is:"<<name<<endl;
//		  }
//		
//};
//class Marks:virtual public Student{
//	public:
//		int mar1,mar2;
//	public:
//		void student_marks(int m1 ,int m2){
//			mar1 = m1;
//			mar2 = m2;
//			cout<<"The marks of the student in physics is:"<<mar1<<endl;
//			cout<<"The marks of the student in Mathematics is:"<<mar2<<endl;
//		}
//};
//class Score: virtual public Student{
//	protected:
//		int sco1,sco2;
//	public:	
//	   void student_score(int s1,int s2){
//		sco1 = s1;
//		sco2 = s2;
//		cout<<"The Score in Cricket is:"<<sco1<<endl;
//		cout<<"The Score in Badminton is:"<<sco2<<endl;
//	    }
//		
//};
//class Result:public Marks,public Score{
//	public:
//		void result(){
//			cout<<"The total Score in physics and mathematics is:"<<mar1+mar2<<endl;
//			cout<<"The Total Marks in Sports"<<sco1+sco2<<endl;
//		}
//};
//int main(){
//	Result r;
//	r.setvalue(84,"Suraj Kumar Jha");
//	r.student_score(100,10);
//	r.student_marks(99,84);
//	r.result();
//	return 0;
//} 

//4
#include<iostream>
using namespace std;
class Electronics{
	public:
		string dev1,dev2;
		void Name(string d1,string d2){
			dev1 = d1;
			dev2 = d2;
			cout<<"The name of the first Electronic Device is:"<<dev1<<endl;
			cout<<"The name of the second Electronics Device is:"<<dev2<<endl;
		}
};
class Mobile:virtual public Electronics{
	public:
		int quantity;
		string company;
		string model;
		void mobile_info(int quan,string com,string mo){
			quantity = quan;
			company = com;
			model = mo;
			cout<<"The Quantity of the mobiles is:"<<quantity<<endl;
			cout<<"The name of the mobile is:"<<company<<endl;
			cout<<"The model of the company is:"<<model<<endl;
		}
};
class Laptop: virtual public Electronics{
	public:
		int quantity;
		string company;
		string model;
		void laptop_info(int quan,string com,string mo){
			quantity = quan;
			company = com;
			model = mo;
			cout<<"The Quantity of the laptops is:"<<quantity<<endl;
			cout<<"The name of the laptop is:"<<company<<endl;
			cout<<"The model of the company is:"<<model<<endl;
		}
};
class AI:public Mobile,public Laptop {
	public:
		int model_no;
		string robot_name;
		string country;
		
		void AI_info(string nam,int ai_m,string con){
			robot_name = ai_m;
			model_no = ai_m;
			country = con;
			cout<<"The name of the Robot is:"<<robot_name<<endl;
			cout<<"The model name of the robot is:"<<model_no<<endl;
			cout<<"The name of the country is:"<<country<<endl;
		}
};
int main(){
	AI obj;
	obj.Name("Smartphone","Earphones");
	obj.mobile_info(2,"Apple","Iphone --15");
	obj.AI_info("Vinod",1345,"India");
	return 0;
}

