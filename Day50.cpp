// Memory allocation in C++ --  new and delete Operator in C++

//1
//#include<iostream>
//using namespace std;
//int main(){
//	int * p = new int;
//	*p = 400;
//	cout<<"The value of the p is:"<<*p<<endl;
//	delete p;
//	cout<<"The value of p is:"<<*p<<endl;
//	return 0;
//}

//2
//#include<iostream>
// using namespace std;
//int  main(){
//	double * num = new double(573.3242);
//	int * value = new int (79839393);
//	cout<<"The value of the varible value is:"<<*value<<endl;
//	cout<<"The value of the number is:"<<*num<<endl;
//	delete num;
//	delete value;
//	cout<<"The value of the varible value is:"<<*value<<endl;
//	cout<<"The value of the number is:"<<*num<<endl;
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//int main(){
//	int * ptr = new int;
//	*ptr = 4555464;
//	cout<<"The value of the ptr is:"<<*ptr<<endl;
//	int * ga = new int(100);
//	cout<<"The value of ga is:"<<*ga<<endl;
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"Enter the values:"<<endl;
//	int * ptr = new int[3];
//	for(int i =0;i<3;i++){
//		cin>>*(ptr+i);
//	}
//	cout<<"The values are:"<<endl;
//   for(int j=0;j<3;j++){
//		cout<<*(ptr+j)<<endl;
//		
//	}
//}
//5
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int * ptr = new int[n];
	cout<<"Enter the values of the Array:"<<endl;
	for(int i =0;i<n;i++){
		cin>>*(ptr+i);
	}
	cout<<"The values of the Arrays are :"<<endl;
	for(int j=0;j<n;j++){
		cout<<*(ptr+j)<<endl;
	}
	delete [] ptr;
	for(int j=0;j<n;j++){
		cout<<*(ptr+j)<<endl;
	}
	return 0
	;
}
