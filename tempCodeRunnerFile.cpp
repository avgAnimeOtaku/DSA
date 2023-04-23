#include <bits/stdc++.h>

using namespace std;

int key = 1;
string message = "Kartikay";

int main()
{
    //ofstream file("text.txt");
    for(int i=0;i<message.length();i++)
    {
        char temp = message[i] + 1;
        cout<<temp;
    }
    return 0;
}