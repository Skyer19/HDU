#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
		{
			if(a>b) swap(a,b);
			int sum=0,sum2=0;
			for(int i=a;i<=b; i++)
				{
					if(i&1==1)
						{
							sum2+=i*i*i;
						}
					else  sum+=i*i;
				}
			cout<<sum<<" "<<sum2<<endl;
		}


}
