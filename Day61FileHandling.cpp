// Reading and Writing in a File
////1
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sx,jx;
//	ifstream in("Max.txt");
//	while(getline(in,sx)){
//	
//	cout<<sx<<endl;
//}
//in.close();
//ofstream out("Max.txt");
//cout<<"Enter something about your:"<<endl;
//getline(cin,jx);
//out<<jx;
//out.close();
//	
//	return 0;
//}

//2
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sx;
//	ofstream out("space.txt");
//	getline(cin,sx);
//	out<<sx;
//	out.close();
//	ifstream in("space.txt");
//	while(getline(in,sx)){
//		cout<<sx<<endl;
//	}
//	in.close();
//	
//	
//	return 0;
//}

//3
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sx;
//	ifstream in("space.txt");
//	while(getline(in,sx)){
//	cout<<sx<<endl;
//}
//in.close();
//ofstream out("space.txt");
//getline(cin,sx);
//cout<<sx<<endl;
//
//
//	
//	
//	return 0;
//}

//4
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string sx;
	ifstream in("space.txt");
	while(getline(in,sx)){
	cout<<sx<<endl;
}
in.close();
ofstream out("space.txt");
getline(cin,sx);
out<<sx;
out.close();
	return 0;
}
