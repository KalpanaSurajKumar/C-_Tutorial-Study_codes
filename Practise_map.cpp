// C++ STL Maps
#include<iostream>
#include<map>
using namespace std;
// Map is a collection of key:value pairs
void display(map<string,int> &ma){

map<string,int>::iterator it;
for(it = ma.begin();it!=ma.end();it++){
	cout<<it->first<<" "<<it->second<<endl;
}
}
int main(){
	map<string,int> marksMap;
	marksMap["Suraj"] = 100;
	marksMap["Maya"]  = 98;
	marksMap["Rahul"]  = 99;
	marksMap["Virat"] = 39;
	
	map<string,int> marksMap2;
	marksMap["Yashu"] = 83;
	marksMap["Yashika"]  = 88;
	marksMap["Nikhil"]  = 80;
	marksMap["Vijay"] = 89;
	// To insert the values in the map
	marksMap.insert({"Shruti",92});
	marksMap.insert({"Akriti",98});
	marksMap.insert({"Shruti",92});
	marksMap.insert({"Kalpana",107});
	marksMap.insert({"Juhi",101});
	
	
	// To access the value of the map 
//	cout<<marksMap["Suraj"]<<endl;


// To check the size of the map
// cout<<"The size of the map name->marksMap is:"<<marksMap.size()<<endl;

// To check the max size of the map
//cout<<"The max size  of the map name-->marksMap is:"<<marksMap.max_size()<<endl;

// To check the map is empty or not (if value is 0 then it is not empty else if value is 1 then it is empty)
//cout<<"The given map is:"<<marksMap.empty()<<endl;
cout<<"\n\n";


// Element Access
//1. at(key)
//cout<<marksMap.at("Suraj")<<endl;
//cout<<marksMap.at("Maya")<<endl;

//2. operator[] --> map[key]
//cout<<"The marks of kalpana is:"<<marksMap["Kalpana"]<<endl;
//cout<<"The marks of Akriti is:"<<marksMap["Akriti"]<<endl;

// Modifiers
//1.insert()
//marksMap.insert({"Saurav",100});
//cout<<marksMap["Saurav"]<<endl;

//2.emplace()
//marksMap.emplace("Saurav",100);
//display(marksMap);

////3. erase()
//marksMap.erase("Suraj");
//marksMap.erase("Akriti");
//display(marksMap);

// 4.clear()
//marksMap.clear();
//display(marksMap);

// 5. swap()
//marksMap.swap(marksMap2);
//display(marksMap);

//6.find()
//map<string,int>::iterator it;
//it = marksMap.find("Suraj");
//cout<<*it<<endl;

// 7.count()
cout<<marksMap.count("Suraj");
	return 0;
}
