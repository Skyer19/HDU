#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct person{
	char index[25];
	int sum;
}a[1005];

bool cmp(person a,person b){
	if(a.sum!=b.sum){
		return a.sum>b.sum;	
	}else{
		return b.index<a.index;
		//return strcmp(a.index,b.index)>0?0:1;
	}
}
int main(){
	int n,kaotishu,fenshuxian;
	int kaotifenshu[15];
	while(~scanf("%d",&n)&&n){	
	
		scanf("%d%d",&kaotishu,&fenshuxian);
		
		for(int i=1;i<=kaotishu;++i){
			scanf("%d",&kaotifenshu[i]);
		}
		int  x=0,t=0;
		for(int i=0;i<n;++i){
			scanf("%s%d",&a[i].index,&x);
			a[i].sum=0;
			for(int j=0;j<x;++j){
				int temp;
				scanf("%d",&temp);
				a[i].sum+=kaotifenshu[temp];
			}
			if(a[i].sum>=fenshuxian) t++;
		}
				
		sort(a,a+n,cmp); 
		
		printf("%d\n",t);
		
		for(int i=0;i<t;i++){
			printf("%s %d\n",a[i].index,a[i].sum);
		}
	}
	return 0;
}
