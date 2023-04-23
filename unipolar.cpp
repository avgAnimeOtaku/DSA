#include <bits/stdc++.h>
using namespace std;

void unipolar(string str)
{
    string str1;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '1' && i == 0 || str[i-1] == '0')
            str1.append("|‾|");
        if(str[i] == '1' && str[i-1] == '1')
        {
            str1.pop_back();
            str1.append("‾|");
        }
        if(str[i] == '0')
            str1.append("_");
    }
    cout<<str1<<endl;
}
int main()
{
    string str;
    cout<<"enter the binary message: ";
    cin>>str;
    unipolar(str);
    return 0;
}
