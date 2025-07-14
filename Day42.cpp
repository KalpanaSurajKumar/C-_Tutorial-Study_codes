// Exercise in C++ 

// here multiple inheritence is used

#include<iostream>
#include<cmath>
using namespace std;
class Simple_Calculator{
	public:
		int x,y;
		
	public:
		void sum(int a ,int b){
			x = a;
			y = b;
			cout<<"The sum is:"<<(x+y)<<endl;
		}
		
		void subtract(int a ,int b){
			x = a;
			y = b;
			cout<<"The difference  is:"<<(x-y)<<endl;
		}
			 
			 
		void multiply(int a ,int b){
			x = a;
			y = b;
			cout<<"The product is:"<<(x*y)<<endl;
		}
			
		void Division(double a ,double b){
			x = a;
			y = b;
			cout<<"The Division is:"<<(x/y)<<endl;
		}
			
			
	    void modulus(int a ,int b){
			x = a;
			y = b;
			cout<<"The modulus is:"<<(x%y)<<endl;
		}
};

class Scientific_Calculator{
	public:
		int c,d;
		double e,f,g;
	
	public:
		void comparison(int m,int n){
			c = m;
			d = n;
			cout<<"The Greater number  is:"<<max(m,n)<<endl;
			cout<<"The Smaller number is:"<<min(m,n)<<endl;
			
		}
		
		void sin_value(double t ){
			e = t;
			
			cout<<"The sin value is:"<<sin(e)<<endl;
		}
		void cos_value(double t ){
			f = t;
			
			cout<<"The sin value is:"<<cos(f)<<endl;
		}
		
		void tan_value(double t ){
			g = t;
			
			cout<<"The tan value is:"<<tan(g)<<endl;
		}
};
class Hybrid_Calculator: public Simple_Calculator,public Scientific_Calculator{
 	
	 public:
	 	double length ,breadth;
	 	double radius;
	 	void Area_Rec(double len,double bread){
	 		length = len;
	 		breadth = bread;
	 		cout<<"The Area of the Rectangle is:"<<len*bread<<endl;
		 }
		 
		 
	   void Area_Circle(double rad){
	   	radius =  rad;
	   	cout<<"The Area of the Circle is:"<<3.14*radius*radius<<endl;
	   }
	 	


};
int main(){
	Hybrid_Calculator C;
	C.sum(200,300);
	C.subtract(300,100);
	C.multiply(800,900);
	C.sin_value(1);
	C.modulus(500,100);
	C.comparison(450,200);
	return 0; 	
}
