// Friend Functions in c++
//1
//#include<iostream>
//using namespace std;
//class Number{
//	private:
//		int num;
//	public:
//		void ank(int akshar){
//			num = akshar;
//			}
//			
//		friend void sab(Number n1);
//
//};
//void sab(Number n1){
//	cout<<"The number is:"<<n1.num;
//}
//
//
//int main(){
//	Number n1;
//	int n;
//	cout<<"Enter the number"<<endl;
//	cin>>n;
//	n1.ank(n);
//	sab(n1);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Shape{
//	int length;
//	public:
//		void ank(int saki){
//			length = saki;
//		
//		}
//	    friend int sammi(Shape s1);
//}; 
//int sammi(Shape s1){
//return s1.length;
//}
//int main(){
//	Shape ka;
//	ka.ank(2000);
//	cout<<"The number is:"<<sammi(ka)<<endl;
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class BK;
//class AK{
//	int num;
//	public:
//	  void Number(int cam){
//		num = cam;
//	 }
//	friend void max(AK ,BK );
//};
//class BK{
//	int num2;
//	public:
//	  void Number2(int cam2){
//		 num2 = cam2;
//	}
//	friend void max(AK,BK);
//};
//void max(AK a1,BK b2){
//	if(a1.num>b2.num2){
//		cout<<"The number "<<a1.num<<" is greater than "<<b2.num2<<endl;
//	}
//	else if(a1.num == b2.num2){
//		cout<<"The number "<<a1.num<<" is equal to "<<b2.num2<<endl;
//		
//	}
//	
//	else{
//		cout<<"The number "<<b2.num2<<" is greater than "<<a1.num<<endl;
//	}
//}
//int main(){
//	int x,y;
//	cout<<"Enter the first number"<<endl;
//	cin>>x;
//	cout<<"Enter the second number"<<endl;
//	cin>>y;
//	AK a1 ;
//	BK b2;
//	a1.Number(x);
//	b2.Number2(y);
//	max(a1,b2);
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//class Area{
//	int len,bred;
//	public:
//	  void area(int l, int b){
//		 len = l;
//		 bred = b;
//	}
//friend void Ar(Area);	
//};
//void Ar(Area a){
//	cout<<"The area of the rectangle is:"<<a.len*a.bred<<endl;
//
//}
//int main(){
//  Area a;
//  a.area(20,16);
//  Ar(a);
//  	
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class vectorsum{
//	int i,j,k;
//	public:
//		void vector(int s,int f,int t){
//			i = s;
//			j= f;
//			k =t;
//			
//		}
//		friend void matki(vectorsum);
//};
//void matki(vectorsum sk){
//	cout<<"The number in the vector form is:"<<sk.i<<"i + "<<sk.j<<"j + "<<sk.k<<"k"<<endl;
//	
//}
//
//int main(){
//	vectorsum vk;
//	vk.vector(10,20,30);
//	matki(vk);
//	
//	return 0;
//}
//6
#include<iostream>
using namespace std;
class Vector{
	int x,y,z;
	public:
		void vecati(int m,int n,int o){
			x = m;
			y = n;
			z = o;
		
		
			
		}
		friend void satti(Vector,Vector);
};
void satti(Vector v1, Vector v2){
   cout<<"The sum of the vectors is:"<<v1.x + v2.x<<"i + "<<v1.y + v2.y<<"j +"<<v1.z + v2.z<<" k"<<endl;
}
int main(){
Vector v1,v2;
int x1,y1,z1;
int x2,y2,z2;
cout<<"Enter the value of x1, y1 and z1 respectively:"<<endl;
cin>>x1>>y1>>z1;
cout<<"Enter the value of x2,y2 and z2 respectively:"<<endl;
cin>>x2>>y2>>z2;

v1.vecati(x1,y1,z1);
v2.vecati(x2,y2,z2);
satti(v1,v2);
	
	return 0;
}

