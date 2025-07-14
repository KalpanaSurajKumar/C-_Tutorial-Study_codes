// inline functions
//1
//#include<iostream>
//using namespace std;
//inline int  square(int x){
//	return x*x;
//	
//}
//int main(){
//	cout<<"The square of the given number is:"<<square(3);
//return 0;
//}

//2
//#include<iostream>
//using namespace std;
//inline int say(int x,int y){
//	return x*y;
//}
//int main(){
//	int prod;
//	prod = say(20,30);
//	
//	cout<<"The product of a and b is:"<<prod;
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//inline cube(int x){
//	return x*x*x;
//}
//int main(){
//	int result;
//	result = cube(83);
//	cout<<"The cube of the number is:"<<result;
//	return 0;
//}


// Static variables in C++
//1
//#include<iostream>
//using namespace std;
//int num(){
//	static int ank = 0;
//	ank++;
//	return ank;
//}
//int main(){
//	cout<<num()<<endl;
//	cout<<num()<<endl;
//	cout<<num()<<endl;
//	cout<<num()<<endl;
//
////return 0;
////}
//
////2
//#include<iostream>
//using namespace std;
// void num(){
// 	static int vi = 10;
// 	cout<<vi<<endl;
// 	vi++;
// }
//int main(){
//	num();
//	num();
//	num();
//	num();
//	
//	return 0;
//}

// constant variables
//1
//#include<iostream>
//using namespace std;
//int main(){
//	const int num = 100;
//	cout<<num<<endl;
//	cout<<num<<endl;
//	
//	num = 101;
//	cout<<num<<endl;
//	return 0;
//}

////2
//#include<iostream>
//using namespace std;
//int main(){
//	const float num = 34.44f;
//	cout<<num;
//	return 0;
//}


// constant arguments
//1
//#include<iostream>
//
//using namespace std;
//void num(const int ank){
//	cout<<ank*10;
//}
//int main(){
//	num(10);
//return 0;
//}


//2
#include<iostream>
using namespace std;
void kuch(const char val){
	cout<<val<<endl;
}
int main(){
	kuch('T');
	return 0;
}
