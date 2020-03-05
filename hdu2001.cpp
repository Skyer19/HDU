#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	float a,b,c,d;
	while(cin>>a>>b>>c>>d){
		float sum=(a-c)*(a-c)+(b-d)*(b-d);
		printf("%.2lf\n",sqrt(sum));
	}
	return 0;
} 
