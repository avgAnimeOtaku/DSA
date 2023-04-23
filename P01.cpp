#include<iostream>
using namespace std;
class PRNG
{
	private:
		int multiplier, seed, increment, modulus;
	public:
		PRNG()
		{
			multiplier = 40;
			seed = 1;
			increment = 3641;
			modulus = 729;
		}
		PRNG(int seed)
		{
			multiplier = 40;
			this->seed = seed;
			increment = 3641;
			modulus = 729;
		}
		PRNG(int multiplier, int seed, int increment,int modulus)
		{
			this->multiplier = multiplier;
			this->seed = seed;
			this->increment = increment;
			this->modulus = modulus;
		}
		void random()
		{
			seed = (multiplier * seed + increment) % modulus;
			cout<<seed<<endl;
		}
};
int main()
{
	PRNG p1;
	cout<<"p1\n\n";
	for(int i=0;i<5;i++)
	{
		p1.random();
	}
	PRNG p2(1);
	cout<<"p2\n\n"<<endl;
	for(int i=0;i<5;i++)
	{
		p2.random();
	}
	PRNG p3(40, 1, 3641, 729);
	cout<<"p3\n\n"<<endl;
	for(int i=0;i<5;i++)
	{
		p3.random();
	}
	return 0;
}
