// Lists in C++ STL
#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
	list<int>::iterator it;
	for(it = lst.begin();it!= lst.end();it++){
		  
		  cout<<*it<<" ";

	}
	cout<<endl;
}
int main(){
	list<int> list1;      // It creates a list of 0 length
list1.push_back(500);
list1.push_back(76);
list1.push_back(103);
list1.push_back(99);
list1.push_back(29);

display(list1);
// Removing elements from the list 
//list1.pop_front();
//list1.pop_back();
//list1.remove(29);


// Sorting the list
//list1.sort();
//display(list1);


// Reversing the List
list1.reverse();
display(list1);


list<int> list2(3);    // Empty list of size 3;

list<int>::iterator iter;
	iter = list2.begin();
	*iter = 45;
	iter++;
	*iter = 6;
	iter++;
	*iter = 9;
	iter++;
	display(list2);
	

	list1.sort(); // Sorting and Merging both together
	list2.sort();
	
	// Merging the lists
	
	list1.merge(list2);   
	cout<<"List 1 after merging:";
	display(list1);
	return 0;
}
