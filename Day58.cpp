// virtual functions and Abstract Base class in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		virtual void show() = 0;
//		void display(){
//			cout<<"Hi, My name is A and I am a Base Class"<<endl;
//		}
//};
//class B:public A{
//	public:
//		void show(){
//			cout<<"Hi,My name is B and I am a Derived Class"<<endl;
//		}
//	
//};
//int main(){
//	A *pa;
//	B b;
//	pa = &b;
//	pa->show();
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int num = 100; 
//		virtual void show() = 0;
//		void display(){
//			cout<<"My favourite number is :"<<num<<endl;
//		}
//};
//class B{
//	public:
//		int ga = 5000;
//		void show(){
//			cout<<"My name is B. I am a derived class"<<endl;
//		}
//		void dekha(){
//			cout<<"My Derived favourite number is :"<<ga<<endl;
//		}
//};
//int main(){
//	A ax;
//	ax.display();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Animal{
//	public:
//		string name;
//		virtual void show() = 0;
//		void display(){
//			name = "Kalpana Jha";
//			cout<<"My Base class name is:"<<name<<endl;
//		}
//};
//class Dog:public Animal{
//	public:
//		string g_name = "FreeFire";
//		string name2 = "Suraj Jha";
//		void gamer(){
//			cout<<"My favourite game is :"<<g_name<<endl;
//		}
//		void show(){
//			cout<<"My Derived class name is:"<<g_name<<endl;
//		}
//};
//int main(){
//	Animal *ptr;
//	Dog D;
//	ptr = &D;
//	ptr->display();
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Computer {
//	public:
//		string name= "Mac-Book";
//		void display(){
//			cout<<"My Computer name is:"<<name<<endl;
//		}
//		virtual void show() = 0;
//};
//class Keyword:public Computer{
//	public:
//		string name = "Apple";
//		void info(){
//			cout<<"My Keyboard company is :"<<name<<endl;
//			
//		}
//		void show(){
//			cout<<"Hey I am a derived class and my name is Keyword"<<endl;
//		}
//};
//int main(){
//	Computer * Cr;
//	Keyword ka;
//	Cr = & ka;
//	Cr->show();
//	return 0;
//}

//5
#include<iostream>
using namespace std;
		class A{
			public:
				int num = 400;
				virtual void give(int m,int y) = 0;
				void display(){
					cout<<"My Favourite number is:"<<num<<endl;
				}
		};
		class B:public A{
			public:
				int luck = 5;
//				int x = 400;
//				int y = 500;
				void give(int x,int y){
					cout<<"The sum of these numbers is :"<<x+y<<endl;
				}
				void see(){
					cout<<"My Lucky number is :"<<luck<<endl;
				}
		};
		int main(){
		
		A *ptr;
		B ba;
		ptr = &ba;
		ptr->give(60,40);
	return 0;
}
