#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
	cout<<"\n The Elements are:"<<endl;
	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
} 

int main(){
	// Vectors all methods -----
	//1.modifiers functions
//	(i) push_back()
//	vector<int> vec1;
//	vec1.push_back(100);
//	vec1.push_back(200);
//	vec1.push_back(300);

//// (ii) pop_back()
// vec1.pop_back();
// display(vec1);

//(iii) insert()
//vector<int> v1;
//v1.insert(v1.begin(),5);
//cout<<v1[0]<<endl;

//// (iv) emplace()
// vector<int> v1;
// v1.push_back(300);
// v1.emplace(v1.begin()+1,100);
// cout<<v1[1]<<endl;

////(v) emplace_back
//vector<int> v;
//v.push_back(20);
//v.push_back(400);
//v.emplace_back(25);  // Add 25 to the end
//cout << v.back() << std::endl;  // Output: 25

//(vi) erase()
//int element;
//vector<int> v;
//for(int i =0;i<5;i++){
//	cout<<"Enter the "<<i+1<<" element"<<endl;
//	cin>>element;
//	v.push_back(element);
//	
//}
//display(v);
//v.erase(v.begin()+1);
//display(v);
//

// (vii) resize()
//vector<int> v;
//v.push_back(200);
//v.push_back(400);
//v.push_back(600);
//v.resize(10,0);
//display(v);

//(viii) clear()
//vector<int> v;
//int element;
//for(int i = 0;i<5;i++){
//	cout<<"Enter the "<<i+1<<" element"<<endl;
//	cin>>element;
//	v.push_back(element);
//	
//}
//display(v);
//v.clear();
//display(v);

// (ix) swap()
//vector<int> v1;
//vector<int> v2;
////v1.push_back(200);
//v2.push_back(500);
//v1.swap(v2);
//display(v1);

//(x) assign()
//vector<int> v1;
//v1.assign(15,7);
//display(v1);


// 2. Element Access

int element;
vector<int> v;
for(int i =0;i<4;i++){
	cout<<"Enter the "<<i+1<<" element"<<endl;
	cin>>element;
	v.push_back(element);
	
}

////(i) Operator[]
//cout<<"The second element is:"<<v[1]<<endl;


//(ii) at()
//cout<<v.at(2)<<endl;


//(iii)  front()
//cout<<"The front value is:"<<v.front();


//(iv) back()
//cout<<"The last value is:"<<v.back()<<endl;



//(v) data

//int* dataPtr = v.data();
//cout << dataPtr[2]<<endl;


// Iterators

//(i) begin() and end()
 vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
  vector<int> empty_vec = {};
  auto it = vec.begin();
  cout << *it;


	return 0;
}
