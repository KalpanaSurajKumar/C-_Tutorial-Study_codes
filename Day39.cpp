// Protected Access Specifier in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	int a;
//	protected:
//		int  show(int num){
//			a = num;
//			return a;
//			
//		}
//};
//class B:protected A{
//   int b;
//   public:
//   	int  print(int num2){
//   		b = num2;
//   		cout<<show(100)<<" ";
//   		return b;
//	   }
//};
//int main(){
//	B t;
//	cout<<t.print(200)<<endl;
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class A{
//	private:
//		int a = 100;
//		
//	public:
//		int b = 200;
//		
//	protected:
//		int c= 300;
//};
//class B:public A{
//	
//		
//};
//int main(){
//	A j;
//	cout<<"The value is:"<<j.c<<endl;
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class A{
//	private:
//		int a = 300;
//		
//	public:
//		int b = 400;
//		
//	protected:
//		int c = 700;
//	
//};
//class B:private A{
//	
//	
//};
//int main(){
//	B v;
////	cout<<v.a<<endl;
////	cout<<v.b<<endl;
//cout<<v.c<<endl;
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class A{
//	private:
//		int a = 1000;
//		
//	public:
//		int b = 2000;
//		
//	protected:
//		int c = 3000;
//};
//class B:protected A{
//	
//};
//int main(){
//	B x;
////	cout<<x.a<<endl;
////cout<<x.b<<endl;
//cout<<x.c<<endl;
//	return 0;
//}

//5
#include<iostream>
using namespace std;
class A{
	int a;
	int b;
	protected:
		void Sum(int x,int y){
			a = x;
			b = y;
			cout<<"The sum of these numbers is:"<<a+b<<endl;
		}
};
class B:public A{
	public:
		void bula(){
		int s;
		int u;
		cout<<"Enter the value of the first number"<<endl;
		cin>>s;
		cout<<"Enter the value of the  second number"<<endl;
		cin>>u;
		Sum(s,u);
		}
		
};
int main(){ 
	B m;
	m.bula();
	return 0;
 }
 
