// Constuctors in C++
//1
//#include<iostream>
//using namespace std;
//class Main{
//	public:
//	   Main(){
//		 cout<<"Hello World"<<endl;
//	        }
//};
//int main(){
//	Main ma;
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Some{
//	int num1,num2;
//	public:
//		Some(){
//			num1 = 100;
//			num2 = 200;
//		}
//		void printnum(){
//			cout<<"The value of num1 is:"<<num1<<endl;
//			cout<<"The value of num2 is:"<<num2<<endl;
//		}
//};
//int main(){
//	Some s;
//	s.printnum();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Car{
//	public:
//	    int mileage;
//	    string brand;
//	    int distance;
//	
//	    Car(int x ,string m,int y){
//		   mileage = x;
//		   brand = m;
//		   distance = y;
//		
//	        }
//	
//};
//int main(){
//	Car c(250,"TATA",1250);
//	cout<<"The mileage of the  car is:"<<c.mileage<<" mphs"<<endl;
//	cout<<"The brand of the  car is:"<<c.brand<<endl;
//	cout<<"The distance travelled by the  car is:"<<c.distance<<endl;
//
//
//
//	
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Products{
//	public:
//		string name;
//		int quantity;
//		int price;
//		string brand;
//		
//		Products(string n1,int q1,int p1,string b1){
//			name = n1;
//			quantity = q1;
//			price = p1;
//			brand = b1;
//			cout<<"The name of product is:"<<name<<endl;
//			cout<<"The quantity of product is:"<<quantity<<" litres"<<endl;
//			cout<<"The price of product is:"<<price<<" Rupees"<<endl;
//			cout<<"The brand of product is:"<<brand<<endl;
//			
//			
//		}
//		
//	
//};
//int main(){
//	Products p1("Milk",2,72,"Amul");
//	
//	
//	return 0;
//	
//}

//5
//#include<iostream>
//using namespace std;
//class Student{
//	public:
//	  string name;
//	  int marks;
//	  string roll_no;
//	  string fav_sub;
//	  
//	  Student(string ,int ,string ,string);
//	
//	  
//	
//};
//Student::Student(string na,int ma,string rol,string fav){
//		name = na;
//		marks = ma;
//		roll_no = rol;
//		fav_sub = fav;
//		cout<<"The name of the Student is:"<<name<<endl;
//		cout<<"The marks obtained by the student is:"<<marks<<endl;
//		cout<<"The roll number of the student is:"<<roll_no<<endl;
//		cout<<"The favourite subject of the student is:"<<fav_sub<<endl;
//		cout<<"\n\n\n";
//
//	}
//int main(){
//	Student s1("Suraj",89,"22uca084","Mathematics");
//	Student s2("Rahul",90,"22uca044","Business");
//	
//	return 0;
//}

//6
#include<iostream>
using namespace std;
class Game{
	public:
		string name;
		string type;
		int price;
		string company;
		
		Game(string ,string,int ,string);
		void print_info();
		
};
Game::Game(string n,string t,int p,string c){
	name = n;
	type = t;
	price = p;
	company = c;
}
	
  void Game::  print_info(){
	cout<<"The name of the Game is:"<<name<<endl;
	cout<<"The type of the Game is:"<<type<<endl;
	cout<<"The price of the Game is:"<<price<<endl;
	cout<<"The name of the company is:"<<company<<endl;
	
	cout<<"\n\n\n";
}

int main(){
	Game g1("Freefire","Shooting",460,"Kalpana Studio");
	g1.print_info();
	return 0;
}

