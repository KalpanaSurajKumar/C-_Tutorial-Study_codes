// Function Templates
//1
//#include<iostream>
//using namespace std;
//template<class T,class X,class Y>
//void sum(T x,X y,Y z){
//	cout<<"The sum of the numbers is:"<<x+y+z<<endl;
//}
//int main(){
//	sum(30,40,80);
//	sum(45.34543,60.345323434,326.4555644);
//	sum(556.34323,34543.454,64.345345);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//template<class X,class Y,class Z>
//void product(X x,Y y,Z z){
//	cout<<"The product of the numbers is:"<<x*y*z<<endl;
//}
//int main(){
//	product(30,40,68);
//	product(78.334,34.345,83.34);
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//template<class T,class U>
//void info(T t,U u){
//	cout<<"The First thing is:"<<t<<endl;
//	cout<<"The second thing is:"<<u<<endl;
//}
//
//int main(){
//	info("Suraj","Kalpana");
//	info(300,400);
//	info(34.345,56.3456);
//	return 0;
//}

//4
#include<iostream>
using namespace std;
template< class X ,class Y , class Z>
void chase( X a,Y b, Z c){
	cout<<"The First object is:"<<a<<endl;
	cout<<"The Second object is:"<<b<<endl;
	cout<<"The Third object is:"<<c<<endl;
}
int main(){
chase("Suraj","Kalpana","Laptop");
	return 0;
}
