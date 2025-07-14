//Arrays of objects using pointer in C++
//1
//#include<iostream>
//using namespace std;
//class Shopitem{
//	public:
//		string name;
//		int quantity;
//		void set(string nam,int quan){
//			name = nam;
//			quantity = quan;
//		}
//		void get(){
//			cout<<"The name of the item is:"<<name<<endl;
//			cout<<"The quantity of the item is:"<<quantity<<endl;
//		}
//};
//int main(){
//	string na;
//	int qr;
//	Shopitem S;
//	Shopitem *ptr = new Shopitem[3];
//	Shopitem *play = ptr;
//	for(int i =0 ; i<3;i++){
//		cout<<"Enter the name and quantity of items "<<i+1<<" Respectively"<<endl;
//		cin>>na>>qr;
//		ptr->set(na,qr);
//		ptr++;
//		
//	}
//	for(int j =0;j<3;j++){
//		play->get();
//		play++;
//	}
//	return 0;
//}

//2
//#include<iostream>
//using namespace std;
//class Pen{
//	string name;
//	int price;
//	public:
//		void set(string nam,int pr){
//			name = nam;
//			price = pr;
//		}
//		void get(){
//			cout<<"The name of the Pen is:"<<name<<endl;
//			cout<<"The price of the Pen is:"<<price<<endl;
//		}
//};
//int main(){
//	int i;
//	string t;
//	int q;
//	Pen px;
//	Pen *p = new Pen[4];
//	Pen *pv = p;
//	for(i =0;i<4;i++){
//		cout<<"Enter the Pen name and price of Pen "<<i+1<<" Respectively"<<endl;
//		cin>>t>>q;
//		p->set(t,q);
//		p++;
//	
//	}
//	for(i=0;i<4;i++){
//		pv->get();
//		pv++;
//	}
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//class Electronics{
//	string name;
//	string model;
//	public:
//		void set(string nam,string com){
//			name = nam;
//			model = com;
//		}
//		void get(){
//			cout<<"The Name of the Electronics company is:"<<name<<endl;
//			cout<<"The model of the company is:"<<model<<endl;
//		}
//};
//int main(){
//	int x;
//	string na;
//	string mo;
//	Electronics E;
//	Electronics *ptr = new Electronics[2];
//	Electronics *I = ptr;
//	for(x=0;x<2;x++){
//		cout<<"Enter the name of the Electronics company and model name respectively"<<endl;
//		cin>>na>>mo;
//		ptr->set(na,mo);
//		ptr++;
//	}
//	for(x =0;x<2;x++){
//		I->get();
//		I++;
//	}
//	
//	
//	return 0;
//}

//4
#include<iostream>
using namespace std;
class Robots{
	string name;
	int weight;
	public:
		void set(string nam,int wei){
			name = nam;
			weight = wei;
		}
		void get(){
			cout<<"The name of the Robot is:"<<name<<endl;
			cout<<"The weight of the Robot is:"<<weight<<endl;
		}
		
};
int main(){
	int i;
	string nm;
	int wh;
	Robots R;
	Robots *rx = new Robots[4];
	Robots *fx = rx;
	for(i=0;i<4;i++){
		cout<<"Enter the name of the Robot and its weight Respectively"<<endl;
		cin>>nm>>wh;
		rx->set(nm,wh);
		rx++;
	}
	for(i=0;i<4;i++){
		fx->get();
		fx++;
	}	
	
	return 0;
}

