//Virtual functions in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int a;
//		int b;
//		virtual void sum(int x,int y){
//			a = x;
//			b = y;
//			cout<<"The sum of the numbers is:"<<a*b<<endl;
//		}
//};
//class B:public A{
//	public:
//		int d;
//		int e;
//		void sum(int x,int y){
//			d = x;
//			e = y;
//			cout<<"The sum of the numbers is:"<<d+e<<endl;
//		}
//};
//int main(){
//	A *ptr;
//	B ob;
//	ptr = &ob;
//	ptr->sum(10,20);
//	return 0;
//	
//}

//2
//#include<iostream>
//using namespace std;
//class Laptop{
//	public:
//		string name;
//		int quantity;
//		Laptop(string na,int qun){
//			name = na;
//			quantity = qun;
//		}
//		 void display(){
//			cout<<"The name of the Laptop is:"<<name<<endl;
//			cout<<"The quantity of the Laptop is:"<<quantity<<endl;
//		}
//};
//class Processor:public Laptop{
//	public:
//		string p_name;
//		Processor(string na,int qun,string nam):Laptop(na,qun){
//			p_name = nam;
//		}
//		void display(){
//			cout<<"The name of the Laptop is:"<<name<<endl;
//			cout<<"The quantity of the Laptop is:"<<quantity<<endl;
//			cout<<"The name of the processor is:"<<p_name<<endl;
//		}
//		
//};
//class Mouse:public Laptop{
//	public:
//		string m_name;
//		Mouse(string na,int qun,string ma):Laptop(na,qun){
//			m_name = ma;
//		}
//		void display(){
//			cout<<"The name of the Laptop is:"<<name<<endl;
//			cout<<"The quantity of the Laptop is:"<<quantity<<endl;
//			cout<<"The name of the Mouse is:"<<m_name<<endl;
//		}
//};
//int main(){
//	Laptop *ptr;
//	Mouse Mx("Hp",5,"Apple");
//	Processor pr("Apple",8,"Intel i-3");
//	
//	ptr = &Mx;
//	ptr->display();
//	ptr = &pr;
//	ptr->display();
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int num = 100;
//		string name = "Suraj Kumar Jha";
//		virtual void show(){
//			cout<<"The name of the person  is:"<<name<<endl;
//			cout<<"The Favourite number of Suraj Kumar is:"<<num<<endl;
//		}
//	
//};
//class B:public A{
//	int num = 400;
//	string nam = "Kalpana Jha";
//	void show(){
//		cout<<"The name of the super person is:"<<nam<<endl;
//		cout<<"The Favourite number of Kalpana Jha is:"<<num<<endl;
//	}
//};
//int main(){
//	A *px;
//	B pb;
//	px = &pb;
//	px->show();
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Device{
//	public:
//		string name= "Television";
//		int id = 45;
//		 virtual void display(){
//			cout<<"The name of the device is:"<<name<<endl;
//			cout<<"the id of the device is:"<<id<<endl;
//		}
//};
//class Electronics:public Device{
//	public:
//		string nam1 = "Electronics";
//		int td = 240;
//		
////		void display(){
////			cout<<"The field of the machine is:"<<nam1<<endl;
////			cout<<"The id number of the Electronics device is:"<<td<<endl;
////		}
//};
//int main(){
//	Device * dv;
//	Electronics ev;
//	dv= &ev;
//	dv->display();
//	return 0;
//} 
//5
#include<iostream>
using namespace std;
class House{
	public:
	 string name;
     	int no;
	public:
		House(string na,int n){
			name = na;
			no = n;
		}
		virtual void display(){
			cout<<"The name of the House is:"<<name<<endl;
			cout<<"The number of rooms in the house is:"<<no<<endl;
	
    	}
};
class Dining:public House{
	string company;
	int chairs ;
	public:
		Dining(string na,int n,string cam,int cha):House(na,n){
			company = cam;
			chairs = cha;
			
		}
//		void display(){
//			cout<<"The name of the  House is:"<<name<<endl;
//			cout<<"The number of rooms in the house is:"<<no<<endl;
//			cout<<"The name of the dinning company is:"<<company<<endl;
//			cout<<"The numbers of chairs in the dining room is:"<<chairs<<endl;
//		}
};
int main(){
	House * Hr;
	Dining da("Kalpana Nagri",78,"vilavet",48);
	Hr = &da;
	Hr->display();
	return 0;
}
