#include <bits/stdc++.h>

using namespace std;

int key = 1;
string message = "Kartikay";

int main()
{
    for(int i = 0; i < message.length(); i++)
    {
        message = message[i] + 1;
    }
    cout<<message;
    for(int i = 0; i < key; i++)
    {
        char temp = message[0];
        message.append(temp);
        message.erase(message.begin() + 0);
    }
    cout<<message;
    return 0;
}