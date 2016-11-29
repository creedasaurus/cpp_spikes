#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

template<class T>
T add(T a, T b) {
	return a + b;
}

int main() {

	std::vector<int> numbs = {1,2,3,4,5};
	std::string names[] = {"cats ", "are ", "the ", "worst"};
	std::cout << std::accumulate(names, names+4, std::string());
	std::cout << "\n" << std::accumulate(numbs.begin(), numbs.end(), 1, std::multiplies<int>());
	std::cout << "\nHello, world!";
	std::string first = "James ";
	std::string last = "Johnson";
	std::cout << "\n" << add(first, last); 
	std::cout << "\n" << add(1, 2);
	return 0;
}
