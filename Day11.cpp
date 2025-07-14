
	
	// break
//	1
//#include<iostream>
//using namespace std;
//int main(){
//	for(int i=1;i<10;i++){
//		cout<<i<<endl;
//		if(i==5){
//			break;
//		}
//	}
//	return 0;
//}

//	2
//#include<iostream>
//using namespace std;
//int main(){
//	for(int i =1;i<20;i++){
//		if(i==15)
//		break;
//		cout<<i<<endl;
//	}
//	return 0;
//}
//	3
//#include<iostream>
//using namespace std;
//int main(){
//	int num=10;
//	while(num!=20){
//		if(num == 16)
//		break;
//		cout<<num<<endl;
//		num++;
//	}
//	return 0;
//}

//	4
//#include<iostream>
//using namespace std;
//int main(){
//	for(int num = 100;num<=1000;num+=10){
//		cout<<num<<endl;
//		if(num==990){
//			break;
//		}
//	}
//	return 0;
//}
//	
	// continue
	
//	1
//#include<iostream>
//using namespace std;
//int main(){
//	for(int num = 10;num<=100;num+=10){
//		if(num ==20)
//		continue;
//		cout<<num<<endl;
//	}
//}

//	2
//#include<iostream>
//using namespace std;
//int main(){
//	for(int num =10;num<=100;num+=10){
//		if(num == 80){
//			continue;
//		}
//		cout<<num<<endl;
//	}
//	return 0;
//}

//	3
//#include<iostream>
//using namespace std;
//int main(){
//	int num= 100;
//	while(num!=0){
//		if(num==70){
//			continue;
//		}
//		cout<<num<<endl;
//		num-=10;
//		
//	}
//	return 0;
//}
//	4
#include<iostream>
using namespace std;
int main(){
	for(int j=0;j<30;j++){
		if(j%2==0){
			continue;
		}
		cout<<j<<endl;
	}
	return 0;
}
	

