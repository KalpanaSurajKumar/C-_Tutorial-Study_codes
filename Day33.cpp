// Dynamic Initialzation of objects using Constructors in C++

//1
//#include<iostream>
//using namespace std;
//class Number{
//	int x;
//	float y;
//	public:
//	Number(){}
//	Number(int x){
//		cout<<"The integer  number is:"<<x<<endl;
//		
//	}
//	Number(float y){
//		cout<<"The float number is:"<<y<<endl;
//	}
//};
//int main(){
//	int x;
//	float y;
//	cout<<"Enter the integer and float values respectively: ";
//	cin>>x>>y;
//	Number n1,n2,n3;
//	n3 = Number(x);
//	n2 = Number(y);
////3
//	return 0;
//	
//}

//2
//#include<iostream>
//using namespace std;
//class Operation{
//	int x,y;
//	float a,b;
//	public:
//	Operation(){}
//	Operation(int num1,int num2){
//		x = num1;
//		y = num2;
//		cout<<"The product of these two integer numbers "<<x<<" and "<<y<<" is:"<<x*y<<endl;
//	
//	}
//	Operation(float num3,float num4){
//		a = num3;
//		b = num4;
//		cout<<"The product of these two float numbers "<<a<<" and"<<b<<" is:"<<a*b<<endl;
//		
//	}
//};
//int main(){
//	Operation obj1,obj2,obj3;
//	int i1,i2;
//	float f1,f2;
//	cout<<"Enter the two integers respectively"<<endl;
//	cin>>i1>>i2;
//	cout<<"Enter the two float numbers respectively"<<endl;
//	cin>>f1>>f2;
//	obj1 = Operation(i1,i2);
//	obj2 = Operation(f1,f2);
//	
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Marks{
//	int m1,m2,m3,m4;
//	float per;
//	public:
//		Marks(){}
//		Marks(int a,int b){
//			m1 = a;
//			m2 = b;
//			per = (a+b)/2;
//			cout<<"The average of these two numbers is:"<<per<<endl;
//		}
//		Marks(int a,int b,int c){
//			m1 = a;
//			m2 = b;
//			m3 = c;
//			per = (m1+m2+m3)/3;
//			cout<<"The average of these 3 numbers is:"<<per<<endl;
//		}
//		
//		Marks(int a,int b,int c,int d){
//			m1 = a;
//			m2 = b;
//			m3 = c;
//			m4 = d;
//			per = (m1+m2+m3+m4)/4;
//			cout<<"The average of these 4 numbers is:"<<per<<endl;
//			
//		}
//};
//int main(){
//	Marks m1,m3,m4;
//	int a,b,c,d,e;
//	cout<<"Enter the total numbers you find the average:"<<endl;
//	cin>>e;
//	cout<<"Enter atleast two numbers:"<<endl;
//	if(e == 2){
//		cin>>a>>b;
//		m1 = Marks(a,b);
//		
//	}
//	
//	else if(e == 3){
//		cin>>a>>b>>c;
//		m3 = Marks(a,b,c);
//	}
//	
//	else if(e == 4){
//		cin>>a>>b>>c>>d;
//		m4 = Marks(a,b,c,d);
//	}
//	
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class  Area{
//	int x,y;
//	float z;
//	public:
//		Area(){}
//		Area(int i1,int i2){
//			x = i1;
//			y = i2;
//			cout<<"The Area of the Rectangle is:"<<x*y<<endl;
//			
//				}
//				
//		Area(int i1,int i2,float fl){
//			x = i1;
//			y = i2;
//			z = fl;
//			cout<<"The area of the special figure is:"<<x*y*z<<endl;
//			
//		}
//		
//
//};
//int main(){
//	Area a1,a2;
//	a1 = Area(10,30);
//	a2 = Area(34,10,78.67);
//	
//	return 0;
//}
//6
#include<iostream>
using namespace std;
class Perimeter{
	int x,y;
	double r;
	public:
	  Perimeter(){}
	  Perimeter(int a,int b){
		x = a;
		y = b;
		cout<<"The Perimeter of the Rectangle is:"<<2*(a+b)<<endl;
		
	     }
	Perimeter(double radius){
		r = radius;
		cout<<"The Circumference of  the Circle is:"<<(2*3.14*r)<<endl;
	}
};
int main(){
	float num;
	int a;
	int b;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	Perimeter p = Perimeter(num);
	
	cout<<"Enter the numbers:"<<endl;
	cin>>a>>b;
	Perimeter x = Perimeter(a,b);
	return 0;
}
