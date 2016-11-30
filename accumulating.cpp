#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <algorithm>
#include <ctime>

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
	std::cout << "\n" << add(1, 2) << std::endl;

	std::vector<int> numbs2;
	for (int i = 0; i < 100000; i++) {
		numbs.push_back(rand()%2500+1);
	}
	
	std::clock_t start;
	std::clock_t now;
	numbs2 = numbs;
	start = std::clock();
	sort(numbs.begin(), numbs.end());
	now = std::clock();
	std::cout << "Full Sort: " << now - start << std::endl;

	start = std::clock();
	partial_sort(numbs2.begin(), numbs2.begin()+1000, numbs2.end());
	now = std::clock();
	std::cout << "Partial Sort: " << now - start << std::endl;	


	return 0;
}
