// Call by value 
//1
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 100, b=200;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of a is:"<<b<<endl;
//	cout<<"\n\n\n";
//	cout<<"After the function call"<<endl;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of a is:"<<b<<endl;
//	
//	
//	return 0;
//}

////2
//#include<iostream>
//using namespace std;
//void number(int a ,int b){
//	int temp = a;
//	a =b;
//	b = temp;
//	
//	 
//}
//int main(){
//
//	int a = 600,b = 1000;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	cout<<"\n\n\n";
//	cout<<"After calling the function ";
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	
//	
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//void nam(int x,int y){
//	int temp = x;
//	x = y;
//	y = temp;
//	}
//int main(){
//	int x = 100,y  = 200;
//	cout<<"The value of x is:"<<x<<endl;
//	cout<<"The value of y is:"<<y<<endl;
//	cout<<"\n\n\n";
//	cout<<"After calling the function ";
//	cout<<"The value of x is:"<<x<<endl;
//	cout<<"The value of y is:"<<y<<endl;
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//void gamer(int x,int y){
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	}
//	int main(){
//		int x =300, y = 600;
//		cout<<"The value of x is:"<<x<<endl;
//	cout<<"The value of y is:"<<y<<endl;
//	cout<<"\n\n\n";
//	cout<<"After calling the function"<<endl;
//	cout<<"The value of x is:"<<x<<endl;
//	cout<<"The value of y is:"<<y<<endl;
//		
//		return 0;
//	}

// Call by Refrence (C style)
//1
//#include<iostream>
//using namespace std;
//void num(int *a ,int *b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	
//}
//int main(){
//	int a = 100 , b = 200;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	cout<<"After the function call"<<endl;
//	cout<<"\n\n\n";
//	num(&a,&b);
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//void number(int *a , int*b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	
//}
//int main(){
//	int a = 10000 , b = 20000;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	cout<<"After the function call"<<endl;
//	cout<<"\n\n\n";
//	number(&a,&b);
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//void kuch(int*x,int*y){
//	int temp = *x;
//	*x  = *y;
//	*y = temp;
//	
//}
//int main(){
//	int a = 10000 , b = 20000;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	cout<<"After the function call"<<endl;
//	cout<<"\n\n\n";
//	kuch(&a,&b);
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	return 0;
//}
//
//
//// Call by Refrence (C++ style)
//
////1
//#include<iostream>
//using namespace std;
//void kuch(int &a ,int &b){
//	int temp = a;
//	a =b;
//	b =temp;
//	
//	
//	
//}
//
//int main(){
//
//int a = 10000 , b = 20000;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	cout<<"After the function call"<<endl;
//	cout<<"\n\n\n";
//	kuch(a,b);
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//
//return 0;
////}
//
////2
//#include<iostream>
//using namespace  std;
//void ank(int&a,int&b){
//	int temp = a;
//	a = b;
//	b = temp;
//	
//}
//int main(){
//	int a = 4000; int b = 8000;
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	cout<<"\n\n\n";
//	cout<<"After the function call"<<endl;
//	ank(a,b);
//	cout<<"The value of a is:"<<a<<endl;
//	cout<<"The value of b is:"<<b<<endl;
//	
//	
//	return 0;
//	
//	
//}

//3
#include<iostream>
using namespace std;
void such(int &a ,int &b){
	int temp = a;
	a =b;
	b =temp;
}

	
	int main(){
	int a = 4000,  b = 8000;
	cout<<"The value of a is:"<<a<<endl;
	cout<<"The value of b is:"<<b<<endl;
	cout<<"\n\n\n";
	cout<<"After the function call"<<endl;
	such(a,b);
	cout<<"The value of a is:"<<a<<endl;
	cout<<"The value of b is:"<<b<<endl;
	
	
	return 0;
	
}


