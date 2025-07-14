// Single inheritence in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	int a;
//	int b;
//	public:
//	 void sum(int c ,int d){
//		a =c;
//		b =d;
//		cout<<"The sum of these numbers is:"<<a+b<<endl;
//	  }
//};
//class B:public A{
//	int e;
//	int f;
//	public:
//	  void product(int x,int y){
//		e = x;
//		f = y;
//		cout<<"The product of these numbers is:"<<e*f<<endl;
//	 }
//};
//int main(){
//	B a;
//	a.product(105,204);
//	a.sum(34,45);
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Father{
//string name;
//public:
//	void print(string na){
//		name = na;
//		cout<<"The name of the Student is:"<<name<<endl;
//	}
//};
//class child:public Father{
//	int a;
//	int b;
//	public:
//		void sub(int x,int y){
//			a = x;
//			b = y;
//			cout<<"The difference of these numbers is:"<<a-b<<endl;
//		}
//};
//int main(){
//	child c;
//	c.print("Suraj Kumar Jha");
//	c.sub(410,10);
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Human{
//	string name;
//	string occupation;
//	int age ;
//	public:
//	  void inf(string nam,string occ,int ag){
//		name = nam;
//		occupation = occ;
//		age = ag;
//		cout<<"The name of the person is:"<<name<<endl;
//		cout<<"The occupation of the person is:"<<occupation<<endl;
//		cout<<"The age of the person is:"<<age<<endl;
//	   }
//};
//class Boys:public Human {
//	string Married_status;
//	string sirname;
//	string Education;
//	public:
//		void Boys_info(string marr,string sir,string ed){
//			Married_status = marr;
//			sirname = sir;
//			Education = ed;
//			cout<<"The Martial status of the person is:"<<Married_status<<endl;
//			cout<<"The sirname of the person is:"<<sirname<<endl;
//			cout<<"The Education of the person is:"<<Education<<endl;
//		}
//};
//int main(){
//	Boys H;
//	H.inf("Suraj","Artifical Intelligence",45);
//	H.Boys_info("Single","Jha","BCA");
//
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//class Company {
//	int id;
//	string name;
//	string dept_name;
//	public:
//	  void info(int i,string em,string de){
//		id = i;
//		name = em;
//		dept_name = de;
//		cout<<"The id of the Employee is:"<<id<<endl;
//		cout<<"The name of the Employee is:"<<name<<endl;
//		cout<<"The departement of the Employee is:"<<dept_name<<endl;
//	  }
//	
//};
//class Employee:public Company{
//	int emp_id;
//	string emp_name;
//	string occupation;
//	string device_name;
//	public:
//		void Emp_info(string em,string occ,string de,int e){
//			emp_name = em;
//			occupation = occ;
//			device_name = de;
//			emp_id = e;
//			cout<<"The employee name is:"<<emp_name<<endl;
//			cout<<"The occupation of the employee is:"<<occupation<<endl;
//			cout<<"The name of the device is:"<<device_name<<endl;
//			cout<<"The id of the employee is:"<<emp_id<<endl;
//		}
//};
//int main(){
//	Employee E;
//	E.info(84,"Suraj Kumar Jha","Machine learning and Data Science");
//	E.Emp_info("Akriti Jha","A.I Engineer","Kalpana model X",10);
//	return 0;
//
//}

//5
#include<iostream>
using namespace std;
class Utensils{
	string component;
	string name;
	int quantity;
	public:
		void info(string com,string nam,int quan){
			component = com;
			name = nam;
			quantity = quan;
			cout<<"The component of the utensils is:"<<component<<endl;
			cout<<"The name of the utensils is:"<<name<<endl;
			cout<<"The quantity of the utensils is:"<<quantity<<endl;
			
		}
	
	
};
class Cookers:public Utensils{
	string name;
	int capacity;
	public:
	   void show(string n,int cap){
		name = n;
		capacity = cap;
		string c1,c2;
		int q;
		cout<<"Enter the component of the utensil"<<endl;
		cin>>c1;
		cout<<"Enter the name of the utensil"<<endl;
		cin>>c2;
		cout<<"Enter the quantity of the utensil"<<endl;
		cin>>q;
		info(c1,c2,q);
		cout<<"The name of the Cookers is:"<<name<<endl;
		cout<<"The capacity of the Cookers is:"<<capacity<<endl;
	  }
	
};
int main(){
	Cookers C;
	C.show("Prestige",500);
	
	
	return 0;
}

