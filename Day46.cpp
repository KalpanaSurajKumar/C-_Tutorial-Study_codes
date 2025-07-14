#include<iostream>
using namespace std;
class A{
	public:
		int a;
		A(int x){
			a = x;
			
		}
		void show_a(){
			cout<<"The value of a is:"<<a<<endl;
		}
};
class B{
	public:
		int b;
		B(int y){
			b = y;
		}
		void show_b(){
			cout<<"The value of b is:"<<b<<endl;
		}
};
class C:public A,public B{
	public:
		int c;
		C(int m,int n,int o):A( m),B( n){
			c = o;
		}
		void show_c(){
			cout<<"The value of c is:"<<c<<endl;
		}
		
};
int main(){
	C c(100,200,300);
	c.show_a();
	c.show_b();
	c.show_c();
	
	return 0;
}
