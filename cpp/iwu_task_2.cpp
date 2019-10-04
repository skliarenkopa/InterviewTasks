// Task:
// Реализовать функцию, которая возвращает массив строк с целочисленными значениями, попеременно возрастающими и убывающими от 1 до N.
// Допустимые значения N: 0 < N < 10000;

// Example: результат при N = 4:
// [
// 	'1',
// 	'2-1',
// 	'1-2-3',
// 	'4-3-2-1',
// ]

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Returns an array of strings with integer values that alternately increase and decrease from 1 to N.
std::vector<std::string> BuildSequences(int n)
{
	std::string delimiter = std::string("-");
	std::vector<std::string> result;

	bool push_back = true;
	std::string sequence = "";
	for (int i = 0; i < n; i++) {
		std::reverse(sequence.begin(), sequence.end());
		std::string new_number = std::to_string(i + 1);
		if (i == 0) {
			sequence = new_number;
		} else {
			if (push_back) {
				sequence = sequence + delimiter + new_number;
			} else {
				sequence = new_number + delimiter + sequence;
			}
		}
		result.push_back(sequence);
		push_back = !push_back;
	}

	return result;
}

void PrintSequences(std::vector<std::string> sequences)
{
	std::cout << '[';
	for (const auto& seq : sequences) {
		std::cout << '"' << seq << '"';
		if (&seq != &sequences.back())
			std::cout << ", ";
	}
	std::cout << ']' << std::endl;
}

int main()
{
	//int num = 0; // []
	int num = 4; // ["1", "2-1", "1-2-3", "4-3-2-1"]
	//int num = 10; // ["1", "2-1", "1-2-3", "4-3-2-1", "1-2-3-4-5", "6-5-4-3-2-1", "1-2-3-4-5-6-7", "8-7-6-5-4-3-2-1", "1-2-3-4-5-6-7-8-9", "10-9-8-7-6-5-4-3-2-1"]

	std::vector<std::string> result = BuildSequences(num);
	PrintSequences(result);
}
