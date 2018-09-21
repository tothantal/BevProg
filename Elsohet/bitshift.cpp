#include  "std_lib_facilities.h"

// szóhossz

int main()
{
	int n = 0;
	int i = 1;
	while(i != 0)
	{
		i <<= 1;
		n++; 
	}
	cout << n;
}
