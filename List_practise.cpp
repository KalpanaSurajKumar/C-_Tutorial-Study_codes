// List in C++
#include<iostream>
#include<list>
using namespace std;
display(list<int> &la){
	list<int>::iterator it;
	for(it = la.begin();it!= la.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
int main(){
	list<int> li;
	li.push_back(100);
	li.push_back(200);
	li.push_back(300);
	li.push_back(400);
	li.push_back(500);
	display(li);
list<int> l(4);         //Empty list of size 4
list<int>::iterator iter;
iter = l.begin();
*iter = 344;
iter++;
*iter = 243;
iter++;
*iter = 82;
iter++;
*iter = 833;
display(l);

// Removing elements from the list
// 1.pop_back()
//l.pop_back();
//l.pop_back();
//display(l);

//2.pop_front()
//l.pop_front();
//l.pop_front();
//display(l);

//3.remove()
//l.remove(2014);
//l.remove(2005);
//display(l);


// Reversing the list
// l.reverse();
// display(l);

// sorting the list
//l.sort();
//display(l);

// Merging the list
//li.merge(l);
//display(li);


// sorting and merging the list
//li.sort();
//l.sort();
//li.merge(l);
//display(li);
//
// inserting elements in the specified postion in the list
list<int>::iterator iti;
iti = li.begin();
li.insert(iti,4002);
display(li);

// clearing the entire list 
//li.clear();
//display(li);

// to check if the list is empty
//cout<<li.empty();


// To check the number of elements in the list
//cout<<li.size();

// To swap the lists
//l.swap(li);
//display(l);
//display(li);
//	return 0;
}
