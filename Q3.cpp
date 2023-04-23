#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=1;
	for(int i=0;i<n;i++)
	{
		if(sum * pow(a[i], -1) != 0)
			sum *= a[i];
	}
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i] = sum * pow(a[i], -1);
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<endl;
	}
}
