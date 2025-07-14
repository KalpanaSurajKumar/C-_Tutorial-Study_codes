// Multilevel Inheritence
//1
//#include<iostream>
//using namespace std;
//class Grandfather{
//	public:
//		string sirname = "Jha";
//		string name = "shri shushil";
//	};
//class Father:public Grandfather{
//	string namef;
//	string profession;
//	public:
//	   void show(string n,string pro){
//		namef = n;
//		profession = pro;
//		cout<<"The name of the father is:"<<namef<<endl;
//		cout<<"The profession of the the father is:"<<profession<<endl;
//		
//	   }
//};
//class Son:public Father{
//	string son_name;
//	string son_profession;
//	public:
//	    void info(string sname,string spro){
//		son_name = sname;
//		son_profession = spro;
//		cout<<"The name of the son is:"<<son_name<<endl;
//		cout<<"The profession of the son is:"<<son_profession<<endl;
//		
//		
//	    }
//};
//int main(){
//	Son s;
//	s.info("Suraj","Machine Learning Engineer");
//	s.show("Shri Vijay kumar jha","technician");
//	cout<<"The name of the grandfather is:"<<s.name<<endl; 
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Home{
//
//	string paint = "Red";
//	string name = "Kalpana";
//	
//};
//class Kitchen:public Home{
//	string k_name;
//	int  space;
//	public:
//		void info(string k,int sp){
//			k_name = k;
//			space = sp;
//			cout<<"The name of the kitchen is:"<<k_name<<endl;
//			cout<<"The space it occupies is:"<<space<<endl;
//		}
//};
//class Dining_room:public Kitchen{
//	int plates;
//	string color;
//	string food;
//	public:
//	    void show(int pl,string co,string foo){
//		plates = pl;
//		color = co;
//		food = foo;
//		cout<<"The number of plates is:"<<plates<<endl;
//		cout<<"The color of the dining table is:"<<color<<endl;
//		cout<<"The name of the food is:"<<food<<endl;
//	   }
//};
//	
//	
//int main(){
//	Dining_room D;
//	D.show(20,"Red","Matar Paneer");
//	D.info("Bhojanam",340554345);
//	return 0;
//}

//3
#include<iostream>
using namespace std;
class A{
	protected:
	 char name = 'A';
	 int num1 = 1;
	
};

class B:protected A{
	protected:
		char bname;
		int number;
		void know(char bn,int nu){
			bname = bn;
			number = nu;
			cout<<"The name is alphabet  :"<<bname<<endl;
			cout<<"The number is:"<<number<<endl;
		}
 
};
class C:protected B{
	public:
		char cname;
		int numc;
		void show2(char c1,int n1){
			cname = c1;
			numc = n1;
			cout<<"The name of C is:"<<cname<<endl;
			cout<<"The numc is:"<<numc<<endl;
		}
	
};


int main(){
	C a;
	a.show2('C',3);
	a.know('B',2);
	
	return 0;
}
