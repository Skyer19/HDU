#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	double num;
	while(cin>>num){
		if(num>=0){
			printf("%.2f\n",num);
		}else{
			printf("%.2f\n",-num);
		}
	} 
}
