// Overloading Function Templates
//1
//#include<iostream>
//using namespace std;
//template<class T>
//void show(T t){
//	cout<<"I have only one parameter"<<endl;
//}
//template<class T,class V>
//void show(T t,V v){
//	cout<<"I am have two parameters"<<endl;
//}
//int main(){
//	show(4);
//	show(4,5);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//template<class T , class U>
//void info(T t, U u){
//	cout<<"The First thing is:"<<t<<endl;
//	cout<<"The second thing is:"<<u<<endl;
//}
//template<class X, class Y ,class Z>
//void info(X x, Y y,Z z){
//	cout<<"The king thing first is:"<<x<<endl;
//	cout<<"The king thing second is:"<<y<<endl;
//	cout<<"The king thing third is:"<<z<<endl;
//}
//template<class A, class B, class C, class D>
//void info(A a, B b,C c,D d){
//	cout<<"The First Boss is:"<<a<<endl;
//	cout<<"The second Boss is:"<<b<<endl;
//	cout<<"The Third Boss is:"<<c<<endl;
//	cout<<"The Fourth Boss is:"<<d<<endl;
//}
//	
//int main(){
//	info(4,6);
//	info("Suraj","King","His");
//	info("Notebook","Pencil","House","Laptop");
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//template<class X>
//void dekho(X x){
//	cout<<"The model 1 is :"<<x<<endl;
//}
//template<class X,class Y>
//void dekho(X x,Y y){
//	cout<<"The model 1 is :"<<x<<endl;
//	cout<<"The model 2 is :"<<y<<endl;
//}
//template<class X,class Y,class Z>
//void dekho(X x,Y y,Z z){
//	cout<<"The model 1 is:"<<x<<endl;
//	cout<<"The model 2 is:"<<y<<endl;
//	cout<<"The model 3 is:"<<z<<endl;
//}
//int main(){
//	dekho(56);
//	dekho("Suraj","Maya");
//	dekho(783,"Gamer",45.3454);
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//template<class X>
//void dev(X x){
//	cout<<"The value of x is:"<<x<<" which is a template"<<endl;
//}
//template<class X,class Y>
//void dev(X x,Y y){
//	cout<<"The value of x is:"<<x<<endl;
//	cout<<"The value of y is:"<<y<<endl;
//}
//void dev(int x){
//	cout<<"The value of x is:"<<x<<" which is non-template function"<<endl;
//}
//template<class X ,class Y ,class Z >
//void dev(X x,Y y ,Z z){
//	cout<<"The value of x is:"<<x<<endl;
//	cout<<"The value of y is:"<<y<<endl;
//	cout<<"The value of z is:"<<z<<endl;
//}
//
//int main(){
//	dev(45);
//	return 0;
//}
//5
#include<iostream>
using namespace std;
template<class X>
void print(X x){
	cout<<"The value of x which is temp is:"<<x<<endl;
}
template<class X,class Y>
void print(X x,Y y){
	cout<<"The value of x which is 2nd function is:"<<x<<endl;
	cout<<"The value of y which is 2nd function is:"<<y<<endl;	
}
void print(int x,int y){
	cout<<"The sum of the numbers is:"<<x+y<<endl;
}

template<class X,class Y,class Z>
void print(X x,Y y,Z z){
	cout<<"The value of x which is 3rd function is:"<<x<<endl;
	cout<<"The value of y which is 3rd function is:"<<y<<endl;
	cout<<"The value of z which is 3rd function is:"<<z<<endl;
}

int main(){
	print(20,30);
	print("Suraj","Laptop","Delhi");
	print("Maya");
	return 0;
}
