// Intialization list in C++
//1
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int a;
//		int b;
//		A(int x,int y){
//			b = y;
//			a = x;
//			cout<<"The value of a is:"<<a<<endl;
//			cout<<"The value of b is:"<<b<<endl;
//		}
//};
//int main(){
//	A a(400,500);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		string name;
//		int num;
//		string subject;
//		A(string na,int nu,string su):name(na),num(nu),subject(su){
//			cout<<"The name of the person is:"<<name<<endl;
//			cout<<"The lucky number of the person is:"<<num<<endl;
//			cout<<"The favourite subject of the person is:"<<subject<<endl;
//		}
//};
//int main(){
//	A a("Suraj",101,"Mathematics");
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//	class Names{
//		string na,nb ,nc,nd ,ne,nf,ng;
//		public:
//		Names(string n1,string n2,string n3,string n4,string n5,string n6,string n7){
//			na = n1;
//			nb = n2;
//			nc = n3;
//			nd = n4;
//			ne = n5;
//			nf = n6;
//			ng = n7;
//			cout<<"The names in Respective order is:"<<na<<endl<<nb<<endl<<nc<<endl<<nd<<endl<<ne<<endl<<nf<<endl<<ng<<endl;
//		}
//	};
//	int main(){
//		Names name("Suraj","Kalpana","Juhi","Akriti","Shruti","Yashraj","Rahul");
//	return  0;
//}


//4
//#include<iostream>
//using namespace std;
//class Cars{
//	string c1;
//	string c2;
//	string c3;
//	string c4;
//	string c5;
//	string c6;
//	string c7;
//	public:
//		Cars(string g1,string g2,string g3,string g4,string g5,string g6,string g7):c1(g1),c2(g2),
//		c3(g3),c4(g4),c5(g5),c6(g6),c7(g7){
//			cout<<"The name are respectively:"<<c1<<endl<<c2<<endl<<c3<<endl<<c4<<endl<<c5<<endl<<c6<<endl<<c7<<endl;
//			
//		}
//};
//int main(){
//	Cars fx("Tesla","Tata","General Motors","Mahindra","Rolls Royce","Ford","Lamborgini");
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class Phones{
//	public:
//		int num;
//		int na;
//		Phones(int n1,int n2):num(n2),na(n1*10000){
//			cout<<"The value of num is:"<<num<<endl;
//			cout<<"The value of na is:"<<na<<endl;
//			
//		}
//};
//int main(){
//	Phones(100,400);
//	return 0;
//}

//6
//#include<iostream>
//using namespace std;
//class Fruit{
//	string f1;
//	string f2;       // yad rakhna ye Error dega kyunki hum intialization list mai jo subse pehle declare
//	// karte hai usi ko initialize karna hota hai
//	string f3;
//	public:
//		Fruit(string a1,a2,a3):f2(a1),f3(a2),f1(a3){
//			cout<<"The name of the first fruit is:"<<f1<<endl;
//			cout<<"The name of the second fruit is:"<<f2<<endl;
//			cout<<"The name of the Third fruit is:"<<f3<<endl;
//			
//		}
//};
//int main(){
//	Fruit("Apple","Banana","Lithi");
//	return 0;
//}
//7
#include<iostream>
using namespace std;
class A{
	public:
		int a;
		int b;
		int c;
		A(int x,int y,int z):a(z),b(x){
			c = y;
			cout<<"The value of a is:"<<a<<endl;
			cout<<"The value of b is:"<<b<<endl;
			cout<<"The value of c is:"<<c<<endl;
			
		}
};
int main(){
	A ma(10,20,40);
	return 0;
}
