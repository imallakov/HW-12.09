#include<bits/stdc++.h>
using namespace std;
#define ll long long
double n;
int main()
{
	do{
		cout<<"Input n>0:";
		cin>>n;
	}while(n<=0);
	
	for(int i=n;i>=1;--i)
	{
		for(int g=1;g<=n;g++)
		{
			for(int j=1;j<i;++j)
			cout<<" ";
			for(int j=n-i;j>=1;--j)
			cout<<"*";
			for(int j=0;j<=n-i;++j)
			cout<<"*";
			for(int j=n-i;j<n-1;++j)
			cout<<" ";
		}
		cout<<endl;	
	}
	for(int i=n-1;i>=1;--i)
	{
		for(int g=1;g<=n;g++)
		{
			for(int j=i;j<n;++j)
			cout<<" ";
			for(int j=i;j>=1;--j)
			cout<<"*";
			for(int j=1;j<i;++j)
			cout<<"*";
			for(int j=1;j<=n-i;++j)
			cout<<" ";
		}
		cout<<endl;	
	}
}
