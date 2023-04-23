#include <bits/stdc++.h>

using namespace std;

int key = 1;
string message = "Kartikay";

int main()
{
    string output = "";
    for(int i = 0; i < message.length(); i++)
    {
        output.append(message[i] + key);
    }
    cout<<output;
    string p1(message, key, message.length() - 1);
    string p2(message, 0, key);
    cout<<p1<<endl<<p2<<endl;
    message = p1 + p2;
    cout<<message;
    return 0;
}