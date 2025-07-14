// Ambiguity Resolution in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		void info(){
//			cout<<"My Name is Suraj Kumar Jha"<<endl;
//		}
//};
//class B{
//	public:
//		void info(){
//			cout<i<"Hey This is Maya"<<endl;
//		}
//};
//class C:public A,public B{
//	public:
//	  void say(){
//	  	cout<<"This is something"<<endl;
//		
//	    }
//};
//
//int main(){
//	C obc;
//	obc.info();   // This Causes an ambigous Error --- As the compiler get confused 
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		void greet(){
//			cout<<"Hey, Hello Good Morning"<<endl;
//		
//		}
//			
//};
//class B{
//	public:
//		void greet(){
//			cout<<"Hey, Hello Good Evening"<<endl;
//		}
//		
//};
//class C:public A,public B{
//	
//};
//int main(){
//	C ob;
//	ob.A::greet();
//	ob.B::greet();
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int x;
//		void display(int  j){
//			x = j;
//			cout<<"The number is:"<<x<<endl;
//		}
//};
//class B{
//	public:
//		int y;
//		void display(int k){
//			y = k;
//			cout<<"The second number is:"<<y<<endl;
//			
//		}
//};
//class C:public A,public B{
//	public:
//		void sum(){
//			cout<<"The sum of these numbers is:"<<x+y<<endl;
//		}
//};
//int main(){
//	C obj;
//	obj.A::display(25);
//	obj.B::display(35);
//	obj.sum();
//	return 0;
//}
//4
#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
		void sum(int a,int b){
			x = a;
			y =b;
			cout<<"The sum of these numbers is:"<<x+y<<endl;
		}
};
class B{
	public:
		int c,d,e;
		void sum(int m,int n,int o){
			c = m;
			d = n;
			e = o;
			cout<<"The sum of these numbers is:"<<c+d+e<<endl;
		}
};

class C:public A,public B{
	public:
		void print(){
			cout<<"Hello Everyone, My name is Suraj Kumar"<<endl;
		}
};
int main(){
	C obj;
	obj.A::sum(10,20);
	obj.B::sum(50,70,30);
	
	// note -- yaad rakhna ki agar hame ambigious Error ko resolve karna hai 
	// to har function ke sath class ka name bhi lihenge -- obj.A::sum();	

	return 0;
}
