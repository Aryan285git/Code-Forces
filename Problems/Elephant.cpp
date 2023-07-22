#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t=0;
	int ans=0;
	if(n>=5)
	{
		t=n/5;
		ans=ans+t;
		n=n%5;
	}
	if(n>=4)
	{
		t=n/4;
		ans=ans+t;
		n=n%4;
	}
	if(n>=3)
	{
		t=n/3;
		ans=ans+t;
		n=n%3;
	}
	if(n>=2)
	{
		t=n/2;
		ans=ans+t;
		n=n%2;
	}
	if(n>=1)
	{
		t=n/1;
		ans=ans+t;
		n=n%1;
	}
	cout<<ans;

}