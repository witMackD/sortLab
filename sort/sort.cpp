
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
	std::for_each(vector.begin(), vector.end(), scan);
	std::sort(vector.begin(), vector.begin() + 4);
	std::sort(vector.begin() + 4, vector.begin());
	std::for_each(vector.begin(), vector.end(), print);
	std::cout << std::endl;
}
