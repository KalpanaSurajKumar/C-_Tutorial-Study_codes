// Reading and Writing file using the open() method

// Reading file using open() method
////1
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sx;
//	ifstream in;
//	in.open("Max.txt");
//	in>>sx;
//	cout<<sx;
//	
//	
//	return 0;
//}

//2
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string st;
//	ifstream in;
//	in.open("Max.txt");
//	while(in.eof()==0){
//		getline(in,st);
//		cout<<st<<endl;
//	}
//	return 0;
//}

//3
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sx;
//	ifstream in;
//	in.open("Max.txt");
//	while(getline(in,sx)){
//		cout<<sx<<endl;
//	}
//	
//	return 0;
//}


// Writing file using open() method
//1
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sx;
//	ofstream out;
//	out.open("Max.txt");
//	getline(cin,sx);
//	out<<sx;
//	return 0;
//}

//2
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string st;
//	ofstream out;
//	out.open("Max.txt");
//	getline(cin,st);
//	out<<st;
//	return 0;
//}

//3
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sx;
//	ofstream out;
//	out.open("Max.txt");
//	getline(cin,sx);
//	cout<<sx;
//	
//	return 0;
//}

// Reading the Entire content from the file
//1
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string str;
//	ifstream in;
//	in.open("Max.txt");
//	while(in.eof()==0){
//		getline(in,str);
//		cout<<str<<endl;
//		
//	}
//}

//2
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string str;
	ifstream in;
	in.open("Max.txt");
	while(in.eof()==0){
		getline(in,str);
		cout<<str<<endl;
	}
	return 0;
}
