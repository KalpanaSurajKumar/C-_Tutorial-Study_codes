// String Functions in C++
//1. getline()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name;
//	cout<<"Enter your name"<<endl;
//	getline(cin,name);
//	cout<<"Your name is:"<<name;
//	return 0;
//}
//(i)
//#include<iostream>
//using namespace std;
//int main(){
//	string name;
//	cout<<"Enter your name"<<endl;
//	getline(cin,name);
//	cout<<"My name is:"<<name;
//	return 0;
//}

//(ii)
//#include<iostream>
//using namespace std;
//int main(){
//	string device ;
//	cout<<"Enter the name of this device"<<endl;
//	getline(cin,device);
//	cout<<"The name of your device is:"<<device<<endl;
//	
 //}

//2.push_back()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj";
//	name.push_back('A');
//	cout<<name;
//	return 0;
//	
//}
//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj";
//	name.push_back('T');
//	cout<<"The name of this is:"<<name;
//	return 0;
//}


////(ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string game = "Freefire";
//	game.push_back('K');
//	cout<<game;
//}



//5.size()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj Kumar Jha";
//	cout<<name.size();
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj Kumar wants";
//	cout<<name.size();
//	return 0;
//}
//(ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string str;
//	cout<<"Enter the string so we finds its length"<<endl;
//	getline(cin,str);
//	cout<<"The length of your written string is:"<<str.size();
//	return 0; 
//}


//6.length()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string game = "Freefire is the name";
//	cout<<"The length of this string is:"<<game.length();
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is somethings which is nothings that is not the which is not a good habit";
//	cout<<"The length of this string is:"<<name.length();
//}
//(ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string text;
//	cout<<"Enter some text to find its length"<<endl;
//	getline(cin,text);
//	cout<<"Your text length is:"<<text.length();
//}

//7.replace()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is Suraj";
//	name.replace(8,1,"Maya");
//	cout<<name;
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj wants to understand";
//	name.replace(7,1,"Maya");
//	cout<<name;
//	return 0;
//}
//(ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//
//string name = "Suraj wants to understand the universe";
//name.replace(6,5,"Pagal");
//cout<<name<<endl;
//return 0;
//}
//8.append()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is somethings";
//	name.append("Maya",0,3);
//	cout<<name;
//	
//	
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is somethings";
//	
//	name.append("Suraj",5);
//	
//	cout<<name;
//	
//	return 0;
//}
//(ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string food = "This is somethings in the which that is good that is cool";
//	food.append("Space Station");
//	
//	cout<<food<<endl;
//	return 0;
//}






//10.clear()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj kumar wants to understand the universe";
//	name.clear();
//	cout<<name;
//	return 0;
//}


//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is something in the what is somthing in the world of space and time";
//	name.clear();
//	
//	cout<<name<<endl;
//	
//	return 0;
//}

//(ii)
//#include<iostream>
//#include<string>
//int main(){
//	string name = "suraj kumar Jha";
//	name.clear();
//	cout<<name;
//	return 0;
//}


////13.swap()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "String";
//	string ga = "Denny";
//	name.swap(ga);
//	cout<<name;
//	

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string name = "Suraj Jha";
//	string name2 = "Akriti Jha";
//	name.swap(name2);
//	
//	
//	cout<<name<<endl;
//	
//	cout<<name2;
//	
//	return 0;
//}

//(ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj Kumar Jha";
//	string name2 = "Juhi Jha";
//	name.swap(name2);
//	
//	cout<<name<<endl;
//	cout<<name2<<endl;
//	return 0;
//}
	
//14.erase()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is Super Amazing";
//	name.erase(7);
//	cout<<name;
//}


//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string game = "This is super gaming";
//	string tame = "Suraj wants to understand";
//	
//	game.erase(7);
//	
//	cout<<game;
//
//
//	
//	return 0;
//}
//(ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Space and time";
//	name.erase(8);
//	cout<<name;
//	return 0;
//	
//}

//15.find()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is super amazing";
//	cout<<name.find("super");
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string sen = "This is something in the waste";
//	cout<<sen.find("the");
//	
//	return 0;
//}
// (ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is somethings in the space";
//	cout<<name.find("space");
//	return 0;
//}

//16.rfind()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is Suraj Kumar Jha";
//	cout<<name.rfind("a");
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is some thing in the some world of space time";
//	cout<<name.rfind("some");
//	
//	
//	return 0;
//}

// (ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj is the name of the person Suraj";
//	cout<<name.rfind("Suraj");
//	return 0;
//}

//18.compare()
//#include<iostream>
//#include<string>
//using namespace std;
//int  main(){
//	string name = "Suraj";   // If returns 0 then The comparison is equal to each other
//	cout<<name.compare("Suraj");
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "suraj";
//	cout<<name.compare("suraj");
//	return 0;
//}
// (ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "space";
//	string game = "Freefire";
//	cout<<name.compare(game);
//	return 0;
//	
//}


//19.empty()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj Kumar Jha"; // 0 means False;
//	cout<<name.empty();
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj want to understand";
//	cout<<name.empty();
//	return 0;
//}
// (ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = " ";
//	
//	cout<<name.empty();
//	return 0;
//}

//20.insert()
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "Suraj";
//	name.insert(2,"Maya");
//	cout<<name;
//	return 0;
//}

//(i)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string name = "This is something";
//	name.insert(0,"gamer");
//	cout<<name;                          
//	return 0;
//}
// (ii)
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string game = "FreeFire is my favourite game";
//	game.insert(0,"Maya");
//	cout<<game;
//	return 0;
//}


