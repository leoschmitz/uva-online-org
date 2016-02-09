#include <iostream>

using namespace std;

inline bool is_odd(long l)
{
	return l % 2;
}

int cycles(long n)
{
	int count = 1;

	while (n != 1)
	{
		count++;
		if (is_odd(n))
			n = 3 * n + 1;
		else
			n = n / 2;
	}

	return count;
}


int main(int argc, char* argv[])
{
	long a(0), b(0), c(0),
		 first(0), second(0),
		 curr_cycle(0);

	while (cin >> a >> b)
	{
		c = 0;
		if (a < b)
		{
			first = a;
			second = b;
		}
		else
		{
			first = b;
			second = a;
		}

		for (int i = first; i <= second; i++)
		{
			curr_cycle = cycles(i);
			c = curr_cycle > c ? curr_cycle : c;
		}

		cout << a << " " << b << " " <<  c << endl;
	}
}
