#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)
int a, b;
int indexof(const char s1[],const char s2[])
{
	if (a > b) return -1;
	else {
		for (int i = 0; i <= b - a; i++)
		{
			for (int q = 0; q < a; q++)
			{
				if (q == a - 1 && s1[q] == s2[i + q]) {
					return i;
				}
				if (s1[q] != s2[i + q])
				{
					break;
				}
			}
		}
	}
	return -1;
}
int main() {
	string s1, s2;
	getline(cin,s1);
	getline(cin, s2);
	a = s1.size(), b = s2.size();
	const char *cs1 = s1.c_str();
	const char *cs2 = s2.c_str();
	printf("%d", indexof(cs1, cs2));

	return 0;
}