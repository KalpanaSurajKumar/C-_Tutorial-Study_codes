// Objects and Classes in C++
//1
//#include<iostream>
//using namespace std;
//class Myclass{
//	public:
//	int num;
//};
//int main(){
//	Myclass obj1;
//	obj1.num = 100;
//	cout<<"The number is:"<<obj1.num<<endl;
//	return 0;
//}
//2
//#include<iostream>
//using namespace std;
//class Myname{
//	public :
//		string name;
//		long  long int number ;
//};
//int main(){
//	Myname obj;
//	obj.name = "Suraj";
//	obj.number = 8219534478;
//	cout<<"Your name is:"<<obj.name<<endl;
//	cout<<"Your phone number is:"<<obj.number<<endl;
//	
//	
//	return 0;
//}
//3
//#include<iostream>
//using namespace std;
//class Employee{
//	public:
//		string name ;
//		long long int number;
//		string father_name;
//		string mother_name;
//		
//};
//int main(){
//	Employee obj;
//	obj.name= "Suraj";
//	obj.number = 8219534478;
//	obj.father_name = "Bijay Kumar jha";
//	obj.mother_name = "Kalpana";
//	cout<<"My name is:"<<obj.name<<endl;
//	cout<<"My number is:"<<obj.number<<endl;
//	cout<<"My father name is:"<<obj.father_name<<endl;
//	cout<<"My mother name is:"<<obj.mother_name<<endl;
//
//	
//	return 0;
//}
//4
// Creating multiple objects
//#include<iostream>
//using namespace std;
//class Student {
//	public :
//		string name;
//		long long int number;
//		string fav_subjects;
//		
//};
//int main(){
//	Student obj1;
//	obj1.name = "Suraj";
//	obj1.number = 821934478L;
//	obj1.fav_subjects = "Mathematics";
//	cout<<"My name is:"<<obj1.name<<endl;
//	cout<<"My phone number is:"<<obj1.number<<endl;
//	cout<<"My favourite subjects is:"<<obj1.fav_subjects<<endl;
//	
//	Student obj2;
//	obj2.name = "Akriti Jha";
//	obj2.number = 9821953448L;
//	obj2.fav_subjects = "Hindi";
//	
//	cout<<"My name is:"<<obj2.name<<endl;
//	cout<<"My phone number is:"<<obj2.number<<endl;
//	cout<<"My favourite subjects is:"<<obj2.fav_subjects;
//	
//	
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//class Classroom{
//	public:
//		string name;
//		int no_of_students;
//		string subject;
//		
//};
//int main(){
//	Classroom obj1;
//	obj1.name = "BCA";
//	obj1.no_of_students = 99;
//	obj1.subject = "Mathematics";
//	
//cout<<"The name of the Course is:"<<obj1.name<<endl;
//cout<<"The number of the Students is:"<<obj1.no_of_students<<endl;
//cout<<"The name of the Subject is:"<<obj1.subject<<endl;
//
//	return 0;
//}
//6
#include<iostream>
using namespace std;
class Subjects{
	public:
		string name;
		int num;
		string Fav_color;
		
};
int main(){
	Subjects obj;
	obj.name = "Suraj";
	obj.num = 1320;
	obj.Fav_color = "Green";
	cout<<"My name is:"<<obj.name<<endl;
	cout<<"My Favourite number is:"<<obj.num<<endl;
	cout<<"My Favourite Color is:"<<obj.Fav_color<<endl;
	
	
	return 0;
}
