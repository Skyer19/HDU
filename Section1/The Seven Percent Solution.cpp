#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
string s;
struct str{
	string op1;
	string op2;
}a[7];
int main(){
	a[0].op1=" ",a[0].op2="%20";
	a[1].op1="!",a[1].op2="&21";
	a[2].op1="$",a[2].op2="%24";
	a[3].op1="%";a[3].op2="%25";
	a[4].op1="(",a[4].op2="%28";
	a[5].op1=")",a[5].op2="%29";
	a[6].op1="*",a[6].op2="%2a";
	while(scanf("%s",&s)){
		if(s=="#") return 0;
		for(int j=0;j<7;j++){
			int p=0; 
			while(s.find(a[j], p)!=string::npos){
			   s = s.replace(s.find(a[j].op1),p,a[j].op2);
			   p++;     
		}
	}
	cout<<s<<endl;
}

