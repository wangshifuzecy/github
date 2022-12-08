#include <iostream>
using namespace std;
#pragma warning(disable:4996)
void shell_sort(int array[], int length) {
	int h = 1;
	while (h < length / 3) {
		h = 3 * h + 1;
	}
	while (h >= 1) {
		for (int i = h; i < length; i++) {
			for (int j = i; j >= h && array[j] < array[j - h]; j -= h) {
				std::swap(array[j], array[j - h]);
			}
		}
		h = h / 3;
	}
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	const int INF = 1 << 30;
	for (int i = 1; i <= size1; i++)
	{
		list3[i] = list1[i-1];
	}
	for (int i = 1; i <= size2; i++)
	{
		list3[size1 + i] = list2[i-1];
	}
	shell_sort(list3, size1 + size2);
	for (int i = 1; i <= size1 + size2; i++)
		printf("%d ", list3[i]);
}
int main() {
	int a[81], b[81], c[165], asize, bsize;
	printf("enter the size of a array of nondecreasing numbers,then enter the numbers one by one\n");
	scanf("%d", &asize);
	for (int i = 0; i < asize; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("once again\n");
	scanf("%d", &bsize);
	for (int i = 0; i < bsize; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("merge of two arrays:\n");
	merge(a, asize, b, bsize,c);
	return 0;
}