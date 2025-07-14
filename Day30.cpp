// Default and parameterized Constructors in C++

// Default Constructors 
//1
//#include<iostream>
//using namespace std;
//class value{
//	public:
//	 value(){
//		cout<<"Hello world"<<endl;
//	   }
//};
//int main(){
//	value v;
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Number{
//	int x;
//	int y;
//	public:
//	   Number(){
//		x = 400;
//		y = 800;
//		cout<<"The value of x is:"<<x<<endl;
//		cout<<"The value of y is:"<<y<<endl;
//	    }
//};
//int main(){
//	Number N;
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//  class Print{
//  	public:
//	    Print(){
//		cout<<"This is Suraj Kumar Jha"<<endl;
//		cout<<"What to understand the universe"<<endl;
//		cout<<"Think about the behaviour of the universe"<<endl;
//	     }
//};
//int main(){
//	Print p;
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Coordinates{
//	int x;
//	int y;
//	int z;
//	public:
//	 Coordinates(void);
//	 void print();
//};
//Coordinates::Coordinates(){
//	x = 200;
//	y = 300;
//	z = 100;
//}
//void Coordinates::print(){
//	cout<<"The value of x is:"<<x<<endl;
//	cout<<"The value of y is:"<<y<<endl;
//	cout<<"The value of z is:"<<z<<endl;
//}
//
//int main(){
//	Coordinates C;
//	C.print();
//	return 0;
//}

// Parameterized Constructors 
//1
//#include<iostream>
//using namespace std;
//class Coordinates{
//	public:
//		int x;
//		int y;
//		Coordinates(int a, int b){
//			x = a;
//			y = b;
//			cout<<"The Coordinates are:("<<a<<","<<b<<")"<<endl;
//		}
//};
//int main(){
//	Coordinates C(100,200);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Student{
//	public:
//	  int marks;
//	  string name;
//	  string fav_sub;
//	  Student( int m,string n,string f){
//	  	marks = m;
//	  	name = n;
//	  	fav_sub = f;
//	  	cout<<"The name of the Student is:"<<name<<endl;
//	  	cout<<"The Marks obtained by the Student is:"<<marks<<endl;
//	  	cout<<"The Favourite subject of the Student is:"<<fav_sub<<endl;
//	  	
//	  }
//};
//int main(){
//	Student S(456,"Suraj","Mathematics");
//	cout<"\n\n\n";
//	Student K = Student(100,"Maya","Physics");
//	
//	
//
//	
//	
//	return 0;
//}
//3
#include<iostream>
using namespace std;
//class Car{
//	public:
//		int mileage;
//		string model;
//		string company;
//		
//		Car(int m,string mo,string c){
//			mileage = m;
//			model = mo;
//			company = c;
//			cout<<"The name of the model is:"<<model<<endl;
//			cout<<"The mileage of the Car is:"<<mileage<<"mhp"<<endl;
//			cout<<"The name of the company is:"<<company<<endl;
//			
//		}
//};
//int main(){
//	Car c(578,"revelto","Lamborgini");
//	return 0;
//}


// quiz question
#include<iostream>
#include<cmath>
using namespace std;
class Distance{
	int x;
	int y;
	public:
		Distance(int a,int b){
			x = a;
			y = b;
		}
		
		friend void  D_cal(Distance,Distance);
};
void D_cal(Distance d1,Distance d2){
	int  i = pow((d2.x-d1.x),2);
	int  j = pow((d2.y-d1.y),2);
	int f = i+j;
	cout<<"The Distance between this coordinates are:"<<sqrt(f)<<" Units"<<endl;
	
}


int main(){
	Distance d1(10,0);
	Distance d2(2,0);
	D_cal(d1,d2);
	
	return 0;
}
