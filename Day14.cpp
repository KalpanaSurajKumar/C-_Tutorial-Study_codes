// Stuctures in C++
//1
//#include<iostream>
//#include<string.h>
//using namespace std;
//struct emp{
//	char * name;
//	int num;
//	char m;
//};
//
//int main(){
//struct emp info;
//    info.name = "Suraj";
//	info.num = 100;
//	info.m = 'S';
//	cout<<"The name of the Employee is:"<<info.name<<endl;
//	cout<<"The id of the Employee is:"<<info.num<<endl;
//	cout<<"The Favourite character of the Employee is:"<<info.m<<endl;
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//struct Students{
//	string name;
//	int roll_no;
//	string food;
//};
//int main(){
//	struct Students info;
//	info.name = "Suraj";
//	info.roll_no = 302;
//	info.food = "Paneer";
//	cout<<"The string has size:"<<sizeof(info.name)<< "Bytes"<<endl;
//	cout<<"The integer has size:"<<sizeof(info.roll_no)<<"Bytes"<<endl;
//	cout<<"The string has size:"<<sizeof(info.food) <<"Bytes"<<endl;
//	cout<<"The size of the Structure is:"<<sizeof(Students)<<"Bytes"<<endl;
//
//return 0;	
//}

//3
//#include<iostream>
//using namespace std;
//struct Fruits{
//	string name;
//	int quantity;
//	string color;
//}f1,f2,f3;
//int main(){
//	
//	f1.name = "Mango";
//	f1.quantity = 5;
//	f1.color = "yellow";
//	
//	f2.name = "Mango";
//	f2.quantity = 5;
//	f2.color = "yellow";
//	
//	f3.name = "Mango";
//	f3.quantity = 5;
//	f3.color = "yellow";
//	
//	cout<<"The name of the first fruit is:"<<f1.name<<endl;
//	cout<<"The quantity of the first fruit is:"<<f1.quantity<<endl;
//	cout<<"The color of the first fruit is:"<<f1.color<<endl;
//	
//	cout<<endl<<endl;
//	
//	cout<<"The name of the second fruit is:"<<f2.name<<endl;
//	cout<<"The quantity of the second fruit is:"<<f2.quantity<<endl;
//	cout<<"The color of the second fruit is:"<<f2.color<<endl;
//	
//	cout<<endl<<endl;
//	
//	
//	cout<<"The name of the third fruit is:"<<f3.name<<endl;
//	cout<<"The quantity of the third fruit is:"<<f3.quantity<<endl;
//	cout<<"The color of the third fruit is:"<<f3.color<<endl;
//	
//	
//	
//	
//	return 0;
//	
//}

//4
//#include<iostream>
//using namespace std;
//struct device{
//	string name;
//	int quantity;
//	string cameras;
//};
//int main(){
//	struct device info = {"Mobile",5,"three"};
//	cout<<"The name of the device is:"<<info.name<<endl;
//	cout<<"The quantity of this device is:"<<info.quantity<<endl;
//	cout<<"The cameras in this device is:"<<info.cameras<<endl;
//	return 0;
//
//}

//5
//#include<iostream>
//using namespace std;
// typedef struct shows{
// 	string name;
// 	int time;
//	
//}dek;
//int main(){
//	dek s1;
//	s1.name = "Yeh Rishta kiya kehlata hai";
//	s1.time = 5;
//	cout<<"The name of my favourite show is:" <<s1.name<<endl;
//	cout<<"The time of the starting of this show is:" <<s1.time<<endl;
//	return 0;
//}

// Unions in C++

//1
//#include<iostream>
//using namespace std;
//union Food{
//	// Note we can't create strings datatype in c++ it gives an error
//	int quantity;
//};
//int main(){
//	union Food f1;
//	f1.quantity = 4;
//	cout<<"The name of the fruit is:"<<f1.quantity;
//return 0;	
//}
//2
//#include<iostream>
//using namespace std;
//union Fruit{
//	char ch;
//	int num ;
//	char * name;   // Note -- Yad rakhna ki hum enum main sirf C style wala string use 
//	// kar sakte hai 
//}f1;
//
//
//
//int main(){
//	f1.name = "Suraj";
//	cout<<"The name of the Student is:"<<f1.name<<endl;
//	f1.ch = 'A';
//	cout<<"The favourite character is:"<<f1.ch<<endl;
//    f1.num = 45;
//	
//	cout<<"The favourite number is:"<<f1.num<<endl;
//	f1.name = "Suraj";
//	return  0;
//}
//3
//#include<iostream>
//using namespace std;
// typedef union device{
//	char * name;
//	int quantity;
//	char * color;
//}sp;
//int main(){
//	sp d1;
//	d1.name = "Apple";
//	cout<<"The name of this electronics company is:"<<d1.name<<endl;
//	d1.color = "Red";
//	cout<<"The name of the color is:"<<d1.color<<endl;
//	d1.quantity = 200;
//	cout<<"The quantity of the device is:"<<d1.quantity;
//	
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//union Student{
//	char * name;
//	int id;
//	char * f_subject;
//};
//int main(){
//	union Student sa;
//	sa.name = "Suraj";
//	sa.id = 84;
//	sa.f_subject = "Mathematics";
//	cout<<"The name of the student is:"<<sa.name<<endl;
//	cout<<"The id of the student is:"<<sa.id<<endl;
//	cout<<"The favourite subject of that student is:"<<sa.f_subject<<endl;
//	return 0;
//}



// Enums in C++



//1
//#include<iostream>
//using namespace std;
//enum Weeks{Sunday=100,Monday,Tuesday,Wednesday,Thrusday
//};
//int main(){
//	enum Weeks var;
//	var = Tuesday;
//	cout<<"The value at this condition is:"<<var;
//
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//int main(){
//	enum Months{January ,February ,March ,April,May,June,July,August};
//	for(int i= January;i<=August;i++){
//		cout<<i<<endl;
//	}
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//enum Friends{Rahul=100,Abhinav,Akriti};
//int main(){
//	Friends way = Abhinav;
//	cout<<way<<endl;
//	cout<<Akriti<<endl;
//	
//	return 0;
//}
//4
//#include<iostream>
//using namespace std;
// typedef enum info { TV,newspaper,radio,Antenna
//
//};
//int main(){
//
//
//info say = TV;
//
//cout<<say;
//return 0;
//}

