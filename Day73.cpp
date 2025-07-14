// C++ STL-Maps
#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array

int main(){
	map<string,int> marksMap;
	marksMap["Suraj"] = 99;
	marksMap["Harry"] = 89;
	marksMap["Maya"] = 20;
	marksMap.insert({"Kozume",169});
	marksMap.insert({"Kuroo",187});
	map<string,int>::iterator itr;
	for(itr = marksMap.begin(); itr!= marksMap.end();itr++){
		cout<<(*itr).first<<" "<<(*itr).second<<"\n";
		
	}
	//To check the size of the Map
	cout<<"The size of the above map is:"<<marksMap.size()<<endl; 
	
	// To check the max size of the Map
	cout<<"The max possible size of the Map is:"<<marksMap.max_size()<<endl;
	
	
	// To check the Map is empty or not
	cout<<"The empty return value is:"<<marksMap.empty()<<endl;
	return 0;
	
}
