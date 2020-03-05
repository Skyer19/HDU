#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[555];
int main(){
	
	while(gets(s)){			
		float sum=0;
		int flag=0,k=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i] == 'A') { sum += 4; k++; }
 			else if(s[i] == 'B') { sum += 3; k++; }

 			else if(s[i] == 'C') { sum += 2; k++; }

 			else if(s[i] == 'D') { sum += 1; k++; }

 			else if(s[i] == 'F') { sum += 0; k++; }
			else if(s[i] == ' ') continue;

 			else{

 				flag = 0;

 				break;

 			}		
	}
		if(flag==1) {
			printf("%.2f\n",(float)sum/k);
		}else{
			printf("Unknown letter grade in input\n");
		}
	}
	return 0;
}
