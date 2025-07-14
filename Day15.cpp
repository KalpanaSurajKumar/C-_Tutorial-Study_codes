//Functions 

//1
//#include<iostream>
//using namespace std;
//void message(){
//	cout<<"Hello my name is Suraj Kumar";
//	
//}
//int main(){
//	message();
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//void somethings(){
//cout<<"This is something that i really don't know which is amazing"<<endl;
//}
//int main(){
//	somethings();
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//void Gamer(){
//	cout<<"This is something which is really very important think about it";
//	
//}
//int main(){
//	Gamer(); 
//	return 0;
//}
//
//with argument
//1
//#include<iostream>
//using namespace std;
//
//void num(int x,int y){
//	cout<<"The Sum of the numbers is:"<<x<<" " <<"and"<<" "<<y<<" "<<"is"<<" "<<x+y;
//}
//
//int main(){
//	num(100,300);
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//void name(string);
//int main(){
//	name("Suraj");
//	return 0;
//}
//void name(string fname){
//	cout<<"My name is:"<<fname;
//} 
//3
//#include<iostream>
//using namespace std;
//void Fruit(string);
//int main(){
//	Fruit("Apple");
//	return 0;
//}
//
//void Fruit(string fal){
//	cout<<"My Favourite fruit is:"<<fal;
//}

//with multiple arguments 
//1
//#include<iostream>
//using namespace std;
//void info(string name,int marks){
//	cout<<"The name of the Student is "<<name<< " and his marks is: "<<marks;
//}
//
//int main(){
//	info("Suraj",50);
//	return 0;
////}
//
////2
//#include<iostream> 
//using namespace std; 
//void info(string name,int roll_no,string course,int lucky_number){
//	cout<<" The name of the Student is: "<<name<< " and  his roll number is: "<<roll_no<<" his course is "<<course<<" and his lucky number is:"<<lucky_number;
//}
//int main(){
//	info("Suraj",84,"BCA",34);
//	return 0;
//	
//}


//3
//#include<iostream>
//using namespace std;
//void favourite(string fname,string fbook,string currency){
//	cout<<" My favourite name is:"<<fname<<" and his favourite subject is: "<<fbook <<" and his favourite currency is:"<<currency;
//	
//}
//int main(){
//	favourite("Ram","Bhagwat geeta","Rupees");
//	return 0;
//}

//default arguments
//1
//#include<iostream>
//using namespace std;
//void  country(string count="India"){
//	cout<<"My Favourite country is: " <<count<<endl;
//}
//int main(){
//	country();
//	country("America");
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//void  device(string dev = "Smart phone"){
//	cout<<"My favourite device is:"<<dev;
//	
//}
//
//int main(){
//	device();
//	device("Laptop");
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//void  hunks(string day="Monday"){
//	cout<<"Today is :"<<day<<endl;
//}
//int main(){
//	hunks("Sunday");
//	hunks();
//	
//	return 0;
//}

//return  statements
//1
//#include<iostream>
//using namespace std;
//int sum(int x, int y){
//	return x+y;
//}
//int main(){
//	cout<<"THe sumf of the numbers is:"<<sum(20,30)<<endl;
//	return 0;
//}
//2
//#include<iostream>
//using namespace std;
//int product(int x,int y){
//	return x*y;
//}
//int main(){
//	cout<<"Thr product of the two numbers is:"<<product(30,50);
//	
//}
//3
#include<iostream>
using namespace std;
string name(string nam){
	return nam;
}

int main(){
	cout<<"My name is:"<<name("Suraj")<<endl;
	cout<<"My name is:"<<name("Maya");
}


