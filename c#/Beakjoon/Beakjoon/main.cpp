#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m,cnt=0;
	cin >> n >> m;
	int* arr = new int[n];
	int* arr2 = new int[m];
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < m; i++) cin >> arr2[i];
	sort(arr, arr + n);
	sort(arr2, arr2 + m);
	for (int i = 0; i < n; i++) {
		if (std::binary_search(arr2, arr2 + m, arr[i])) cnt++;
	}
	for (int i = 0; i < m; i++) {
		if (std::binary_search(arr, arr + n, arr2[i])) cnt++;
	}
	cout << cnt;
}
