#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1, n2, n3, n4, target;
		cin>>n1>>n2>>n3>>n4>>target;
		int a1[n1], a2[n2], a3[n3], a4[n4];
		for(int i=0;i<n1;i++)
		{
			cin>>a1[i];
		}
		for(int i=0;i<n2;i++)
		{
			cin>>a2[i];
		}
		for(int i=0;i<n3;i++)
		{
			cin>>a3[i];
		}
		for(int i=0;i<n4;i++)
		{
			cin>>a4[i];
		}
		int count = 0;
		for(int i=0;i<n1;i++)
		{
			if(a1[i] > target)
				continue;
			for(int j=0;j<n2;j++)
			{
				if(a1[i]+a2[j] > target)
					continue;
				for(int k=0;k<n3;k++)
				{
					if(a1[i]+a2[j]+a3[k] > target)
						continue;
					for(int l=0;l<n4;l++)
					{
						if(a1[i]+a2[j]+a3[k]+a4[l] <= target)
							count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
