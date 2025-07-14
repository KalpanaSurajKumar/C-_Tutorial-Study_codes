// Loops in C++

// For loop 
//1
//#include<iostream>
//using namespace std;
//int main(){
//	int num ;
//	for(num=0;num<=100;num++){
//		cout<<num<<endl;
//		cout<<"Suraj is the best Student which is somethings"<<endl;
//	}
//	return 0;
//}
//2
//#include<iostream>
//using namespace std;
//int main(){
//for(int j=0;j<100;j++){
//	cout<<"Hello world"<<endl;
//}
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//int main(){
//	for(int value;value<=20;value++){
//		cout<<"This is somethings in the value of which is some things and has"<<endl;
//	}
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//int main(){
//	int fact=1;
//	// Factorial program
//	int val,some;
//	cout<<"Enter the number to find the factorial of the given numbers"<<endl;
//	cin>>val;
//	some = val;
//	for(int num=val;num>0;num--){
//		fact = fact*num;
//		
//	}
//	cout<<"The factorial of the number" <<some<< "is:" <<fact;
//	return 0;
//}


// While loop

////1
//#include<iostream>
//using namespace std;
//int main(){
//	int x = 0;
//	while(x!=20){
//		cout<<"This is amazing which is some that is Suraj Kumar Jha"<<endl;
//	}
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//int main(){
//	int num=10;
//	while(num!=100){
//		cout<<"The Secret number is:"<<num<<endl;
//		num = num + 10;
//	}
//	
//}

//3
//#include<iostream>
//using namespace std;
//int main(){
//	// Infinite loop
//	while(true){
//		cout<<"Say Hello to Suraj Kumar Jha"<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	// Another way to write infinite loop
//	while(1){
//		cout<<"This is somethings which is somethings what that is somethings in the world"<<endl;
//	}
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//int main(){
//	// To find the factorial of the numbers
//	int fact = 1;
//	int num,some;
//	cout<<"Enter the number to find the factorial of the numbers"<<endl;
//	cin>>num;
//	some = num;
//	
//	while(num!=0){
//		fact = fact*num;
//		num-=1;
//	}
//	cout<<"The factorial of the number is:"<<fact<<endl;
//	
//	return 0;
//}


// do while loop
//1
//#include<iostream>
//using namespace std;
//int main(){
//	int num = 10;
//	do{
//		cout<<num<<endl;
//		num++;
//	} while(num<30);
//	return 0;
//}
//2
//#include<iostream>
//using namespace std;
//int main(){
//	int i =10;
//	do{
//		cout<<"This is Super Amazing which is Suraj Kumar Jha"<<endl;
//	}
//	while(i<10);
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//int main(){
//	// To find the factorial of the given numbers
//	int fact =1;
//	int num,some;
//	cout<<"Enter the number to find the factorial"<<endl;
//	cin>>num;
//	some = num;
//	do{
//		fact = fact*num;
//		num = num-1;
//	} while(num!=0);
//	cout<<"The factorial of the given number is:"<<fact<<endl;
//	
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
//int main(){
//	int num = 1;
//	do{
//		cout<<"This is somethings which is hat that is man in the that is Suraj Kumar Jha"<<endl;
//		num++;
//		
//	} while(num<=10);
//	
//	return 0;
//}

// Quick Quiz

#include<iostream>
using namespace std;
int main(){
	int num=1,nam;
	cout<<"Enter the number to find its table:"<<endl;
	cin>>nam;
	// To find the table of 6
do{
	cout<<nam<<"X"<<num<<"="<<nam*num<<endl;
	num++;
}while(num<=10);

	return 0;
}
