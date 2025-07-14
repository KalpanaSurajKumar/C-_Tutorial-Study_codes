// Constructor Overloading in C++
//1
//#include<iostream>
//using namespace std;
//class Value{
//	int x;
//	public:
//		Value(){
//			cout<<"The value is unknown i can't understand"<<endl;
//		}
//		Value(int num){
//			x = num;
//			cout<<"The value of the number is:"<<x<<endl;
//		}
//};
//int main(){
//	Value v;
//    Value y(2400);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Names{
//	public:
//		Names(string na){
//			cout<<"My name is:"<<na<<endl;
//		}
//		Names(string first,string last){
//			cout<<"My first name is:"<<first<<endl;
//			cout<<"My last name is:"<<last<<endl;
//		}
//	
//};
//int main(){
//	Names na("Suraj");
//	Names na1("Maya","Singh");
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Operation{
//	
//	public:
//		Operation(int x){
//			cout<<"The number is:"<<x<<endl;
//		}
//		Operation(int x,int y){
//			cout<<"The sum of the numbers is:"<<x+y<<endl;
//		}
//		Operation(int x,int y,int z){
//			cout<<"The product of these numbers is:"<<x*y*z<<endl;
//		}
//	
//};
//int main(){
//	Operation o(34);
//	Operation x(93);
//	Operation m(40,60);
//	Operation t(40,30,10);
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Main{
//	public:
//	   Main(){
//	 	  cout<<"This is somethings in that is good in this is good in that is somethings"<<endl;
//	         }
//	   Main(int x,int y){
//	 	  cout<<"The product of these numbers is:"<<x*y<<endl;
//	 	
//	       }
//	       
//	    Main(float x,int y){
//	    	cout<<"The sum of these numbers is:"<<x+y<<endl;
//		}
//	 
//};
//int main(){
//	Main m;
//	Main M(100,200);
//	Main t(34.45f,455);
//	return 0;
//}

//5
#include<iostream>
using namespace std;
class Maya{
	public:
		Maya(int side){
			cout<<"The Area of Square is:"<<side*side<<endl;
		}
		Maya(int x,int y){
			cout<<"The Area of the Rectangle is:"<<x*y<<endl;
		}
		Maya(double radius){
			cout<<"The Area of the Circle is:"<<(3.14*radius*radius)<<endl;
		}
}; 
int main(){
	Maya m(34);
	Maya k(32,85);
	Maya r(45.45);
return 0;	
}


