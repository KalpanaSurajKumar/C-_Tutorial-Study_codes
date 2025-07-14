// Member Functions in C++

// (i) Inside the class
//1
//#include<iostream>
//using namespace std;
//class Area{
//	public:
//		int length = 23;
//		int breadth= 45;
//		void area(void){
//			cout<<"The Area of the Rectangle is:"<<length*breadth<<endl;
//		}
//};
//int main(){
//	Area area1;
//	area1.area();
//	
//	return 0;
//}
//2
//class Factorial{
//	public:
//		int Fact(int num){
//			if(num==0||num==1){
//				return 1;
//				
//			}
//			else{
//				return num*Fact(num-1);
//			}
//			
//		}
//};
//int main(){
//	
//	return 0;
//	
//}

//(ii) Outside the class

//1
//#include<iostream>
//using namespace std;
//class Perimeter{
//	public:
//	 void Square(int);
//	 void Rectangle(int ,int );
//	 void Triangle(int ,int ,int);
//};
//
//void Perimeter::Square(int x){
//	
//	cout<<"The Perimeter of the Square is:"<<x*x<<endl;
//	
//}
//void Perimeter::Rectangle(int x,int y){
//	
//	cout<<"The Perimeter of the Rectangle is:"<<2*(x+y)<<endl;
//}
//	
//void Perimeter::Triangle(int x,int y,int z){
//cout<<"The Perimeter of the Triangle is:"<<(x+y+z)<<endl;
//	
//	
//}
//int main(){
//	Perimeter pe1;
//	pe1.Square(45);
//	pe1.Rectangle(34,83);
//	pe1.Triangle(20,30,10);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Employee{
//		
//		
//	public:
//		void Profession(int);
//		
//		
//};  
//void Employee::Profession(int sal){
//
//			
//			if(sal<10000){
//				cout<<"You are a Labour";
//			}
//			else if(sal>1000 && sal<20000){
//				cout<<"You are a Staff";
//			}
//			
//			else if(sal>20000 && sal<30000){
//				cout<<"you are An Engineer";
//			}
//			
//			else{
//				cout<<"You are a data Scientiest";
//			}
//		} 
//int main(){
//	Employee em1;
//	em1.Profession(50000);
//	return 0;
//}

//Note -- These are two ways to define the class inside or outside

// Nesting of Member Functions
 
//1
//#include<iostream>
//using namespace std;
//class Operation {
//	public:
//		void sum(int x,int y){
//			cout<<"The sum of the numbers is:"<<x+y<<endl;
//		}
//		void product(int x,int y){
//			cout<<"The product of the numbers is:"<<x*y<<endl;
//			// Example of the nesting of functions 
//			sum(x,y);
//		}
//	
//};
//int main(){
//	Operation op1;
//	op1.product(200,300);
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Device{
//	public:
//		void name(string nam){
//			cout<<"The device name is:"<<nam<<endl;
//		}
//		void features(){
//			cout<<"Its color is: Black"<<endl;
//			cout<<"it has 3 cameras"<<endl;
//			cout<<"It has 108 megapixels"<<endl;
//			name("Apple X");
//		}
//		
//};
//int main(){
//	Device Dev1;
//	Dev1.features();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Message{
//	public:
//	  void name(string nam){
//		cout<<"My name is:"<<nam<<endl;
//		salary(35000);
//		
//	}
//	   void salary(int  sal){
//		cout<<"My Salary is:"<<sal<<endl;
//	}
//};
//int main(){
//	Message mes1;
//	mes1.name("Suraj");
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class School{
//	public:
//	 void  course(string name){
//		cout<<"My Course name is:"<<name<<endl;
//	}
//	 void Duration(int time){
//		cout<<"The Duration of this course is:"<<time<<"years"<<endl;
//	}
//	
//	 void Specialization(string naam){
//		cout<<"The Specialization of this course is:"<<naam<<endl;
//		course("BCA");
//		Duration(3);
//
//	}
//};
//int main(){
//	School s1;
//	s1.Specialization("Artificial Intelligence");
//	
//	
//	
//	return 0;
//}

// Getters and Setters in C++

//1
//#include<iostream>
//using namespace std;
//class Encap{
//	private:
//		int number;
//	public:
//	 void setvalue(int num){
//		number = num;
//		
//	}
//     int getvalue(){
//     	return number;
//	 }
//};
//int main(){
//	Encap en1;
//	en1.setvalue(100);
//	int give = en1.getvalue();
//	cout<<"The number is:"<<give;
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Student{
//	private:
//		string name;
//		
//	public:
//		void setname(string str){
//			name = str;
//		}
//		
//		string  getname(){
//			return name;
//			
//			
//		}
//};
//int main(){
//	Student s1;
//	s1.setname("Suraj");
//	cout<<"Your name is:"<<s1.getname();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Color{
//	public:
//		string Name;
//	void setcolor(string nam){
//		Name = nam;
//		}
//		
//	
//	string  getcolor(){
//		return Name;
//	}
//	
//};
//int main(){
//	
//	Color c1;
//	c1.setcolor("Black");
//	string apka = c1.getcolor();
//
//	cout<<"My favourite color is:"<<apka;
//	return 0;
//}

//4
#include<iostream>
using namespace std;
class Vechile{
	private:
		string name;
		string mileage;
		
		
	public:
		void setname(string nam){
			name = nam;
		}
		
		string getname(){
			return name;
		}
		
		
		void setmileage(string nam){
			name = nam;
		}
		
		string getmileage(){
			return name;
		}
};
int main(){
	
	Vechile v1;
	v1.setname("Mercedes");
	cout<<"The name of the car is:"<<v1.getname()<<endl;
	
	v1.setmileage("3000 km");
	
	cout<<"The Quantity of the Mileage is:"<<v1.getmileage()<<endl;
	return 0;
}
