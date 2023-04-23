string checkSum(string data, int block_size)
{
	int n = data.length();
	if (n % block_size != 0) 
    {
		int pad_size = block_size - (n % block_size);
		for (int i = 0; i < pad_size; i++) 
        {
			data = '0' + data;
		}
	}
	string result = "";
	for (int i = 0; i < block_size; i++) 
    {
		result += data[i];
    }
	for (int i = block_size; i < n; i += block_size) 
    {
		string next_block = "";
		for (int j = i; j < i + block_size; j++) 
        {
			next_block += data[j];
		}
		string additions = "";
		int sum = 0, carry = 0;
		for (int k = block_size - 1; k >= 0; k--) 
        {
			sum += (next_block[k] - '0') + (result[k] - '0');
			carry = sum / 2;
			if (sum == 0) 
            {
				additions = '0' + additions;
				sum = carry;
			}
			else if (sum == 1) 
            {
				additions = '1' + additions;
				sum = carry;
			}
			else if (sum == 2) 
            {
				additions = '0' + additions;
				sum = carry;
			}
			else 
            {
				additions = '1' + additions;
				sum = carry;
			}
		}
		string final = "";
		if (carry == 1) 
        {
			for (int l = additions.length() - 1; l >= 0; l--) 
            {
				if (carry == 0) 
                {
					final = additions[l] + final;
				}
				else if (((additions[l] - '0') + carry) % 2	== 0) 
                {
					final = "0" + final;
					carry = 1;
				}
				else 
                {
					final = "1" + final;
					carry = 0;
				}
			}
			result = final;
		}
		else 
        {
			result = additions;
		}
	}
	return onesComplement(result);
}






// C++ Program to generate CRC codeword
#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

// function to convert integer to binary string
string toBin(long long int num){
	string bin = "";
	while (num){
		if (num & 1)
			bin = "1" + bin;
		else
			bin = "0" + bin;
		num = num>>1;
	}
	return bin;
}

// function to convert binary string to decimal


// function to compute CRC and codeword
void CRC(string dataword, string generator){
	int l_gen = generator.length();
	long long int gen = toDec(generator);

	long long int dword = toDec(dataword);

	// append 0s to dividend
	long long int dividend = dword << (l_gen-1);	

	// shft specifies the no. of least
	// significant bits not being XORed
	int shft = (int) ceill(log2l(dividend+1)) - l_gen;
	long long int rem;

	while ((dividend >= gen) || (shft >= 0)){

		// bitwise XOR the MSBs of dividend with generator
		// replace the operated MSBs from the dividend with
		// remainder generated
		rem = (dividend >> shft) ^ gen;			
		dividend = (dividend & ((1 << shft) - 1)) | (rem << shft);

		// change shft variable
		shft = (int) ceill(log2l(dividend + 1)) - l_gen;
	}

	// finally, AND the initial dividend with the remainder (=dividend)
	long long int codeword = (dword << (l_gen - 1)) | dividend;
	cout << "Remainder: " << toBin(dividend) << endl;
	cout << "Codeword : " << toBin(codeword) << endl;
}

int main()
{
	string dataword, generator;
	dataword = "10011101";
	generator = "1001";
	CRC(dataword, generator);
	return 0;
}
