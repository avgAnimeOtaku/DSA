#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,a=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>i;
        v.push_back(i);
    }
    cout<<endl;
    for(auto &element:v)
    {
        if(a%2==0&&element==1)
        {
            cout<<"|__|";
            a+=1;
        }
        else if(element==1&&a%2!=0)
        {
            cout<<"|‾‾|";
            a+=1;
        }
        else if(element==0)
        {
            cout<<"--";
        }
    }
    cout<<endl;
    return 0;
}
