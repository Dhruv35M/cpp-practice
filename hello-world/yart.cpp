#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main(int argc, char const *argv[]) {
    std::cout << "Hello, World!" << std::endl;

    std::vector<std::pair<int, std::string>> studentList;
    studentList = {{1, "Keshav Kumar"},
		   {2, "Saurabh Chaudhary"},
		   {3, "Daniel Knuff"},
		   {4, "Donald Drumf"},
		   {5, "Albert Mosse"}};

    std::cout << "Student Name list :\n";
    for (auto sl : studentList)
	std::cout << sl.first << ' ' << sl.second << '\n';
    return 0;
}
