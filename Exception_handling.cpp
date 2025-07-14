// Exception handling in c++
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//int main(){
//	try{
//		int num = 10;
//		int deno = 0;
//		int res;
//		if(deno==0){
//			throw runtime_error("Division by zero is not allowed!");
//		}
//		res = num/deno;
//		cout<<"Result after division:"<<res<<endl;
//	}
//	catch (const exception &e){
//		cout<<"Exception"<<e.what()<<endl;
//		
//	}
//	return 0;
//}
//1
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//int main(){
//	try{
//		int num1,num2,result;
//		cout<<"Enter the number "<<endl;
//		cin>>num1;
//		cout<<"Enter the second number"<<endl;
//		cin>>num2;
//		if(num2==0){
//			throw logic_error("Division by zero is not allowed!");
//			
//		}
//		result = num1/num2;
//		cout<<"The result of the division of these numbers is:"<<num1/num2;
//	}
//	catch (exception &e){
//		cout<<e.what();
//	}
//}
//2
//#include<iostream>
//#include<exception>
//using namespace std;
//int main(){
//	try{
//		int age ;
//		cout<<"Enter the age to check you are eligible to vote or not"<<endl;
//		cin>>age;
//		if(age<18){
//			throw(age);
//		}
//		else{
//			cout<<"Congratulation! you are eligible to vote so Welcome my friend"<<endl;
//		}
//		
//	}
//	catch(int num){
//		cout<<"Sorry but you are not enough eligible to vote so come next time when you become "<<endl;
//	}
//	

//	cout<<"\n Hey This program is not crashed because we are using Exception handling that is why ";
//	cout<<"\n Always use Exception Handling which is good and that is super cool";
//	return 0;
//}

//3
//#include<iostream>
//#include<string>
//#include<stdexcept>
//using namespace std;
//int main(){
//	try{
//		string passw;
//		cout<<"Enter the password of this laptop"<<endl;
//		cin>>passw;
//		
//		if((passw=="Suraj")||passw=="suraj"){
//			cout<<"Yes you are correct amazing ";
//		}
//		
//		else{
//			throw(passw);
//		}
//	}
//		
//		catch( const exception &e){
//			cout<<"Exception"<<e.what();
//		}
//		cout<<"End of this program"<<endl;
//	
////	return 0;
//}

//4
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//int main(){
//	try{
//		int num1,num2,result;
//		
//		cout<<"Enter the first number"<<endl;
//		cin>>num1;
//		cout<<"Enter the second number"<<endl;
//		cin>>num2;
//		result = num1/num2;
//		if(result<2){
//			throw runtime_error("Invalid Ratio showed which is not possible");
//		}
//		cout<<"\nYour profit ratio is:"<<result;
//		
//		
//		
//	}
//	catch(exception &e){
//		cout<<e.what();
//		cout<<"\nBut it does not terminates our program our program runs very smoothly"<<endl;
//		
//	}
//	return 0;
//	
//}
//5
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//int main(){
//	try{
//		cout<"somethings";
//		throw runtime_error("It is a invalid value");
//	}
//	catch(const exception &e){
//		cout<<e.what();
//	}
//
//	return 0;
//}

//6
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//int main(){
//	try{
//		int father ;
//		int son;
//		cout<<"Enter the age of father"<<endl;
//		cin>>father;
//		cout<<"Enter the age of son"<<endl;
//		cin>>son;
//		if(son>father){
//			throw runtime_error("It is not possible");
//		}
//		cout<<"The age of father is:"<<father<<" Years"<<endl;
//		cout<<"The age of the son is:"<<son<<" Years"<<endl;
//		
//	}
//	catch(const exception &e){
//		cout<<"Exception:"<<e.what();
//		
//	}
//	return 0;
//}

//7
//#include<iostream>
//#include<exception>
//using namespace std;
//int main(){
//	try{
//		int num1,num2,result;
//		cout<<"Enter the number1"<<endl;
//		cin>>num1;
//		cout<<"Enter the number2"<<endl;
//		cin>>num2;
//		if(num2==0){
//			throw (num2);
//		}
//		result = num1/num2;
//		}
//		catch(char y){
//			cout<<"Error:This is a error due to division by 0"<<endl;
//			
//		}
//		catch(double z){
//			cout<<"Exception: This division is undefined"<<endl;
//		}
//		
//		catch(int m){
//			cout<<"Zero division Error:We cannot divide any number by 0"<<endl;
//		}
//		return 0;
//}
//8
#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
	try{
		string owner;
		cout<<"Enter the name of the owner"<<endl;
		cin>>owner;
		if(owner=="Suraj"||owner=="suraj"){
			throw logic_error("Error:Wrong logic applied");
		}
		
	}
	catch(const exception &e){
		cout<<e.what();
	}
	return 0;
}

//9
//10
