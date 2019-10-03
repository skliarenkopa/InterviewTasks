// Task:
// Дан массив имен файл в порядке их создания.
// Так как два файла не могу иметь одинаковые имена, более поздние должны получить дополнение вида name(k), где k - наименьшее положительное целое число, формирующее уникальное название файла.
// Верните массив переименованных файлов.

// Example:
// names = ["photo", "photo", "doc", "photo(1)", "photo"]
// filenames(names) = ["photo", "photo(1)", "doc", "photo(1)(1)", "photo(2)"]

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Returns vector with unique filenames
std::vector<std::string> MakeUniqueFilenames(std::vector<std::string> names)
{
	std::vector<std::string> result;

	

	return result;
}

void PrintSequences(std::vector<std::string> sequences)
{
	std::cout << '[';
	for (auto& seq : sequences) {
		std::cout << '"' << seq << '"';
		if (&seq != &sequences.back())
			std::cout << ", ";
	}
	std::cout << ']' << std::endl;
}

int main()
{
	//std::vector<std::string> filenames = {  }; // []
	std::vector<std::string> filenames = { "photo", "photo", "doc", "photo(1)", "photo" }; // ["photo", "photo(1)", "doc", "photo(1)(1)", "photo(2)"]
	//std::vector<std::string> filenames = { "name", "name", "name(1)", "name(3)", "name(2)", "name(2)" }; // ["name", "name(1)", "name(1)(1)", "name(3)", "name(2)", "name(2)(1)"]
	//std::vector<std::string> filenames = { "a", "b", "cd", "b ", "a(3)" }; // ["a", "b", "cd", "b ", "a(3)"]
	
	std::vector<std::string> result = MakeUniqueFilenames(filenames);
	PrintSequences(result);
}
