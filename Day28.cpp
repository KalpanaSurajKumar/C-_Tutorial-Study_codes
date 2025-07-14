// More on friend funtions in C++
//1
//#include<iostream>
//using namespace std;
//class B;
//class A{
//	int x;
//	public:
//		void setvalue(int s){
//			x = s;
//		}
//	friend void Adder(A,B);
//};
//class B{
//	int y;
//	public:
//		void setvalue(int u){
//		y = u;	
//		}
//		friend void Adder(A,B);
//	
//};
//void Adder(A a1 ,B b1){
//	cout<<"The sum of these numbers is:"<<a1.x + b1.y<<endl;
//}
//int main(){
//	int a ,b;
//	A a1;
//	B b2;
//
//	cout<<"Enter the two numbers respectively:"<<endl;
//	cin>>a>>b;
//	a1.setvalue(a);
//	b2.setvalue(b);
//	Adder(a1,b2);
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Pera{
//	int x;
//	public:
//		void setvalue(int k){
//			x= k;
//		}
//		friend class Pera2;
//};
//class Pera2{
//	int y;
//	public:
//		void setvalue(int t){
//			y = t;
//			
//		}
//		void product(Pera p1, Pera2 p2){
//		cout<<"The product of these numbers is:"<<p1.x*p2.y<<endl;	
//		}
//		
//	
//};
//int main(){
//	int x,y;
//	cout<<"Enter the two numbers respectively:"<<endl;
//	cin>>x>>y;
//	Pera px;
//	Pera2 py;
//	px.setvalue(x);
//	py.setvalue(y);
//	py.product(px,py);
//	
//	return 0;
//}

//3
#include<iostream>
using namespace std;
class Sat{
	int i = 100, j= 200;
	public:
		void getvalue(void){
			cout<<"The value of i is:"<<i<<endl;
			cout<<"The value of j is:"<<j<<endl;
		}
		friend void changer(Sat &,Sat &);

};
void changer(Sat &s,Sat &){
  int temp = s.i;
  s.i = s.j;
  s.j = temp;
	
}
int main(){
	Sat s1;
	Sat s2;
	s1.getvalue();
	changer(s1,s2);
	s1.getvalue();
	return 0;
}

