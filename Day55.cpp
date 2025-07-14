// Pointers to derived class
//1
//#include<iostream>
//using namespace std;
//	class A{
//		public:
//			int num = 4000;
//			void display(){
//				cout<<"The value of the number is :"<<num<<endl;
//			}
//	};
//	
//class B:public A{
//		public:
//			int Derived_num = 100;
//			void display(){
//				cout<<"The value of the number is :"<<Derived_num<<endl;
//			}
//	};
//	
//int main(){
//	A obj;
//	B oB;
//	A *ptr = &oB;
//	ptr->display();
//	ptr->num = 5000;
//	ptr->display(); 
//	return 0;
//} 

//2
//#include<iostream>
//using namespace std;
//class Father{
//	public:
//		string f_name= "Universe";
//		void show(){
//			cout<<"I am the base class"<<endl;
//			cout<<"The name of the father is:"<<f_name<<endl;
//		}
//};
//class Son:public Father{
//	public:
//		string S_name = "Suraj Kumar Jha";
//		void show(){
//			cout<<"The name of the student is:"<<S_name<<endl;
//		}
//};
//int main(){
//	Father F;
//	Son S;
//	Father *pf = &S;
//	pf->show();
//	(*Son)pf;
//	pf->show();
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//class Animal{
//  public:
//  	string name = "Dog";
//  	void info(){
//  		cout<<"The name of the Specifies is:"<<name<<endl;
//	  }
//};
//class Human:Animal{
//	public:
//		string name = "Suraj";
//		void info(){
//			cout<<"The name of the person is:"<<name<<endl;
//		}
//};
//int main(){
//	Human H;
//	Animal A;
//	Human *px = &H;
//	px->info();
//	
//	return 0;
//}
//4
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
	class A{
		public:
			int numx = 4000;
			int numy = 6000;
			void sum(){
				cout<<"The value of the number is :"<<numx+numy<<endl;
			}
	};
	
class B:public A{
		public:
			int num_1 = 100;
			int num_2 = 400;
			void product(){
				cout<<"The value of the number is :"<<num_1*num_2<<endl;
			}
	};
	
int main(){
	A obj;
	B oB;
	A *ptr = &oB;
	ptr->sum();

	return 0;
} 

