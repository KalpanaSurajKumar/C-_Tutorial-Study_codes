// Templates in C++
// Function Template
//1
//#include<iostream>
//using namespace std;
//template <class T>
//void print(T a,T b){
//	cout<<"The Thing is:"<<a<<endl;
//	cout<<"The second Thing is:"<<b<<endl;
//}
//int main(){
//	print(100,300);
//	print(56.34,89.34);
//	print("Suraj","Kalpana");
//	print(50.343435,56.33424455);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//template <class T>
//void likho(T a,T b){
//	cout<<"The Thing is:"<<a<<endl;
//	cout<<"The Thing is:"<<b<<endl;
//}
//int main(){
//	int x = 400;
//	int y = 500;
//	string m = "Suraj Kumar Jha";
//	string n = "Delhi";
//	likho(x,y);
//	likho(m,n);
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//template <class S>
//void add(S numx,S numy){
//	cout<<"The object is:"<<numx<<endl;
//	cout<<"The second object is:"<<numy<<endl;
//}
//int main(){
//	add(4000,5000);
//	add(50.342,45.2445);
//	add("Suraj","Game");
//	add( "Think","Space");
//	return 0;
//}

// Class Template
//1
//#include<iostream>
//using namespace std;
//template <class T>
//class A{
//	T a, b;
//	public:
//		void print(T n1,T n2){
//			a = n1;
//			b = n2;
//			cout<<"The thing is: "<<a<<endl;
//			cout<<"The second thing is:"<<b<<endl;
//		}
//		
//};
//int main(){
//	A<int> obj;
//	obj.print(30,34);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//template<class T>
//class Employee{
//	T name;
//	T name2;
//	T name3;
//	public:
//		void Sumer(T n1,T n2,T n3){
//			name = n1;
//			name2 = n2;
//			name3 = n3; 
//			cout<<"The name is:"<<name<<endl;
//			cout<<"The name2 is:"<<name2<<endl;
//			cout<<"The name3 is:"<<name3<<endl;
//		}
//	
//};
//int main(){
//	Employee<int> obj;
//	Employee<string> obx;
//	Employee<double> tx;
//	obj.Sumer(100,200,300);
//	obx.Sumer("Suraj","Kalpana","Laptop");
//	tx.Sumer(56.4454,34.34322,34.3433456);
//	return 0;
//}

//3
#include<iostream>
using namespace std;
template<class T>
class Vector{
   T a, b,c ,d;
   public:
   	void add(T w,T x,T y,T z){
   		a = w;
   		b = x;
   		c = y;
   		d = z;
   		cout<<"The sum of the numbers is:"<<a+b+c+d<<endl;
   		cout<<"now you know the class template"<<endl;
	   }
   
};
int main(){
	Vector <int> obj;
	Vector <double> obj2;
	obj.add(500,1500,2000,3000);
	obj2.add(34.344,87.344,23.23,34.21);
	
	return 0;
}
