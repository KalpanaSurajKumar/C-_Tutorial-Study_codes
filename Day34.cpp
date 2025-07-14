// Copy Constructors in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	int a,b;
//	public:
//		A(int x,int y){  // Simple Constructor
//			a = x;
//			b = y;
//		}
//		
//		A(A & ref){
//			a = ref.a;
//			b = ref.b;
//		}
//		void show(void){
//			cout<<"The value of a is:"<<a<<endl;
//			cout<<"The value of b is:"<<b<<endl;
//		}
//		
//};
//int main(){
//	A m(10,20);
//	m.show();
//	A n = m;
//	
//	A k(m);
//	k.show();
//	n.show();
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Marks{
//	int e;
//	int f;
//	public:
//		Marks(int a,int b){
//			e = a;
//			f = b;
//		}
//		
//		Marks(Marks & M){
//			e = M.e;
//			f = M.f;
//		}
//		
//		void Display(void){
//			cout<<"The value of e is:"<<e<<endl;
//			cout<<"The value of f is:"<<f<<endl;
//			cout<<"\n\n\n";
//		}
//};
//int main(){
//	Marks m(100,200);
//	Marks n(m);
//	m.Display();
//	n.Display();
//	
//    Marks t(m);
//    t.Display();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class some{
//	int a;
//	int b;
//	public:
//	   some(int x,int y){
//		a = x;
//		b = y;
//	     }
//	   some(some & ref){
//		a = ref.a;
//		b = ref.b;
//	     }
//	   sum(void){
//		cout<<"The sum of these number is:"<<a+b<<endl;
//		cout<<"The product of these numbers is:"<<a*b<<endl;
//	}
//};
//int main(){
//	some s(500,100);
//	s.sum();
//	some n(s);
//	n.sum();
//	
//	some f(25,40);
//	f.sum();
//	
//	some t(f);
//	t.sum();
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//class last{
//	string name;
//	public:
//	   last(string n){
//		  name = n;
//		
//	   }
//	    last(last & ref ){
//		name = ref.name;
//	    }
//	
//	   void print(void){
//		cout<<"Your name is:"<<name<<endl;
//	  }
//};
//int main(){
//	last l("Suraj");
//	l.print();
//	
//	last p("Maya");
//	p.print();
//	
//	last e(p);
//	p.print();
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class A{
//		int id;
//		public:
//			A(int ad){
//				id = ad;
//			}
//			
//			A(A & ref){
//				id = ref.id;
//			}
//			
//			void show(void){
//				cout<<"The id of the student is :"<<id<<endl;
//			}
//		
//	};
//int main(){
//	A a(200);
//	a.show();
//	
//	A k =a;
//	k.show();
//	
//	A t = a;
//	t.show();
//	
//	A g = a;
//	a.show();
//	return 0;
//	
//	}

//6
#include<iostream>
using namespace std;
class Main{
	int a;
	int b;
	public:
		Main(int x,int y){
			a =x;
			b = y;
			
		}
		
		void product(void){
			cout<<"The product of these numbers is:"<<a*b<<endl;
		}
		
};
int main(){
	Main m(100,200);
	m.product();
	Main n = m;
	n.product();
	return 0;
}


