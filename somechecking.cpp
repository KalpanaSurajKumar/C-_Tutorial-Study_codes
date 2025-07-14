#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	string name = "Suraj";
	cout<< typeid(name).name()<<endl;
	return 0;
}
