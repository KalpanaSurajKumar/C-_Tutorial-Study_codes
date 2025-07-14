// Method Overloading in C++
//1
//#include<iostream>
//
//using namespace std;
//void name(string nam){
//	cout<<"Your name is:"<<nam<<endl;
//}
//void name(string nam,string course){
//	cout<<"Your name is:"<<nam<<" and your course "<<course;
//}
//int main(){
//	name("Suraj");
//	name("Kalpana","Computer Applications");
//	return 0;
//}
//2
//#include<iostream>
//using namespace std;
//int sum(int x,int y){
//	return x+y;
//}
//int sum(int x,int y,int z){
//	return x+y+z;
//}
//
//double sum(double x,double y,double z){
//	return x+y;
//}
//int main(){
//	int num = sum(10,30);
//	cout<<"The sum of the number is:"<<num<<endl;
//	
//	int nam = sum(100,200,300);
//	cout<<"The sum of the numbers is:"<<nam<<endl;
//	
//	double dak = sum(34.4554,84.45433,98.7454345);
//	cout<<"The sum of the numbers is:"<<dak<<endl;
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//void Area(int x,int y){
//	cout<<"The Area of the Rectangle is:"<<x*y<<endl;
//}
//
//void Area(double x){
//	cout<<"The  Area of the Circle is:"<<3.14*x*x<<endl;
//}
//
//void Area(int x){
//	cout<<"The Area of the Square is:"<<x*x<<endl;
//}
//int main(){
//	Area(8.455);
//	Area(10);
//	Area(5,3);
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//void Product(int x ,float y){
//	cout<<"The Product of the number is:"<<x*y<<endl;
//		
//}
//void Product(float x ,int y){
//	cout<<"The Sum of the numbers is:"<<x+y<<endl;
//}
//int main(){
//	Product(100,24.340);
//	Product(24.340,100);
//	
//	
//}

//5
//#include<iostream>
//using namespace std;
//void Mess(){
//cout<<"My name is Suraj Kumar Jha and want to learn everthing of software engineering"<<endl;
//
//}
//
//void Mess(string name){
//	cout<<"My name is :"<<name<<" and i want to learn Everthing of AI Engineering"<<endl;
//}
//int main(){
//	Mess();
//	Mess("Suraj Jha");
//	return 0;
//}

//6
//#include<iostream>
//using namespace std;
////int sum(int x,int y){
////	return x+y;
////}
//double sum(double x,double y){
//	return x+y;
//}
//int main(){
//	cout<<sum(100,200);
////	cout<<sum(566.455,45.4554345);
//	return 0;
//}

//7
//#include<iostream>
//using namespace std;
//int Adder(int x ,int y,int z){
//	return x+y+z;
//}
//double Adder(double x,double y,double z){
//
//return x+y+z;
//}
//
//int Adder(int x,int y){
//	return x+y;
//}
//
//double Adder(int x ,double y){
//	return x+y;
//}
//
//double Adder(double x ,int y){
//	return x+y;
//}
//
//int main(){
//	cout<<Adder(100,200);
//	cout<<Adder(445,32.3243);
//	return 0;
//}

//8
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		void sum(int a,int b){
//			cout<<"The sum of the numbers is:"<<a+b<<endl;
//		}
//		
//		void sum(double a,double b){
//			cout<<"The sum of the numbers is:"<<a+b<<endl;
//		}
//};
//int main(){
//	A obj;
//	obj.sum(10,20);
//	obj.sum(15.4453,124.45434);
//	
//	return 0;
//}

//9
//#include<iostream>
//using namespace std;
//class Main{
//	public:
//		int num(int x,int y){
//			return x*y;
//		}
//		
//		int num(double x,int y){
//			return x*y;
//		}
//		
//		
//};
//int main(){
//	Main obj;
//	cout<<obj.num(100,200)<<endl;
//	cout<<obj.num(445.34,300)<<endl;
//	return 0;
//}

//10
//#include<iostream>
//using namespace std;
//void num(string name,string course){
//	cout<<"My name is:"<<name<<" "<<"and my course is:"<<course<<endl;
//}
//
//void num(string name,int course){
//cout<<"My name is:"<<name<<" "<<"and my course is:"<<course<<endl;
//}
//int main(){
//	num("Suraj Kumar Jha","BCA");
//	num("Suraj",55);
//	
//	return 0;
//}

// Function Overloading ambiguity(3)
//1
//#include<iostream>
//// Ambigous problem 1
//using namespace std;
//void num(int a){
//	cout<<"My favourite number is:"<<a<<endl;
//}
//
//void num(int &a){
//	cout<<"My favourite ank is:"<<a<<endl;
//}
//int main(){
//	int s = 500;
//	num(s);
//	num(800);
//	return 0;
//}

//2
#include<iostream>
using namespace std;
void num(int a){
	cout<<"My favourite integer number is:"<<a<<endl;
}

void num(float a){
	cout<<"My favourite integer number is:"<<a<<endl;
}
int main(){
	num(45.4554f);
	return 0;
}

//3
//#include<iostream>
//using namespace std;
//int main(){
//	
//	return 0;
//}

