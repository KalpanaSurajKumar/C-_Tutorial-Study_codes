// Inheritence in C++
//1
//#include<iostream>
//using namespace std;
//class Father{
//	public:
//		string fname = "Vijay";
//		string lname = "Jha";
//		void show(){
//			cout<<"The name of the father is:"<<fname<<endl;
//			cout<<"The sirname of the father is:"<<lname<<endl;
//		}
//};
//class Son:public Father {
//	public:
//		string cname = "Suraj";
//};
//int main(){
//	Son s;
//	s.show();
//	cout<<"The name of the son is:"<<s.cname;
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class A{
//	int a;
//	int b;
//	public:
//		void Sum(int x,int y){
//			a = x;
//			b = y;
//			cout<<"The sum of these numbers is:"<<a+b<<endl;
//		}
//};
//class B:public A{
//	int f;
//	int m;
//	public:
//		void Product(int r,int s){
//			f = r;
//			m = s;
//			cout<<"The Product of these numbers is:"<<f*m<<endl;
//		}
//};
//int main(){
//	B b;
//	b.Product(140,2520);
//	b.Sum(34,45);
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Grocery{
//	public:
//		string name;
//		int quantity;
//		string product_type;
//		void info(string nam,int quant,string prod){
//			name = nam;
//			quantity = quant;
//			product_type = prod;
//			cout<<"The name of the product is:"<<name<<endl;
//			cout<<"The quantity of the product is:"<<quantity<<endl;
//			cout<<"The type of the product is:"<<product_type<<endl;
//		}
//}; 
//
//class Product:public Grocery{
//	public:
//		string prname;
//		int pro_quantity;
//		void pr_info(string pnam,int pr_quan){
//			prname = pnam;
//			pro_quantity = pr_quan;
//			cout<<"The name of the goods is:"<<prname<<endl;
//			cout<<"The quantity of the goods is:"<<pro_quantity<<endl;
//		}
//};
//int main(){
//	Product p;
//	p.info("Fortune Oil",2,"Oil");
//	p.pr_info("Milk",5);
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Electronics{
//	string name ;
//	int quantity;
//	public:
//		 void info(string nam,int quan){
//			name = nam;
//			quantity = quan;
//			cout<<"The name  of the device is:"<<name<<endl;
//			cout<<"The quantity of the device is:"<<quantity<<endl; 
//			
//			
//		 }
//};
//class Bulb:public Electronics{
//	string bu_name;
//	int qu_bu;
//	public:
//	 void info_c(string na1,int q1){
//		bu_name = na1;
//		qu_bu = q1;
//		cout<<"The name of the bulb is:"<<bu_name<<endl;
//		cout<<"quantity of the bulb is:"<<qu_bu<<endl;
//	 }
//};
//int main(){
//	Bulb b1;
//	b1.info("mobiles",4);
//	b1.info_c("LED Bulb",7);
//	
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class Sports{
//	string player;
//	int no_of_player;
//	void player_info(string name,int number){
//		player = name;
//		no_of_player = number;
//		cout<<"The name of the player is:"<<player<<endl;
//		cout<<"The number of the players is:"<<no_of_player<<endl;
//	}
//};
//class Cricket{
//	string batsman;
//	int no_of_batsman;
//	public:
//	  void batsman_info(string bat,int no){
//		batsman = bat;
//		no_of_batsman = no;
//		cout<<"The name of the batsman is:"<<batsman<<endl;
//		cout<<"The number of the batsman is:"<<no_of_batsman<<endl;
//	  }
//	
//};
//int main(){
//	Cricket C;
//	C.batsman_info("Suraj",11);
//	return 0;
//} 

//6
#include<iostream>
using namespace std;
class Animal{
	string name;
	int legs;
	int eyes;
	public:
	  void animal_info(string nam,int leg,int eye){
		name = nam;
		legs = leg;
		eyes = eye;
		cout<<"The name of the Animal is:"<<name<<endl;
		cout<<"The legs of the Animal is:"<<legs<<endl;
		cout<<"The eyes of the Animal is:"<<eyes<<endl;
	  }
	
	
};
class Dog:public Animal{
	string name;
	string sound;
	int legs;
	int eyes;
	public:
	 void dog_info(string na,string so,int le,int ey){
		name = na;
		sound = so;
		legs = le;
		eyes = ey;
		cout<<"The name of the dog is:"<<name<<endl;
		cout<<"The sound of the dog is:"<<sound<<endl;
		cout<<"The legs of the dog is:"<<legs<<endl;
		cout<<"The no of eyes of the dog is:"<<eyes<<endl;
		
	 }
};
int main(){
	Dog d;
	d.animal_info("Lion",4,2);
	d.dog_info("Sheru","bark",4,2);
	return 0;
}

