// Function Objects(Functors) in C++ STL
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
	/*Function Objects(Functors): Function wrapped in a class so that it  is
	available like an object*/
	int arr[] = {1,73,4,2,54,1};
	sort(arr,arr+6); // Sort in Ascending order
//	sort(arr,arr+6,greater<int>());  // Sort in Descending order
	for(int i =0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	// Functor to add two numbers
	plus<int> add;
    cout << add(10, 20)<<endl; 
    
    // Functor to minus two number
    minus<int> mi;
    cout<<mi(20,10)<<endl;
    
    // Functor to multiply two numbers
	multiplies<int> ml;
	cout<<ml(20,10)<<endl;
	
	// Functor to check which number is greater
	greater<int> gr;
	cout<<gr(20,10)<<endl;
	return 0;
}
