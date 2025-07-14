// Templates with Multi-parameter   (Multi-parameter Templates)
//1
//#include<iostream>
//using namespace std;
//template<class T,class X>
//void show(T x,X m){
//	cout<<"The thing is:"<<x<<endl;
//	cout<<"The object is:"<<m<<endl;
//}
//int main(){
//	show("Suraj",45.345);
//	show("Samosa",56.34543);
//	show("Laptop",345356);
//}

//2
//#include<iostream>
//using namespace std;
//template<class A,class B,class C,class D>
//void show(A a,B b,C c,D d){
//	cout<<"The First thing is:"<<a<<endl;
//	cout<<"The Second thing is:"<<b<<endl;
//	cout<<"The Third thing is:"<<c<<endl;
//	cout<<"The Fourth thing is:"<<d<<endl;
//}
//int main(){
//	show("Suraj",56.345,"Gamer",34453);
//}

//3
//#include<iostream>
//using  namespace std;
//template<class X,class Y,class Z>
//class A{
//	X a;
//	Y b;
//	Z c;
//	public:
//	     A(X x, Y y,Z z){
//		   a = x;
//		   b = y;
//		   c = z;
//		   cout<<"The data 1 is:"<<a<<endl;
//		   cout<<"The data 2 is:"<<b<<endl;
//		   cout<<"The data 3 is:"<<c<<endl;
//		
//	      }
//};
//int main(){
//	A<int,string ,float> obj(40532,"Suraj Kumar Jha",45.343);
//
//	return 0;
//}

//4
#include<iostream>
using namespace std;
template<class X,class Y,class Z>
class Op{
	X a;
	Y b;
	Z c;
	public:
		Op(X i,Y j,Z k){
			a = i;
			b = j;
			c = k;
		}
		void show(){
			cout<<"The value1 is:"<<this->a<<endl;
			cout<<"The value2 is:"<<this->b<<endl;
			cout<<"The value3 is:"<<this->c<<endl;
		}
		
};
int main(){
	Op<string,double,string>obj("Suraj Kumar Jha",355.353,"Delhi Mumbai Himachal");
	Op<int ,string,double> obj2(34,"Gamming",34.34343);
	obj2.show();
	obj.show();
	
}
