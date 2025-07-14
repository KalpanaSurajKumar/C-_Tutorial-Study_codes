// Static members -- Static varibles and Static Function in C++
//1
//#include<iostream>
//using namespace std;
//class Employee{
//	static int count;
//	string nam;
//	public:
//		void setname(){
//			cout<<"Enter the name of the Student"<<endl;
//			cin>>nam;
//			count++;
//			
//		}
//		void getname(){
//			cout<<"The serial number of the student is:"<<count<<" and his name is:"<<nam<<endl;
//		}
//};
//int Employee::count=0;
//int main(){
//	Employee em1,em2,em3,em4;
//	em1.setname();
//	em1.getname();
//	em2.setname();
//	em2.getname();
//	em3.setname();
//	em3.getname();
//	return 0;
//}

//2
//#include<iostream>
//using  namespace std;
//class Record{
//	static int num ; // Note -- Hum static varibles ko class ke andar initialse nahi kar sakte
//	public:
//		void setcounter(){
//			string name = "Suraj";
//			cout<<"The name is:"<<name<<" and its count is:"<<num<<endl;
//			num++;
//			
//		}
//};
//int Record::num = 100;
//int main(){
//	Record r1,r2,r3,r4,r5,r6;
//	r1.setcounter();
//	r2.setcounter();
//    r3.setcounter();
//    r4.setcounter();
//    r5.setcounter();
//    r6.setcounter();
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Mobiles{
//	string name;
//	string Model_name;
//	static int number;
//	public:
//		void setname(){
//			cout<<"Enter the name of the company"<<endl;
//			cin>>name;
//			cout<<"Enter the name of the Model"<<endl;
//			cin>>Model_name;
//			number++;
//			
//		}
//		void getname(){
//			cout<<"The serial number of the pbone in the shop is:"<<number<<endl;
//			cout<<"Your company name is :"<<name<<" and its model name is:"<<Model_name<<endl;
//		}
//	
//};
//int Mobiles::number = 0;
//int main(){
//	Mobiles m1,m2,m3,m4,m5,m6,m7,m8;
//	m1.setname();
//	m1.getname();
//	m2.setname();
//	m2.getname();
//	m3.setname();
//	m3.getname();
//	m4.setname();
//	m4.getname();
//	m5.setname();
//	m5.getname();
//	m6.setname();
//	m6.getname();
//	m7.setname();
//	m7.getname();
//	m8.setname();
//	m8.getname();
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Bank{
//	int store=0;
//	int amount=0;
//	int withdrawn =0;
//	static int no_of_accounts;
//    public:
//    	void Deposit(){
//    		cout<<"Enter the amount to deposit"<<endl;
//    		cin>>amount;
//    		store = store+amount;
//    		cout<<"The Total amount in Bank is:"<<store<<endl;
//    		no_of_accounts++;
//    		
//		}
//		void Withdraw(){
//			cout<<"Enter the amount to withdrawn"<<endl;
//			cin>>withdrawn;
//			
//			store = store-withdrawn;
//			cout<<"The total amount left is:"<<store<<endl;
//		}
//    	static void Accounts();
//    	
//
//	
//};
//int Bank::no_of_accounts =0;
//void Bank::Accounts(){
//	cout<<"The number of Accounts is:"<<no_of_accounts<<endl;
//}
//
//
//int main(){
//	Bank b1,b2;
//	b1.Deposit();
//	Bank::Accounts();
//	b1.Withdraw();
//	Bank::Accounts();
//	b2.Deposit();
//	Bank::Accounts();
//	b2.Withdraw();
//	Bank::Accounts();
//	return 0;
//}

//5
//#include<iostream>
//#include<string>
//using namespace std;
//class Entities{
//static int count;
//string name;
//public:
//	void info(){
//		cout<<"Enter the name of the Student"<<endl;
//		getline(cin,name);
//		count++;
//	}
//	void getinfo(){
//		cout<<"The serial number of the student is:"<<count<<" an name is:"<<name<<endl;
//		
//		
//	}
//};
//int Entities::count=0;
//int main(){
//Entities e1;
//e1.info();
//e1.getinfo();
//	return 0;
//}

// Constant static varibles in C++
//9
//#include<iostream>
//using namespace std;
//class Taking {
//	public:
//	static const int num;
//	
//};
//const int Taking::num=200;
//int main(){
//	cout<<"The constant value is:"<<Taking::num<<endl;
//	return 0;
//}

//10
#include<iostream>
using namespace std;
class Mathsfun{
	public:
		static const double PI;
		
};
const double Mathsfun::PI = 3.148921;

int main(){
	cout<<"The value of the constant pi is:"<<Mathsfun::PI<<endl;
	return 0;
}
