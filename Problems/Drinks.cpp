#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	double d=0.0;
	double sum=0.0;
	for(int i=0;i<t;i++)
	{
		sum+=a[i];
	}
	d=sum/t;
	cout<<d;
}