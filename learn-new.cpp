#include<bits/stdc++.h>
using namespace std;
const int MAX = 3000;

int smartNumber(int n)
{
	int primes[MAX] = {0};
	vector<int> result;
	for (int i=2; i<MAX; i++)
	{
		if (primes[i] == 0)
		{
			primes[i] = 1;

			// mark all multiples of 'i' as non prime
			for (int j=i*2; j<MAX; j=j+i)
			{
				primes[j] -= 1;

				// If i is the third prime factor of j
				// then add it to result as it has at
				// least three prime factors.
				if ( (primes[j] + 3) == 0)
					result.push_back(j);
			}
		}
	}
	sort(result.begin(), result.end());
	return result[n-1];
}

int main()
{
	int n = 50;
	cout << smartNumber(n);
	return 0;
}
