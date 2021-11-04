#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
using namespace std;
template <typename T> 
T Create1(T* a, T size)
{
	for (T i = 0; i < size; i++)
		a[i] = rand() % (100 + 1);
}
void Create(int* a, int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() % (100 + 1);
}
template <typename T>
T Print1(T* a, T size)
{
	for (T i = 0; i < size; i++)
		cout << setw(2) << a[i] << " ";
}
void Print(int* a, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(2) << a[i] << " ";
}
template <typename T>
T QuickSort1(T* arr, T first, T last)
{
	T l = first, r = last, p = arr[(first + last) / 2];
	do {
		while (arr[l] < p) l++;
		while (arr[r] > p) r--;
		if (l <= r) {
			if (arr[l] > arr[r]) swap(arr[l], arr[r]);
			l++;
			r--;
		}
	} while (l <= r);
	if (l < last)
		QuickSort(arr, l, last);
	if (first < r)
		QuickSort(arr, first, r);
}
void QuickSort(int* arr, int first, int last)
{
	int l = first, r = last, p = arr[(first + last) / 2];
	do {
		while (arr[l] < p) l++;
		while (arr[r] > p) r--;
		if (l <= r) {
			if (arr[l] > arr[r]) swap(arr[l], arr[r]);
			l++;
			r--;
		}
	} while (l <= r);
	if (l < last)
		QuickSort(arr, l, last);
	if (first < r)
		QuickSort(arr, first, r);
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	int a[n];
	Create(a, n);
	cout << "a[";
	Print(a, n);
	cout << "]" << endl;
	QuickSort(a, 0, n - 1);
	cout << "a[";
	Print(a, n);
	cout << "]" << endl;
	Create1(a, n);
	cout << "a[";
	Print1(a, n);
	cout << "]" << endl;
	QuickSort1(a, 0, n - 1);
	cout << "a[";
	Print1(a, n);
	cout << "]" << endl;
	return 0;
}