// Function Objects(Functors) in C++ STL
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
	/*Function Objects(Functors)--> Function wrapped in a class such that it
	is available like an object */
	int arr[] = {4,2,1,7,80,23,21,13};
	
//sort(arr,arr+8);  // Sorting in Ascending order
sort(arr,arr+8,greater<int>()); // Sorting in Descending order
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}

