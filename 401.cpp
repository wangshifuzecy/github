#include <iostream>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)

int main() {
	int a[10];
	printf("Enter ten numbers: \n");
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	sort(a, a + 10);
	auto k = unique(a, a + 10) - a;
	puts("The distinct numbers:");
	for (int i = 0; i < k; i++)
		printf("%d", a[i]);
	return 0;
}
