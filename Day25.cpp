// Array of Objects and passing Objects as an arguments in Function
//1
//#include<iostream>
//using namespace std;
//class Employee{
//	int id;
//	string name;
//	public:
//		void info(void){
//			cout<<"Enter your name"<<endl;
//			cin>>name;
//			cout<<"Enter your id"<<endl;
//			cin>>id;
//			}
//		void getinfo(){
//			cout<<"Your name is "<<name<<" and your id "<<id<<endl;
//			
//		}
//		
//};
//int main(){
//	int num;
//	cout<<"Enter the number of Employees"<<endl;
//	cin>>num;
//	Employee emp[num];
//	for(int i=0;i<num;i++){
//		emp[i].info();
//		emp[i].getinfo();
//	}
//	return 0;
//}
//2
//#include<iostream>
//using namespace std;
//class Student{
//	string name;
//	int marks;
//	public:
//	 void info(void){
//		cout<<"Enter your name"<<endl;
//		cin>>name;
//		cout<<"Enter your marks"<<endl;
//		cin>>marks;
//	}
//	 void getinfo(void){
//		cout<<"*******Details of Student"<<endl;
//		cout<<"Your name is "<<name<<" and your marks is "<<marks<<endl;
//	}
//	
//};
//int main(){
//	int num;
//	cout<<"Enter the number of Students"<<endl;
//	cin>>num;
//	Student st[num];
//	for(int i=0;i<num;i++){
//		st[i].info();
//		st[i].getinfo();
//	}
//	return 0;
//}

//3
//#include<iostream>
//#include<string>
//using namespace std;
//class Store{
//	int product_id;
//	string product_name;
//	int no_of_items_avaible;
//	
//	public:
//		void Product_info(){
//			cout<<"Enter the product id"<<endl;
//			cin>>product_id;
//			cout<<"Enter the name of product"<<endl;
//			getline(cin,product_name);
//			cout<<"Enter the number of product you want to buy of these type"<<endl;
//			cin>>no_of_items_avaible;
//		}
//		
//		void getProduct_info(){
//			cout<<"your product name is "<<product_name<<" and your product id is "<<product_id<<" and number of products your buyed is "<<no_of_items_avaible<<endl;
//			
//		}
//	
//};
//int main(){
//	Store st[5];
//	for(int i=0;i<5;i++){
//		st[i].Product_info();
//		st[i].getProduct_info();
//	}
//	return 0;
//}

//4
//#include<iostream>
//#include<string>
//using namespace std;
//class Brands{
//	string name;
//	int net_worth;
//	string type;
//	
//	public:
//		void info(void){
//			cout<<"Enter the name of company"<<endl;
//			getline(cin>>ws,name);
//			cout<<"Enter the net worth of the company"<<endl;
//			cin>>net_worth;
//			cout<<"Enter the type of the company"<<endl;
//			getline(cin>>ws,type);
//		}
//		
//		void getinfo(){
//			cout<<"Your company name is "<<name<< " and the net worth of the company is "<<net_worth<<" Crores  and the type of the company is "<<type<<endl;
//		}
//	
//};
//int main(){
//	Brands b[4];
//	for(int i=0;i<4;i++){
//		b[i].info();
//		b[i].getinfo();
//	}
//	
//	return 0;
//}
//5
//#include<iostream>
//using namespace std;
//class Operation{
//	int a;
//	int b;
//	public:
//		void num(int x,int y){
//			a = x;
//			b =y;
//			
//		}
//		void number(Operation o1,Operation o2){
//			a = o1.a + o2.a;
//			b = o1.b + o2.b;
//			
//		}
//		
//		void getvalue(){
//			cout<<"The  complex number is:"<<a<<"+"<<b<<"i"<<endl;
//		}
//};
//int main(){
//int p,q,r,s;
//cout<<"Enter the first Complex number"<<endl;
//cin>>p>>q;
//cout<<"Enter the second Complex number"<<endl;
//cin>>r>>s;
//	Operation p1,p2,p3;
//	p1.num(p,q);
//	p1.getvalue();
//	p2.num(r,s);
//	p2.getvalue();
//	p3.number(p1,p2);
//	p3.getvalue();
//	
//	return 0;
//}
//
////6
//#include<iostream>
//using namespace std;
//class Employee{
//	
//	public:
//		int a;
//		void setvalue(Employee op){
//			a = a+op.a;
//			
//			
//		}
//		void getvalue(void){
//			cout<<"The sum of these numbers is:"<<a;
//		}
//};
//int main(){
//	Employee e1,e2;
//	e1.a = 100;
//	e2.a = 200;
//	e2.setvalue(e1);
//	e2.getvalue();
//	return 0;
//}

//7
//#include<iostream>
//using namespace std;
//class Example{
//	
//	public:
//		int a;
//	  Example add(Example e1,Example e2){
//		 Example e3;
//		 e3.a = e1.a + e2.a;
//		 
//		 return e3;
//		
//	}
//};
//int main(){
//	Example e1,e2,e3;
//	e1.a = 1000;
//	e2.a = 3000;
//	e3.a = 0;
//	cout<<"The value of object 1 is:"<<e1.a<<endl;
//	cout<<"The value of object 2 is:"<<e2.a<<endl;
//	cout<<"The value of object 3 is:"<<e3.a<<endl;
//	cout<<"\n\n\n";
//	e3 =  e3.add(e1,e2);
//	cout<<"The new values are:"<<endl;
//	cout<<"The value of object 1 is:"<<e1.a<<endl;
//	cout<<"The value of object 2 is:"<<e2.a<<endl;
//	cout<<"The value of object 3 is:"<<e3.a<<endl;
//	
//	return 0;
//}

//8
//#include<iostream>
//using namespace std;
//class Check{
//	public:
//		int a,b;
//		Check sum(Check c1,Check c2){
//			Check c3;
//			c3.a = c1.a*c2.a;
//			c3.b = c1.b*c2.b;
//			return c3;
//			
//		}
//};
//int main(){
//	Check c1,c2,c3;
//	c1.a = 350;
//	c1.b = 70;
//	c2.a = 40;
//	c2.b = 45;
//	c3.a = 0;
//	c3.b = 0;
//	c3 = c3.sum(c1,c2);
//	cout<<"The value of c3.a is:"<<c3.a<<endl;
//	cout<<"The value of c3.b is:"<<c3.b<<endl;
//	
//	return 0;
//}
//9
#include<iostream>
using namespace std;
class info{
	public:
		string name;
		info nam(info n1,info n2){
			info n3;
			n3.name = n1.name;
			n1.name = n2.name;
			n2.name = n3.name;
			return n3;
		}
};
int main(){
	info i1,i2,i3;
	i1.name = "Suraj";
	i2.name = "Akriti";
	i3.name  = "Maya";
	cout<<"The value of i1 is:"<<i1.name<<endl;
	cout<<"The value of i2 is:"<<i2.name<<endl;
	cout<<"The value of i3 is:"<<i3.name<<endl;
	cout<<"\n\n\n";
	i3 = i3.nam(i1,i2);
	cout<<"The new value are:"<<endl;
	cout<<"The value of i1 is:"<<i1.name<<endl;
	cout<<"The value of i2 is:"<<i2.name<<endl;
	cout<<"The value of i3 is:"<<i3.name<<endl;
	
	return 0;
}


