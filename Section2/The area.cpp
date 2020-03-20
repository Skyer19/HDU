#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
int main(){
	cin>>n;
	while(n--){
		double x1=0,x2=0,x3=0;
         double y1=0,y2=0,y3=0,k=0,b=0;
         double a,c,t,s;      
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
     	a = (((y2-y1) / (x2-x1)) - ((y3-y2) / (x3-x2))) / (x1-x3);
        b = ((y2-y1) / (x2-x1)) - (a * (x1+x2));
        c = y3 - (a * x3 * x3 + b * x3);
        k = (y3 - y2) / (x3 - x2);
        t = y2 - k * x2;
        s = ((a / 3)*x3*x3*x3 + ((b-k)/2)*x3*x3 + (c-t)*x3)
                - ((a / 3)*x2*x2*x2 + ((b-k)/2)*x2*x2 + (c-t)*x2);
		printf("%.2lf\n",s);
	}
} 
