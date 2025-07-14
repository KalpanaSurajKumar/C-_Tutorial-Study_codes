// Friend class in C++
//1
//#include<iostream>
//using namespace std;
//class Bx;
//class Ax{
//	int x= 200;
//	friend  class Bx;
//};
//class Bx{
//	public:
//		void print(Ax p){
//			cout<<"The value of x in A class which is excessed from Class Bx is:"<<p.x<<endl;
//		}
//};
//
//int main(){
//	Ax p1;
//	Bx p2;
//	p2.print(p1);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Bx;
//class Ax{
//	int x = 200;
//	friend class Bx;
//};
//
//class Bx{
//	int y = 500;
//	public:
//		void sum(Ax p){
//			int add = y+p.x;
//			cout<<"The sum of these two classse i.e x and y is:"<<add<<endl;
//		}
//};
//int main(){
//	Ax k;
//	Bx k2;
//	k2.sum(k);
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Bx;
//class Ax{
//	int x ,y;
//	public:
//		void number(int s,int u){
//			x = s;
//			y = u;
//		}
//        friend void  Bx:: product(Ax );
// 
// 	What is  the best in th
//};
//class Bx{
//	public:
//		void product(Ax);
//	  
//};
// void Bx:: product(Ax o1){
//		  cout<<"The sum of  these numbers is:"<<o1.x+o1.y<<endl;
//     	}	
//int main(){
//	Ax a;
//	Bx b;
//	a.number(400,600);
//	b.product(a);
//	
//	
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Adder2;
//class Adder{
//int x, y;
//public:
//	void setnum(int a ,int b){
//		x= a;
//		y = b;
//		
//		
//	}
//	
//	friend class Adder2;
//
//};
//
//class Adder2{
//	public:
//	     void adding(Adder t ){
//		    cout<<"The sum of  these numbers is:"<<t.x + t.y<<endl;
//		
//		
//	       }
//};
//int main(){
//	Adder an;
//	Adder2 an2;
//	an.setnum(200,500);
//	an2.adding(an);
//	return 0;
//}

//5
#include<iostream>
using namespace std;
class vec;
class Vector{
	int x,y,z;
	public:
	   void veco(int a,int b,int c){
		x = a;
		y = b;
		z = c;
	  }
	friend class vec;
};
class vec{
	public:
		
	 void vecsum(Vector v ,Vector v2){
		cout<<"The sum of the vectors is:"<<v.x + v2.x<<"i +"<<v.y + v2.y<<"j +"<<v.z +v2.z<<"k"<<endl;
		
	}
};
int main(){
	Vector v ,v1;
	vec v2;
	v.veco(30,40,50);
	v1.veco(70,60,50);
	
	v2.vecsum(v,v1);
	return 0;
}

