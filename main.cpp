#include <iostream>
#include <vector>

using namespace std;
//find minimum value from vector of int
//

int findMin(vector<int> numbers) {
	int min = numbers[0];
	for(int i = 0; i < numbers.size(); i++) {
		if(numbers[i] < min) {
			min = numbers[i];
		}
	}
	return min;
}

int findMax(vector<int> numbers) {
	int max = numbers[0];
	for(int i = 0;i < numbers.size(); i++) {
		if(numbers[i] > max) {
			max = numbers[i];
		}
	}
	return max;

}
int main() {
	vector<int> numbers = {1, 50, 4, -1};
	int minimum = findMin(numbers);
	cout << minimum << endl;

	int maximum = findMax(numbers);
	cout << maximum << endl;

	return 0;
}