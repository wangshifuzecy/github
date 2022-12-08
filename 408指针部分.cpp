#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)
int len;
int parseHex(const char* const hexString)
{
	int cnt = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (isalpha(hexString[i]))
		{
			cnt += pow(16,len - 1 - i) * (hexString[i] - 'A' + 10);
		}
		else
			cnt += pow(16, -i + len - 1) * (hexString[i] - '0');
	}
	return cnt;
}
int main() {
	puts("enter one hex number");
	string s;
	getline(cin, s);
	len = s.size();
	const char* cs = s.c_str();
	printf("%d", parseHex(cs));
	return 0;
}