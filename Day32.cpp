 // Constructor with default arguments in C++
//1
//#include<iostream>
//using namespace std;
//class Value{
//	int x;
//	int y;
//	public:
//		Value(int m = 0,int n =0){
//			x = m;
//			y = n;
//		}
//		
//		void print(){
//			cout<<"The value of x is:"<<x<<endl;
//			cout<<"The value of y is:"<<y<<endl;
//			cout<<"\n\n";
//		}
//};
//int main(){
//	Value v(10);
//	v.print();
//	Value t(20,30);
//	t.print();
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Operation{
//	int x;
//	int y;
//	public:
//	   Operation(int m=10,int n= 10){
//		  x = m;
//		  y = n;
//		
//	       }
//	    void print_sum(){
//		    cout<<"The sum of these numbers is:"<<x*y<<endl;
//		
//	         }
//
//};
//int main(){
//	Operation op;
//	op.print_sum();
//	Operation ka(5,6);
//	ka.print_sum();
//	Operation ta(45,5);
//	ta.print_sum();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Salary{
//	 long long int sal;
//	public:
//		Salary(long long int tan= 15000){
//			sal = tan;
//		}
//		void print(){
//			cout<<"The salary of the Employee is:"<<sal<<endl;
//		}
//
//};
//int main(){
//	Salary s;
//	s.print();
//	Salary s1(1000000000000);
//	s1.print();
//	return 0;
//}
    
//4
//#include<iostream>
//using namespace std;
//class Chief{
//	string name;
//	string company;
//	public:
//	 Chief(string nam = "Suraj",string com =" Kumar Intelligence"){
//		name = nam;
//		company = com;
//	 }
//	void know(void){
//		cout<<"The name of the CEO is:"<<name<<endl;
//		cout<<"The name of the company is:"<<company<<endl;
//		
//	}
//	
//};
//int main(){
//	Chief ch;
//	ch.know();
//	Chief gh("Maya","Kalpana Construction");
//	gh.know();
//	
//	Chief da("Krishna","Kalpana Transportation");
//	da.know();
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class Best_phone{
//	string name;
//	public:
//		Best_phone(string nam = "I-Phone"){
//			name = nam;
//		}
//		void know_phone(void){
//			cout<<"The Best phone is:"<<name<<endl;
//		}
//	
//};
//int main(){
//	Best_phone p;
//	p.know_phone();
//	Best_phone p1("Samsung");
//	p1.know_phone();
//	
//	Best_phone px("Kalpana Electronics");
//	px.know_phone();
//	return 0;
//}

//6
#include<iostream>
using namespace std;
class Enter{
	string song;
	string singer;
	double duration;
	public:
		Enter(string so = "Amplifier",string si = "Imran Khan", double du = 3.45){
			song = so;
			singer = si;
			duration = du;
		}
		void know(void){
			cout<<"The name of the song is:"<<song<<endl;
			cout<<"The name of the singer is:"<<singer<<endl;
			cout<<"The duration of the song is:"<<duration<<endl;
			cout<<"\n\n\n";
		}
	
};
int main(){
	Enter e;
	e.know();
	Enter ex("Dilbar Dilbar","Neha Kakkar",3.244);
	ex.know();
	Enter ak("Aaj ki raat","Unknown",3.32);
	ak.know();
	return 0;
} 
