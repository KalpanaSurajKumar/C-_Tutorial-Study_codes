// Pointers in C++

//1
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 20;
//	int *pointer = &a;
//	cout<<"The address of the variable a is:"<<pointer<<endl;
//	cout<<"The address of a is:"<<&a<<endl;
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//int main(){
//	int a =20;
//	int* pointer = &a;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of a is:"<<*pointer<<endl;
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 100;
//	int *p = &a;
//	int **point = &p;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of a is:"<<*p<<endl;
//	cout<<"The value of a is:"<<**point<<endl;
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 300;
//	int * ptr = &a;
//	cout<<"The address of a is:"<<&a<<endl;
//	cout<<"The address of a is:"<<ptr<<endl;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of a is:"<<*ptr<<endl;
//	return 0;
//}


//5
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 200;
//	int *ptr = &a;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of a is:"<<*ptr<<endl;
//	cout<<"The address of a is:"<<&a<<endl;
//	cout<<"The address of a is:"<<ptr<<endl;
//	
//	
//	return 0;
//	
//}

//6
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 600;
//	int *ptr = &a;
//	int **point = &ptr;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of a is:"<<*ptr<<endl;
//	cout<<"The value of a is:"<<**point<<endl;
//	
//	cout<<"The Address of a is:"<<&a<<endl;
//	cout<<"The Address of a is:"<<ptr<<endl;
//	cout<<"The Address of a is:"<<*point<<endl;
//	return 0;
//}
//7
#include<iostream>
using namespace std;
int main(){
	int num = 300;
	int *point = &num;
	int **point1 = &point;
	cout<<"The value of num is:"<<num<<endl;
	cout<<"The value of num is:"<<*point<<endl;
	cout<<"The value of num is:"<<**point1<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"The address of num is:"<<&num<<endl;
	cout<<"The address of num is:"<<point<<endl;
	cout<<"The address of num is:"<<*point1<<endl;
	
	
	return 0;
	
}
