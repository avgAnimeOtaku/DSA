#include<bits/stdc++.h>
using namespace std;

unordered_map<string, char> name;
name["One"] = "1";
name["Two"] = "2";
name["Three"] = "3";
name["Four"] = "4";
name["Five"] = "5";
name["Six"] = "6";
name["Seven"] = "7";
name["Eight"] = "8";
name["Nine"] = "9";
name["Zero"] = "0";

int conversion(int n, int v) 
{
	int r, i = 1, sum = 0; 
	while(n != 0)
	{
		r = n % v;
		n = n / v;
		sum = sum + (r * i);
		i = i * 10;
	}
	return sum;
}

string naming(string str)
{
    string result;
    for(auto it : str)
    {
        for(auto it2 : name)
        {
            if(its.first == it)
                result.push_back(it2.second);
                result.push_back(" ");
        }
	}
    result.pop_back();
    return result;
}

int main()
{
    int n;
    cout<<"Enter the number -> ";
    cin>>n;
    string dec = to_string(n);
	string hexa = to_string(conversion(n, 6));
	string octa = to_string(conversion(n, 8)); 
	string bin = to_string(conversion(n, 2));
    dec = naming(dec);
    hexa = naming(hexa);
    octa = naming(octa);
    bin = naming(bin);
    cout<<"dec "<<dec<<" size -> "<<dec.size();
    cout<<"hexa "<<hexa<<" size -> "<<hexa.size();
    cout<<"octa "<<octa<<" size -> "<<octa.size();
    cout<<"bin "<<bin<<" size -> "<<bin.size();
    return 0;
}