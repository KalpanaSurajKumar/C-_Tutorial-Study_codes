// Recursions in C++
//1 To find the factorial of a number
//#include<iostream>
//using namespace std;
//int fact(int x){
//		if(x==0){
//			return 1;
//		}
//		
//		else{
//			return x*fact(x-1);
//			
//		}
//	}
//int main(){
//int ank,num;	
//	cout<<"Enter the number to find the factorial"<<endl;
//	cin>>ank;
//	num = fact(ank);
//	cout<<"The Factorial of the given number is:"<<num<<endl;
//	return 0;
//}

//2 To find the fibonnaci of the given terms

//#include<iostream>
//using namespace std;
//int fib(int x){
//	if(x==0||x==1) {
//		return 0;
//	}
//	else if (x==2){
//		return 1;
//	}
//	else{
//		return fib(x-1)+ fib(x-2);
//	}
//}
//int main(){
//	int ank,num;
//	cout<<"Enter the number of terms to find its fibonnaci Series"<<endl;
//	cin>>ank;
//	 num = fib(ank);
//	for(int i =1;i<=ank;i++){
//		cout<<fib(i)<<" ";
//	}
//	
//	return 0;
//	
//}

//3 To find the power of any number
//#include<iostream>
//using namespace std;
//int power(int num,int exp){
//	if(exp==0){
//		return 1;
//	}
//	else{
//	return num*power(num,exp-1);	
//	}
//}
//
//int main(){
//	int num, exp;
//	cout<<"Enter the number to find its exponential and Enter its power Respectively"<<endl;
//	cin>>num>>exp;
//	int exponential = power(num,exp);
//	cout<<"The Exponential of given number is:"<<exponential<<endl;
//	
//	
//	return 0;
//}

//4 To find the sum of  the n terms of the given  numbers
//#include<iostream>
//using namespace std;
//int summer(int num){
//	if(num==0){
//		return 0;
//	}
//	
//	else{
//		return num +summer(num-1);
//	}
//	
//}
//int main(){
//	int num,suming;
//	cout<<"Enter the number of terms to find its sum"<<endl;
//	cin>>num;
//	suming = summer(num);
//	cout<<"The sum of the " <<num<<" terms is:"<<suming<<endl;
//	
//	return 0;
//}

// Code to print the numbers between any initial point to the last point 

#include<iostream>
using namespace std;
int print_number(int initial,int last){
	if(initial<=last){
		cout<<initial<<endl;
		print_number(initial+1,last);
			
		}
		else{
			return 0;
		}
	}
 int main(){
 	print_number(1,10);
	
	return 0;
}
