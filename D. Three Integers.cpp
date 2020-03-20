#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int a[105]={0};
int pos[105]={0};
int main() {
	int t,m,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&m,&n);
		memset(a,0,sizeof(m));
		memset(pos,0,sizeof(pos));
		for(int i=1; i<=m; i++) {
			scanf("%d",&a[i]);
		}
		
		for(int i=0; i<n; i++) {
			int posi;
			scanf("%d",&posi);
			pos[posi]++;
		}
		int flag=1;
		for(int i=1; i<m; i++) {
			for(int j=1; j<=m-i; j++) {
				if(a[j]>a[j+1]) {
					if(pos[j]) {
						swap(a[j],a[j+1]);
						break;
					} else {
						flag=2;						
						break;
					}
				}

			}
		}
		if(flag==1) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
