//Header files and Operators in C++
//Operators in C++
# include<iostream>
# include"this.h"
using namespace std;
int main(){
	// Arithematic Operators
	int a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
//	cout<<"The sum is:"<<(a+b)<<endl;
//	cout<<"The difference is:"<<(a-b)<<endl;
//	cout<< "The product is:"<<(a*b)<<endl;
//	cout<< "The division is:"<<(a/b)<<endl;
//	cout<< "The modulus is:"<<(a%b)<<endl;
//	cout<< "The increment  is:"<<(a++)<<endl;
//	cout<<a;
//	cout<< "The decrement is:"<<(a--)<<endl;

//2. Assignment Operators
int c =a ,d =3;
cout<<"The value of c is:"<<c<<endl;
d +=c;
cout<<d<<endl;

// 3. Comparison Operator
cout<<(a<b)<<endl;;
cout<<(a>b)<<endl;
cout<<(a<=b)<<endl;
cout<<(a>=b)<<endl;
cout<<(a ==b)<<endl;
cout<<(a!=b)<<endl;

// 4. Logical Operators
cout<<(a<b)&&(a>b);
cout<<endl;
cout<<(true||false)<<endl;
cout<<(a!=0)<<endl;
cout<< (sum(30,40));

	return 0;
}
