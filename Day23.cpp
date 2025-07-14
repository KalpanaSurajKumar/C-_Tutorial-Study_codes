// C++ Memory Allocation and using arrays in C++
//1
//#include<iostream>
//using namespace std;
//class Maya{
//	int counter = 0;
//	public:
//		void num(){
//			cout<<"The value of the counter is:"<<counter<<endl;
//			counter++;
//		}
//};
//int main(){
//	Maya obj1;
//	Maya obj2;
//	obj1.num();
//	obj1.num();
//	obj1.num();
//	obj1.num();
//	obj1.num();
//	obj1.num();
//	obj2.num();
//	
//	
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Arraysu{
//	int itemprice[50];
//	int counter=0;
//	public:
//		void setprice(){
//			cout<<"Enter the price of the item number "<<counter+1<<endl;
//			cin>>itemprice[counter];
//			counter++;
//		}
//		
//		void getprice(){
//			for(int i=0;i<counter;i++){
//				cout<<"The price of the item "<<i+1<<" is:"<<itemprice[i]<<endl;
//			}
//		}
//};
//int main(){
//	Arraysu obj1;
//	obj1.setprice();
//	obj1.setprice();
//	obj1.setprice();
//	obj1.setprice();
//	obj1.getprice();
//	return 0;
//}

#include<iostream>
using namespace std;
class Main{
	int counter =0;
	int car[50];
	public:
		void setcar(){
			cout<<"Enter the no "<<counter+1<<" car"<<endl;
			cin>>car[counter];
			counter++;
			
		}
		void getcar(){
			for(int i =0;i<counter;i++){
				cout<<"The car no "<<i<<" is:"<<car[i]<<endl;
			}
		}
};

int   main(){
	Main obj1;
	obj1.setcar();
	obj1.setcar();
	obj1.getcar();

	return 0;
	
}

