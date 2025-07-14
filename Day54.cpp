// Polymorphism in C++
//compile time 
//Function Overloading
//1.
//#include<iostream>
//using namespace std;
//class Kalpana{
//	string name;
//	int num;
//	public:
//		void info(){
//			cout<<"My name is info a Function in Kalpana"<<endl;
//		}
//		void info(string nam){
//			name = nam;
//			cout<<"The name of the laptop CEO is:"<<name<<endl;
//		}
//		void info(string n,int nm){
//			name = n;
//			num = nm;
//			cout<<"The name of the Laptop owner is:"<<name<<endl;
//			cout<<"The number of this laptop is:"<<num<<endl;
//		}
//	    
//};
//int main(){
//	Kalpana K;
//	
//	K.info();
//	K.info("Suraj");
//	return 0;
//}

//2.
//#include<iostream>
//using namespace std;
//class Electronics{
//	string name;
//	string company;
//	int quantity;
//	public:
//		void info(){
//			cout<<"The name of the class is Electronics"<<endl;
//		}
//		void info(string nam){
//			name = nam;
//			cout<<"The name of the Electronics device is:"<<name<<endl;
//	
//		}
//		void info(string na,string com,int quan){
//			name = na;
//			company = com;
//			quantity = quan;
//			cout<<"The name of the Electronics device is:"<<name<<endl;
//			cout<<"The name of the company of the Electronics device is:"<<company<<endl;
//			cout<<"The quantity of the Electronics device is:"<<quantity<<endl; 
//		}
//	
//};
//int main(){
//	Electronics E;
//	E.info();
//	E.info("Apple");
//	E.info("Smart phone","Samsung",50);
//	return 0;
//}

//3.
//#include<iostream>
//using namespace std;
//class Fruit{
//	string name;
//	int num;
//	public:
//		void info(){
//			cout<<"This is a class of name Fruit"<<endl;
//		}
//		void info(string nam){
//			name = nam;
//			cout<<"My favourite fruit is:"<<name<<endl;
//		}
//		void info(string na,int nx){
//			name = na;
//			num = nx;
//			cout<<"The name of the Fruit is:"<<name<<endl;
//			cout<<"The Favourite number is:"<<num<<endl;
//		}
//};
//int main(){
//	Fruit F;
//	F.info();
//	F.info("Apple");
//	F.info("Lithi",7);
//	return 0;
//}

// Operator overloading
//1
//#include<iostream>
//using namespace std;
//class Op{
//	int value;
//	public:
//	   Op(int val){
//		value = val;
//	    }
//	    void operator ++(){
//	    	value = value +5;
//		}
//	   void display(){
//		cout<<"The value of variable value is:"<<value<<endl;
//	     }
//};
//int main(){
//	Op o(100);
//	o.display();
//	++o;
//	o.display();
//	o.display();
//	o.display();
//	return 0;
//}

//2 // This is + Operator overloading
//#include<iostream>
//using namespace std;
//class Simplex{
//	
//	public:                                              
//		int a;
//		void setdata(int x){
//			a = x;
//		}
//		void getdata(){
//			cout<<"The value of the number is:"<<a<<endl;
//		}
//		
//		Simplex operator +(Simplex bb){
//			Simplex cc;
//			cc.a = a+bb.a;
//			return cc;
//		}
//};
//int main(){
//	Simplex s1,s2,s3;
//	s1.setdata(100);
//	s1.getdata();
//	s2.setdata(200);
//	s2.getdata();
//	s3 = s1+s2;
//	s3.getdata();
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Load{
//	int a;
//	public:
//		void setdata(){
//			cout<<"Enter the value :"<<endl;
//			cin>>a;
//		}
//		void getdata(){
//			cout<<"The value of the number is:"<<a<<endl;
//		}
//		Load operator *(Load bb){
//			Load cc;
//			cc.a = a*bb.a;
//			return cc;
//			
//		}
//};
//int main(){
//	Load L,M,N;
//	L.setdata();
//	L.getdata();
//	M.setdata();
//	M.getdata();
//	N = L*M;
//	N.getdata();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Some{
//	int a;
//	public:
//		void setdata(){
//			cout<<"Enter the number"<<endl;
//			cin>>a;
//		}
//		void getdata(){
//			cout<<"The value of the number is:"<<a<<endl;
//		}
//		Some operator =(Some bb){
//			a = bb.a;
//		}
//};
//int main(){
//	Some S1,S2;
//	S1.setdata();
//	S1.getdata();
//	S2.setdata();
//	S2.getdata();
//	S1 = S2;
//	S1.getdata();
//	
//	
//	return 0;
//}

// Run-Time Polymorphism

// Function Overriding
//1
//#include<iostream>
//using namespace std;
//class A{
//	string name;
//	public:
//		void info(string na){
//			name = na;
//			cout<<"The name of the Smartphone is:"<<name<<endl;
//		}
//		
//};
//class B:public A{
//	 string game;
//	 public:
//	 	void info(string na){
//	 		game = na;
//	 		cout<<"The favourite game of the person is:"<<game<<endl;
//		 }
//	
//};
//int main(){
//	B b;
//	b.info("FreeFire");
//	b.A::info("Apple");
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Op{
//	int x,y;
//	public:
//		void Operation(int a,int b){
//			x = a;
//			y = b;
//			cout<<"The sum of the numbers is:"<<x+y<<endl;
//		}
//};
//class Ox:public Op{
//	int m,n;
//	public:
//		void Operation(int a,int b){
//			m = a;
//			n = b;
//			cout<<"The product of the numbers is:"<<m*n<<endl;
//		}
//	
//};
//
//int main(){
//	Ox M;
//	M.Operation(500,240);
//	return 0;
//}

//3
#include<iostream>
using namespace std;
class A{
	int x;
	int y;
	public:
		virtual void calc(int a,int b){
			x = a;
			y = b;
			cout<<"The Calculation is:"<<3*x*y*100<<endl;
		}
};
class B:public A{
	int m;
	int n;
	public:
		void calc(int p,int q){
			m = p;
			n = q;
			cout<<"The Amazing calculation is:"<<4*m*n*300<<endl;
		}
};
int main(){
	B b;
	A *ptr;
	b.calc(100,300);
	ptr = &b;
	ptr->calc(400,100);
	return 0;
}
