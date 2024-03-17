#include <iostream>

using namespace std;


nt prefix_sum(int arr[], int cnt) {
	if (cnt == 0)
		return 0;

	return arr[0] + prefix_sum(arr+1, cnt - 1);
}

int main() {
	int arr[] = { 1, 8, 2, 10, 3 };

	cout << prefix_sum(arr, 3)<<"\n";



    return 0;
}
