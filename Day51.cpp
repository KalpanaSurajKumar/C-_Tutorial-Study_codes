// Pointers to objects in C++
//1
//#include<iostream>
//using namespace std;
//class Name{
//	string name;
//	public:
//		void setname(string nam){
//			name = nam;
//		}
//		void getname(){
//			cout<<"The name of the person is:"<<name<<endl;
//		}
//};
//int main(){
//	Name N;
//	Name *ptr = &N;
//	(*ptr).setname("Suraj");
//	(*ptr).getname();
//return 0;
//}
//2
//#include<iostream>
//using namespace std;
//class Fruit{
//	string name;
//	public:
//       void set_g(string na){
//		    name = na;
//	     }
//	    void get_g(){
//		cout<<"The name of the Fruit is:"<<name<<endl;
//	     }
//};
//int main(){
//	Fruit f;
//	Fruit *ptr = &f;
//	ptr->set_g("Apple");
//	(*ptr).get_g();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Operation{
//	int a;
//	int b;
//	public:
//		void Sum(int x,int y){
//			a  = x;
//			b = y;
//		}
//		void Result(){
//			cout<<"The sum of the number is:"<<a+b<<endl;
//		}
//};
//int main(){
//	Operation O;
//	Operation *pr = new Operation;
//	pr->Sum(20,30);
//	pr->Result();
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Electronics{
//	string name;
//	int quantity;
//	public:
//	      void take(string na,int quan){
//		         name = na;
//		         quantity = quan;
//	               }
//	      void info(){
//		      cout<<"The name of the Electronic Device is:"<<name<<endl;
//		      cout<<"The quantity of the Electronic Device is:"<<quantity<<endl;
//	           } 
//};
//int main(){
//	Electronics e;
//	Electronics *pm = &e;
//	(*pm).take("Samsung",5);
//	pm->info();
//	return 0;
//}


//5
//#include<iostream>
//using namespace std;
//class Cars{
//	public:
//		string car_name;
//		int mileage;
//		void set_c(string ca,int mi){
//		car_name = ca;
//		mileage = mi;
//       }
//       void get_c(){
//       	cout<<"The name of the car is :"<<car_name<<endl;
//       	cout<<"The mileage of the car is:"<<mileage<<endl;
//       		
//	   }
//};
//
//int main(){
//	Cars c;
//Cars *pt = new Cars;
//pt->set_c("Lamborgini",8);
//pt->get_c();
//	return 0;
//}

//6
#include<iostream>
using namespace std;
class Appliances{
	public:
		string name;
		int volt_unit;
		void give(string nam,int vo){
			name = nam;
			volt_unit = vo;
			
		}
		void get(){
			cout<<"The name of the Appliances:"<<name<<endl;
			cout<<"The units of energy it consumes is:"<<volt_unit<<"V"<<endl;
		}
};
int main(){
Appliances A;
	A.give("Water Heater",500);
	A.get();
Appliances B;
	Appliances * pr = new Appliances;
	pr ->give("Electric Stove",1000);
	pr->get();
	Appliances C;
	Appliances *ptr = &C;
	(*ptr).give("AC",3446);
	(*ptr).get();
	return 0;
}
