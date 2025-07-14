// Arrays & Pointers Arithematic in C++

// Arrays 
//1
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[] = {100,200,300,400,500,600};
//	cout<<arr[0]<<endl;
//	cout<<arr[1]<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[3]<<endl;
//	cout<<arr[4]<<endl;
//	cout<<arr[5]<<endl;
//	return 0;
//	
//}

//2
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6];
//	for(int i =0;i<6;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<6;i++){
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[] = {10,20,30,40,50};
//	cout<<*arr<<endl;
//	cout<<*(arr+1)<<endl;
//	cout<<*(arr+2)<<endl;
//	cout<<*(arr+3)<<endl;
//	cout<<*(arr+4)<<endl;
//	
//	return 0;
//}

//4
//#include<iostream>
//using namespace std;
//int  main(){
//	int arr[5];
//	arr[0] = 100;
//	arr[1] = 200;
//	arr[2] = 300;
//	arr[3] = 400;
//	arr[4] = 500;
//	
//	for(int i = 0;i<5;i++){
//		cout<<arr[i]<<endl;
//	}
//	return 0;
//}

//5
//#include<iostream>
//using namespace std;
//int main(){
//	// An example of 2-d array in C++
//	int arr[][2] = {{10,20},
//	                 {30,40},
//					  {50,60}};
//					  
//					  for(int i=0;i<3;i++){
//					  	for(int j=0;j<2;j++){
//					  		cout<<arr[i][j]<<" ";
//						  }
//						  cout<<endl;
//						  
//					  }
//	return 0;
//}

//6
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[] = {10,20,30,40,50};
//	arr[2] = 400;
//	arr[4] = 1000;
//	for(int i =0;i<5;i++){
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//}

//7
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[][4] = {{100,200,300,400},
//	               {500,600,700,800},
//				   {900,1000,1100,1200}};
//	for(int i=0;i<3;i++){
//		for(int j=0;j<4;j++){
//			cout<<*(*(arr+i)+j)<<" ";
//			
//		}
//		cout<<endl;
//	}		   
//	return 0;
//}

// Pointer Arithematic in C++
//1
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[] = {10,20,30,40};
//	cout<<arr<<endl;
//	cout<<arr+1<<endl;
//	cout<<arr+2<<endl;
//	cout<<arr+3<<endl;
//}
//2
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 200;
//	int *arr = &a;
//	cout<<arr<<endl;
//	cout<<arr+1<<endl;
//	cout<<arr+2<<endl;
//	cout<<arr-1<<endl;
//	
//	cout<<++arr<<endl;
//	
//	return 0;
//}

//3
//#include<iostream>
//using namespace std;
//int main(){
//int a = 200,b= 300;
//int *ptr = &a;
//int *pt = &b;
//
//cout<<*ptr+(*pt)<<endl;
//cout<<*pt-(*ptr)<<endl;k
//
//}

// 4
#include<iostream>
using namespace std;
int main(){
	int a = 200,b = 700;
	int *ptr = &a;
	int *pt1 = &b;
	cout<<*ptr * (*pt1)<<endl;
	
	return 0;
}

