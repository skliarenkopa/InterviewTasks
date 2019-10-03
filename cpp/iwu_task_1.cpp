// Task:
// На входе - массив целых чисел.
// Найдите наибольшую по модулю разность между парами смежных элементов.

// Example:
// arr = [2, 4, 1, 0]
// MaxDiff(arr) = 3

#include <iostream>
#include <vector>
#include <string>

// Returning largest absolute difference between pairs of adjacent elements
int MaxDiff(std::vector<int> vec)
{
	int abs_max_diff = 0;

	if (vec.size() >= 2) {  // TODO: Think about return value if vector size < 2
		for (std::vector<int>::size_type i = 0; i != vec.size() - 1; i++) {
			int curr_abs_diff = abs(vec[i] - vec[i + 1]);
			if (curr_abs_diff > abs_max_diff) {
				abs_max_diff = curr_abs_diff;
			}
		}
	}

	return abs_max_diff;
}

int main()
{
	//std::vector<int> test_vector = {  1, 1, 1, 1 }; // 0
	//std::vector<int> test_vector = { -1, 4, 10, 3, -2 }; // 7
	//std::vector<int> test_vector = { 10, 11, 13 }; // 2
	//std::vector<int> test_vector = { -2, -2, -2, -2, -2 }; // 0
	//std::vector<int> test_vector = { -1, 1, -3, -4 }; // 4
	std::vector<int> test_vector = { 2, 4, 1, 0 }; // 3

	int max_diff = MaxDiff(test_vector);
	std::cout << max_diff << std::endl;
}
