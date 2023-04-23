#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>i;
        v.push_back(i);
    }
    cout<<endl;
    for(auto &element:v)
    {
        if(element==1)
            cout<<"‾|_";
        else if(element==0)
            cout<<" _|‾";
        else
        {
            cout<<" ";
            exit(0);
        }
    }
    cout<<endl;
}