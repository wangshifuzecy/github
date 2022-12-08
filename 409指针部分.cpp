#include <iostream>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)
void mysort(int* a,int n)
{
	for (int i = 0; i != n; i++) {
		int ith = i;
		for (int j = i + 1; j != n; j++) {
			if (a[ith] > a[j]) {
				ith = j;
			}
		}
		swap(a[i], a[ith]);
	}
}
int main() {
	int n;
	puts("enter the number of your sorted numbers");
	scanf("%d",&n);
	int* a = new int[n];
	puts("enter sorted numbers");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	mysort(a, n);
	int* i = &a[0];
	while (n--)
	{
		printf("%d ", *i++);
	}
	delete[]a;
	return 0;
}