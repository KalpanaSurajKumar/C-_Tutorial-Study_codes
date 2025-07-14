// Templates with deafult  arguments
//1
//#include<iostream>
//using namespace std;
//template<class T= string,class X = int >
//class A{
//	T t;
//	X x;
//	public:
//		void info(T a,X b){
//			t = a;
//			x = b;
//			cout<<"The first is:"<<t<<endl;
//			cout<<"The second is:"<<x<<endl;
//		}
//	
//};
//int main(){
//	A<> obj;
//	obj.info("Suraj",300);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//template<class T = string ,class X = string>
//class A{
//	T te;
//	X sa;
//	public:
//		void info(T g,X h){
//			te = g;
//			sa = h;
//			cout<<"The first thing is:"<<te<<endl;
//			cout<<"The second thing is:"<<sa<<endl;
//		}
//};
//int main(){
//	A<int ,int> obj;
//	obj.info(300,6000);
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//template<class T = float,class W= double>
//class Ox {
//	T a;
//	W w;
//	public:
//		void sum(T x,W y){
//			a = x;
//			w = y;
//			cout<<"The sum of these numbers is:"<<x+y<<endl;
//		}
//	
//};
//int main(){
//	Ox<> obj;
//	obj.sum(400.4564,600.34343);
//	return 0;
//}
//4
#include<iostream>
using namespace std;
template<class T,class X ,class Y>
class Electronics{
	T name1;
	X tame ;
	Y gam;
	public:
		Electronics(T nx, X m, Y o){
			name1 = nx;
			tame =  m;
			gam = o;
			cout<<"The first thing is:"<<name1<<endl;
			cout<<"The second thing is:"<<tame<<endl;	
			cout<<"The last thing is:"<<gam<<endl;
		}
};
int main(){
	
Electronics<int,int,int> obj(100,200,300);
	return 0;
}

