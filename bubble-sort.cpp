#include <cstdio>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr);

int main() {
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