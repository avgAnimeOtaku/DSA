#include<bits/stdc++.h>
using namespace std;
int fcfs(int a[], int head, int n)
{
	int seek = 0, distance, ct;
	for(int i=0;i<n;i++) 
    {
		ct = a[i];
		distance = abs(ct - head);
		seek += distance;
		head = ct;
	}
	cout<<"Total number of seek operations: "<<seek<<endl;
	cout<<"Seek Sequence: ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
    return seek;
}
int main()
{
	int a[100], n;
    cout<<"Enter length of Queue: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
	int head = 33;
    cout<<"Initial head pointer position: "<<head<<endl;
    int res1 = fcfs(a, head, n);
    head = 20;
    cout<<"Now head pointer position: "<<head<<endl;
    int res2 = fcfs(a, head, n);
    if(res2 < res1)
        cout<<"Yes, it give better performance when the initial head pointer position is changed to cylinder 20";
    else
        cout<<"NO, it doesn't give better performance when the initial head pointer position is changed to cylinder 20";
	return 0;
}
