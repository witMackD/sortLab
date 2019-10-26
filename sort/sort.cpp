
#include "pch.h"

void sort(std::vector<int>::iterator begin, std::vector<int>::iterator end, bool(*compare)(int, int)) {
	for (; begin < end; ++begin) {
		std::vector<int>::iterator  minimum = begin;
		for (std::vector<int>::iterator iteratorInner = begin; iteratorInner < end; ++iteratorInner) {
			if (compare(*iteratorInner, *minimum)) {
				minimum = iteratorInner;
			}
		}
		std::swap(*begin, *minimum);
	}
}

bool lesser(int first, int second) {
	return first < second;
}

bool greater(int first, int second) {
	return first > second;
}

int main() {
	std::vector<int> vector{ 13, -2, 21, 5, -8, 5, 7, -10 };
	sort(vector.begin(), vector.end());
	for (int index = 0; index < vector.size(); ++index) {
		std::cout << vector[index] << " ";
	}

	
	std::cout << std::endl;
}
