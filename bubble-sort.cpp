#include <cstdio>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr);

int main() {//复习（预习）一下冒泡排序
	vector<int> arr;
	arr.push_back(5);
	arr.push_back(78);
	arr.push_back(100);
	arr.push_back(57);
    arr.push_back(95);
    arr.push_back(27);
    arr.push_back(18);
	arr.push_back(64);
	bubbleSort(arr);
	vector<int>::iterator iii;
	for (iii = arr.begin(); iii != arr.end(); iii++)
		printf("%d ", *iii);
	return 1;
}

/// @brief 冒泡排序，将目标数组从小到大重排，优点是复杂度为O(n)到O(n^2)
/// @param arr 目标数组，vector<int>
void bubbleSort(vector<int> &arr) {
	int i = 0;
	for (bool j = true; j;) {
		j = false;
		for (i = 1; i < arr.size(); i++) {
			if (arr[i] < arr[i - 1]) {
				arr[i] += arr[i - 1];
                arr[i-1] = arr[i] - arr[i - 1];
                arr[i] -= arr[i - 1];
				j = true;
			}
		}
	}
}