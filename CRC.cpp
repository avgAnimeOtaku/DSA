#include <bits/stdc++.h>
using namespace std;

string toBin(int num)
{
    string bin = "";
    while (num)
    {
        if (num & 1)
            bin = "1" + bin;
        else
            bin = "0" + bin;
        num = num>>1;
    }
    return bin;
}

int toDec(string bin)
{
    long long int num = 0;
    for (int i=0; i<bin.length(); i++)
    {
        if (bin.at(i)=='1')
        	num += 1 << (bin.length() - i - 1);
    }
    return num;
}
void CRC(string dataword, string generator)
{
	int l_gen = generator.length();
	int gen = toDec(generator);
	int dword = toDec(dataword);
	int dividend = dword << (l_gen-1);
	int shft = (int) ceill(log2l(dividend+1)) - l_gen;
	long long int rem;
	while ((dividend >= gen) || (shft >= 0))
	{
		rem = (dividend >> shft) ^ gen;
		dividend = (dividend & ((1 << shft) - 1)) | (rem << shft);
		shft = (int) ceill(log2l(dividend + 1)) - l_gen;
	}
	long long int codeword = (dword << (l_gen - 1)) | dividend;
	cout << "Remainder: " << toBin(dividend) << endl;
	cout << "Codeword : " << toBin(codeword) << endl;
}

int main()
{
	string message, divisor;
	message = "10011101";
	divisor = "101";
	CRC(message, divisor);
	return 0;
}