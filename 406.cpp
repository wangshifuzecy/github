#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)

void count(const char s[], int counts[])
{
	int i = 0;
	char a = 'a';
	char p = s[i];
	while (p != '\0')
	{
		p = tolower(p);
		if (isalpha(p))
		{
			for (int i = 0; i < 26; i++)
			{
				if (p == a + i)
				{
					counts[i]++;
					break;
				}
			}
		}
		p = s[++i];
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			printf("%c: %dtimes\n", a + i, counts[i]);
		}
	}
}
int main() {
	int counts[26];
	for (auto& q : counts) q = 0;
	string s;
	puts("enter a sentence");
	getline(cin, s);
	const char* cs = s.c_str();
	count(cs, counts);
	return 0;
}