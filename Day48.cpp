// Constuctors in Derived class

//1
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int a;
//		A(int x){
//			a = x;
//		}
//		void print_a(){
//			cout<<"The value of a is:"<<a<<endl;
//		}
//		
//};
//class B{
//	public:
//		int b;
//		B(int y){
//			b = y;
//		}
//		void print_b(){
//			cout<<"The value of b is:"<<b<<endl;
//		}
//};
//class C:public A,public B{
//	public:
//		int c;
//		C(int m,int n,int o):A(m),B(n){
//			c = o;
//		}
//		void print_c(){
//			cout<<"The value of c is:"<<c<<endl;
//		}
//		
//};
//
//int main(){
//	C c(500,600,700);
//    c.print_a();
//    c.print_b();
//    c.print_c();
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Grandfather{
//	public:
//	   string name;
//	   int age ;
//	   Grandfather( string nam,int ag){
//	   	name = nam;
//	   	age = ag;
//	   }
//	   void print_G(){
//	   	cout<<"The name of the Grandfather is:"<<name<<endl;
//	   	cout<<"The age of the Grandfather is:"<<age<<endl;
//	   }
//};
//class Father{
//	public:
//	   string fname;
//	   int fage ;
//	   Father( string nam , int ag){
//	   	fname = nam;
//	   	fage = ag;
//	   }
//	   void print_F(){
//	   	cout<<"The name of the Grandfather is:"<<fname<<endl;
//	   	cout<<"The age of the Grandfather is:"<<fage<<endl;
//	   }
//};
//class Son:public Grandfather,public Father{
//	public:
//	   string son;
//	   int sage ;
//	   Son(string s1,int a1,string s2,int a2,string nam,int ag):Grandfather(s1,a1),Father(s2,a2){
//	   	son = nam;
//	   	sage = ag;
//	   }
//	   void print_S(){
//	   	cout<<"The name of the Son is:"<<son<<endl;
//	   	cout<<"The age of the Son is:"<<sage<<endl;
//	   }
//};
//int main(){
//	Son s("Shushil",79,"Vijay",50,"Suraj",38);
//	s.print_S();
//	s.print_F();
//	s.print_G();
//	Son g("Nani ji",90,"Satish",44,"Nitish",11);
//	g.print_S();
//	g.print_F();
//	g.print_G();
//	
//	return 0;
//}
	   
	   
	   	
//3
//#include<iostream>
//using namespace std;
//class BCA{
//	public:
//		string aim_job;
//		int no_of_student;
//		string fav_sub;
//		BCA(string a,int no,string fa){
//			aim_job = a;
//			no_of_student = no;
//			fav_sub = fa;
//		}
//		void show_B(){
//			cout<<"The job aim of the Student is:"<<aim_job<<endl;
//			cout<<"The number of Student in the Course is:"<<no_of_student<<endl;
//			cout<<"The favourite subject of the Student is:"<<fav_sub<<endl;
//		}
//		
//};
//class Student:virtual public BCA{
//	public:
//	string student_name;
//	string student_course;
//	int course_dur;
//	Student(string stud,string co,int dur){
//		student_name = stud;
//		student_course = co;
//		course_dur = dur;
//	}
//	void show_S(){
//		cout<<"The name of the student is:"<<student_name<<endl;
//		cout<<"The name of the student course is:"<<student_course<<endl;
//		cout<<"The duration of the student course is:"<<course_dur<<endl;
//	}
//	
//	
//};
//class info:public Student,virtual public BCA{
//	public:
//		string laptop_com;
//		int fees;
//		info(string s1,int n1,string j1,string x1,int n2,string fav, string la,int fe):Student(s1,n1,j1),BCA(x1,n2,fav){
//			laptop_com = la;
//			fees = fe;
//			
//		}
//		void show_info(){
//			cout<<"The company of the laptop is:"<<laptop_com<<endl;
//			cout<<"The fees of the laptop is:"<<fees<<endl;
//		}
//		
//};
//int main(){
//	
//	info f("AI Engineer","Suraj",58,"Maya",59,"Gamer","Chaya",70000);
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		string name;
//		A(string nam){
//			name = nam;
//		}
//		void show1(){
//			cout<<"The name of the person 1 is:"<<name<<endl;
//		}
//		
//};
//class B:public A{
//	public:
//		string na;
//		B(string t,string n):A(t){
//			na = n;
//		}
//		void show2(){
//			cout<<"The name of the person 2 is:"<<na<<endl;
//		}
//		
//};
//class C:virtual public A,public B{
//	public:
//		string n3;
//		C(string x1,string x2,string nx):A(x1),B(x2){
//			n3 = nx;
//		}
//		void show3(){
//			cout<<"The name of the person 3 is:"<<n3<<endl;
//		}
//		
//};
//int main(){
//	C c("Suraj","Kalpana","Maya");
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int num1;
//		A(int a){
//			num1 = a;
//		cout<<"My name is:Suraj Kumar Jha--> My phase is level 1:"<<num1<<endl;
//          }
//};
//class B:public A{
//	public:
//		int num2;
//	   B(int j,int b):A(j){
//	   	num2 = b;
//	    cout<<"My name is:Kalpana Jha ---> My phase is level 2:"<<num2<<endl;
//          }
//};
//class C:public B{
//	public:
//		int num3;
//	   C(int z,int y,int c):B(z,y){
//	   	num3 = c;
//	   	
//         cout<<"My name is: Saurav Jha ---> My phase is level 3:"<<num3<<endl;
//          }
//};
//int main(){
//	C c(10,20,30);
//	return 0;
//}

// 6
#include<iostream>
using namespace std;
class A{
	string name_a;
	public:
		A(string a){
			name_a = a;
			cout<<"The name of the person A is:"<<name_a<<endl;
		}
};
class B:public A{
	string name_b;
	public:
		B(string m,string b):A(m){
			name_b = b;
			cout<<"The name of the person B is:"<<name_b<<endl;
		}
};
class C:public B{
	string name_c;
	public:
		C(string x,string y,string c):B(x,y){
			name_c = c;
			cout<<"The name of the person C is:"<<name_c<<endl;
		}
};
int main(){
	C c("Suraj","Kalpana","Vrinda");
	return 0;
}

