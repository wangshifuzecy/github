#include <iostream>
using namespace std;
#pragma warning(disable:4996)

int main() {
	bool a[101];
	for (auto& q : a) q = 1;//after first guy
	for (int i = 2; i <= 100; i++)
	{
		for (int k = i; k <= 100; k += i)
		{
			a[k] ^= 1;
		}
    }
	for (int i = 1; i <= 100; i++)
	{
		if (a[i] == true)
		{
			printf("%d ", i);
		}
	}
	return 0;
}