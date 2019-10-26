
#include "pch.h"
#include "sort.h"


void print(int e) {
	std::cout << e << " ";
}


bool greater(int first, int second) {
	return first > second;
}

void scan(int &e) {
	std::cin >> e;
}

int main() {
	std::vector<int> vector(8);
	std::for_each(vector.begin(), vector.end(), [](int e) {std::cin >> e; });
	std::sort(vector.begin(), vector.begin() + 4);
	std::sort(vector.begin() + 4, vector.begin(), [](int e1, int e2) {return e1 > e2; });
	std::for_each(vector.begin(), vector.end(), [](int e){std::cout << e << " "; });
	std::cout << std::endl;
}
