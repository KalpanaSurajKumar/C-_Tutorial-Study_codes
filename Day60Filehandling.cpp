//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string name = "Meat lover and space lover";
//	// Opening file using the constructor and writing to it
//	ofstream ka("sample.txt"); // Write Operation
//	ka<<name;

// Opening file using constructor and reading from  it
//string sx;
//ifstream Ha("Gamer.txt");
// getline(Ha,sx);
//cout<<sx;
//
//
//	
//	return 0;
//}
// Opening file using constructor and writing in it
//1
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string info = "My name is suraj kumar Jha\n Suraj wants to understand the Universe";
//	ofstream out("king.txt");
//	out<<info;
//	
//	return 0;
//}
//2
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string info;
//	cout<<"Introduce yourself Mr.X"<<endl;
//	getline(cin,info);
//	ofstream out("Max.txt");
//	out<<info;
//	
//	return 0;
//}

//3
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string essay;
//	getline(cin,essay);
//	ofstream out("Max.txt");
//	out<<essay;
//
//	return 0;
//}

//4
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string game = "FreeFire is my favourite game";
//	ofstream out("Max.txt");
//	out<<game;
//	return 0;
//}

// Opening file using constructor and reading from it
//1
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	int i;
//	string sx;
//	ifstream in("Max.txt");
//	while( i<4){
//	
//	getline(in,sx);
//	cout<<sx<<endl;
//	i++;
//}
//	return 0;
//}
//2
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	ifstream in("Max.txt");
//	string s;
//	while(getline(in,s)){
//		cout<<s<<endl;
//	}
//	return 0;
//}

//3
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string sr;
//	ifstream in("Max.txt");
//	while(getline(in,sr)){
//		cout<<sr<<endl;
//	}
//	
	
	
	
	
//	return 0;
//}

//4
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string info;
//	ifstream in("Max.txt");
//	while(getline(in,info)){
//   cout<<info<<endl;
//	
//	}
//	
//	
//	return 0;
//}




// 1.writing to file
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	string info;
//	ofstream out("Max.txt");
//	getline(cin,info);
//	out<<info;
//	
//	return 0;
//}

//2. Reading from the file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string sx;
	ifstream in("Max.txt");
	while(getline(in,sx)){
		cout<<sx<<endl;
	}
	return 0;
}
