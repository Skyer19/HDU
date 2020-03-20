#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int num[66666];
int vis[66666]; 
int n,m,ans;
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		ans=0;
		memset(num,0,sizeof(num));
		memset(vis,0,sizeof(vis));
		for(int i=2;i<m;i++){
			if(m%i==0){
				for(int j=i;j<m;j+=i){
					vis[j]=1;
				}
			}
		}
		for(int i=1;i<m;i++){
			if(!vis[i]) ans++;
		}
		printf("%d\n",ans);
	}
}
