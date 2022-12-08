#include <iostream>
#include <algorithm>
using namespace std;
#pragma warning(disable:4996)
void bubble(double* a, int n)
{
	bool flag = false;
	while (!flag) {
		flag = true;
		for (int i = 0; i != n - 1; i++) {
			if (a[i] > a[i + 1]) {
				flag = false;
				swap(a[i], a[i + 1]);
			}
		}
	}
}
int main() {
	double a[10];
	puts("enter ten numbers");
	for (int i = 0; i < 10; i++)
	{
		scanf("%lf", &a[i]);
	}
	bubble(a, 10);
	for (auto q : a)
	{
		printf("%.1lf ", q);
	}
	return 0;
}