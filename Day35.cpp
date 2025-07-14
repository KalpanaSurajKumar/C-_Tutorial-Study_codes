// Destructors in C++
//1
//#include<iostream>
//using namespace std;
//class Main{
//	public:
//		Main(){
//			cout<<"The object is Created"<<endl;
//		}
//        ~Main(){
//        	cout<<"The Destructor is Called"<<endl;
//		}
//};
//int main(){
//	Main m;
//	return 0;
//	
//}

//2
//#include<iostream>
//using namespace std;
//class Sum{
//	int a;
//	int b;
//	public:
//		Sum(int x,int y){
//			a = x;
//			b = y;
//			cout<<"The sum of these numbers is:"<<a+b<<endl;
//		}
//		~Sum(){
//			cout<<"The Object is destroyed"<<endl;
//		}
//};
//int main(){
//	Sum s(100,200);
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Car{
//	public:
//		Car(){
//			cout<<"I buyed a car"<<endl;
//		}
//	    ~Car(){
//	    	cout<<"Getout this car is destroyed"<<endl;
//		}
//};
//int main(){
//	Car c;
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Product{
//	string name;
//	public:
//		Product(string nam){
//			name = nam;
//			
//		}
//		
//	   ~Product(){
//	   	cout<<"Now these object is being destroyed"<<endl;
//	   	
//	   }
//	   
//	   void display(void){
//	   	cout<<"The name is:"<<name<<endl;
//	   }
//};
//int main(){
//	Product P("Suraj");
//	P.display();
//	return 0;
//}

5
#include<iostream>
using namespace std;
class Product{
	int x;
	int y;
	public:
	  Product(int a,int b){
		x = a;
		y = b;
		
	   }
	  ~Product(){
		cout<<"The sum of these values is:"<<x+y<<endl;
	}
	void print(){
		cout<<"The product of these two numbers"<<x*y<<endl;
	}
};
int main(){
	Product P(100,200);
	P.print();
	return 0;

