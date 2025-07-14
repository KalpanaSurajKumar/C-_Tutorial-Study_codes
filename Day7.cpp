//// C++ refrence variables and Typecasting in C++
//# include<iostream>
//using namespace std;
//int a = 3000;
//float b = 30.345f;
//int main(){
//	int a = 200;
//	float b = 83.345;
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<::a<<endl; // This is called the scope resolution operator
//	cout<<::b<<endl; // Here :: scope resloution operator is used to access the
	//  global variable  in any function where the variable name is same 
	// i.e. a  in global and a in any local scope . so remember this
	
// Refrence Variables in C++
//int num = 100;
//int & n = num;
//cout<<num<<endl;
//num = 400;
//cout<<"The value of num is"<<num<<endl;
//cout<< "The value of n is"<<n<<endl;
////1.
//int number = 100;
//int & ank = number;
//cout<< "The number is:"<<number<<endl;
//cout<< "The n is:"<<ank<<endl;
//// after changing the value of refrence variable the value of the 
//// real variable is also changed
// number = 4;
//cout<< "The number is:"<<number<<endl;
//cout<< "The n is:"<<ank<<endl;

//2.
// int amount = 200;
// int & amt  = amount;
// cout<< "Before the refrence change is used"<<endl;
//cout<<amount<<endl;
//cout<<amt<<endl;
//
//cout<<"After the refrence variable is used"<<endl;
//amt = 3030;
//
//cout<<amount<<endl;
//cout<<amt<<endl;







//
////3.
//int x = 200;
//int & y = x;
//cout<<x<<endl;
//cout<<y;
//	return 0;
//}


// Typecasting in c++
# include<iostream>
using namespace std;
int main(){
	// implicit (automatic done by the compiler)
//	1
//int ia= 100;
//float fig = 3.356f;
//cout<<ia+fig<<endl;
////	2
//int a = 100;
//double b = 38.3563;
//cout<<a+b<<endl;
////	3
//int num1 = 200;
//double sp = 483.33733;
//cout<<num1+sp;


// explicit (done by programmer)
//1
//double dhima = 35.3532;
//int su = int(dhima);
//cout<<su;

//2
//double sample = 843.255;
//int sa = int(sample);
//cout<<sa;
//
////3
//double da = 225.3534;
//cout<<int(da);
double a = 346.4535;

// Typecasting using static_cast
cout<<static_cast<int>(a);
	return 0;
}


