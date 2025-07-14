// this Keyword in C++
//1
//#include<iostream>
//using namespace std;
//class Know{
//
//int a;
//int b;
//public:
//	void set(int a,int b){
//		this->a = a;
//		this-> b = b;
//	}
//	void get(){
//		cout<<"The value of a is:"<<a<<endl;
//		cout<<"The value of b is:"<<b<<endl;
//	}
//	
//};
//	
//int main(){
//	Know K;
//	K.set(100,200);
//	K.get();
//	return 0;
//	
//}
	
	
//2
//#include<iostream>
//using namespace std;
//class Robot{
//	string name;
//	int weight;
//	public:
//		void info(string name,int weight){
//			this->name = name;
//			this->weight = weight;
//		}
//		void get(){
//			cout<<"The name of the Robot is:"<<name<<endl;
//			cout<<"The weight of the Robot is:"<<weight<<endl;
//		}
//};
//int main(){
//	Robot R;
//	R.info("Vinod",30);
//	R.get();
//	return 0 ;
//}

//3
//#include<iostream>
//using namespace std;
//class Employee{
//	int id;
//	string name;
//	int salary;
//	public:
//		void info(int id,string name,int salary){
//			this->id = id;
//			this->name = name;
//			this->salary = salary;
//		}
//		void get_info(){
//			cout<<"The id of the Employee is:"<<id<<endl;
//			cout<<"The name of the Employee is:"<<name<<endl;
//			cout<<"The salary of the Employee is:"<<salary<<endl;
//		}
//};
//int main(){
//	Employee E;
//	E.info(84,"Suraj",34000);
//	E.get_info();
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Cars{
//	string name;
//	int mileage;
//	public:
//	   Cars & set(string name,int mileage){
//		this->name = name;
//		this->mileage = mileage;
//		return * this;
//		
//	     }
//	void get(){
//		cout<<"The name of the Car is:"<<this->name<<endl;
//		cout<<"The mileage of the Car is:"<<this->mileage<<endl;
//		
//	}
//};
//int main(){
//	Cars C;
//	C.set("Rolls Royce",44533).get();
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class Electronics{
//	string name;
//	int quantity;
//	public:
//		Electronics & set(string name,int quantity){
//			this->name = name;
//			this->quantity = quantity;
//			return *this;
//		}
//		
//		void get(){
//			cout<<"The name of the Electronics device:"<<this->name<<endl;
//			cout<<"The number of electronics device required is:"<<this->quantity<<endl;
//		}
//};
//int main(){
//	Electronics E;
//	E.set("Smarphones",55).get();
//	E.get();
//	
//	return 0;
//}

//6
#include<iostream>
using namespace std;
class Subject{
	string name;
	int chapter;
	string ch_name;
	public:
		Subject & info(string name,int chapter,string ch_name){
			this->name = name;
			this->chapter = chapter;
			this->ch_name = ch_name;
			return * this;
		}
		void get(){
			cout<<"The name of the Subject is:"<<this->name<<endl;
			cout<<"The Chapter number is:"<<this->chapter<<endl;
			cout<<"The Chapter name is:"<<this->ch_name<<endl;
		}
};
int main(){
	Subject S;
	S.info("Mathematics",5,"Differentiation").get();
	S.get();
	
	return 0;
}
