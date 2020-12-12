#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n,x,m=0;
	cout<<"Input x:";
	cin>>x;
	cout<<"Input n:";
	cin>>n;
	double S=0,eps=1e-6;
	int k=0;
	int a=0;
	do
	{
		double l=1,m=1;
		for(int i=1;i<=2*k+1;++i)
		{
			l*=x;
			m*=i;
		}
		double sum=l/m;
		if(k%2!=0) sum*=-1;
//		std::cout<<"k="<<k<<"   "<<x<<"^"<<2*k+1<<"="<<l<<"   "<<2*k+1<<"!="<<m<<"     S="<<S<<"    sum="<<sum<<std::endl;
		S+=sum;
		k++;
		a++;
	}while(k<=n && (S>=eps || S<=-eps));
	cout<<"Sum = "<<S<<endl;
	cout<<"Number of addends = "<<a<<endl;
}
