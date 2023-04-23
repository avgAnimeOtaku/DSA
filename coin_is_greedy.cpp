#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter number of currencies: ";
    int n;
    cin>>n;
    int c[n], count[n] = {0};
    cout<<"Enter currencies: "<<endl;
    for(int i=0;i<n;i++)
        cin>>c[i];
    sort(c, c + n, greater<int>());
    cout<<"Enter the amount you want to have: ";
    int amount;
    cin>>amount;
    int i=0;
    while(amount!=0)
    {
        if(amount>=c[i])
        {
            amount -= c[i];
            count[i]++;
        }
        else if(amount < c[n-1])
        {
            cout<<"Not Possible";
            return 0;
        }
        else
            i++;
    }
    int TC = 0;
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" X "<<count[i]<<endl;
        TC += count[i];
    }
    cout<<"Total number of currency used: "<<TC;
    return 0;
}
