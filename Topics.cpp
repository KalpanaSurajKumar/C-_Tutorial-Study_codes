//Typedef in C++
//1
//#include<iostream>
//using namespace std;
//int main(){
//	typedef int smart;
//	smart num =100;
//	cout<<"The number is:"<<num;
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//int main(){
//	const int typedef maya;
//	maya value = 200;
//	cout<<"The value of this number value is:"<<value<<endl;
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//typedef struct info{
//	string name ;
//	int value;
//}gami;
//int main(){
//	gami sa;
//	sa.name = "Suraj";
//	sa.value = 100;
//	cout<<"The name of the student is:"<<sa.name<<endl;
//	cout<<"The lucky number is:"<<sa.value;
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//int main(){
//	int a =100,b = 200;
//	
//	typedef int * num;
//	num value = &a,gami = &b;
//	cout<<"The value 1 is:"<<*value<<endl;
//	cout<<"The value 2 is:"<<*gami<<endl;
//	
//	return 0;
//}


// Macros in C++
//1
//#include<iostream>
//#define value 10
//using namespace std;
//int main(){
//	for(int i=0;i<=value;i++){
//		cout<<i<<" ";
//	}
//	return 0;
//}

//2
//#include<iostream> 
//#define Area(a,b) (a*b);
//using namespace std;
//int main(){
//	int num = Area(250,40);
//	cout<<"The area of the Rectangle is:"<<num<<endl;
//	
//	return 0;
//}

//3
#include<iostream>
#define comparison(a,b) (a>b ? a:b)
using namespace std;
int main(){
	cout<<"The value is:"<<comparison(10,20);
	
	return 0;
} 
