#include <cstring>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

struct Rat {
	char name[50];
	int age;
};

//----- TEXT I/O -----//
void display(Rat& rat) {
	cout << rat.name << endl;
	cout << rat.age  << endl;
}

// void writeTextData(ofstream& textFile, Rat& rat) {
//  	//TODO write out to textFile the same text and format as display()
// }

// void readTextData(ifstream& textFile, Rat& rat) {
// 	//TODO read in from textFile the same text and format as display()
// 	//TODO write to rat
// }

// istream& operator>>(istream& in, Rat& rat) {
// 	//TODO read an entire rat from an input stream
// }

// ostream& operator<<(ostream& out, Rat& rat) {
// 	//TODO write an entire rat to an output stream
// };

//----- BINARY I/O -----//
// void writeBinaryData(ofstream& binaryFile, Rat& rat) {
// 	//TODO write out to binaryFile the same info in binary format
// }

// void readBinaryData(ifstream& binaryFile, Rat& rat) {
// 	//TODO read in from binaryFile the same info in binary format
// 	//TODO write to rat
// }

int main() {
	Rat r1, r2, r3, r4;
	//TODO r1's name is Ben and age is 2
	char name1[] = "what";
	r1.name = name1;

	//TODO r2's name is Willard and age is 3
	//TODO display r1 & r2
	//TODO open ofstream rf "ratfarm.txt"
	//TODO writeTextData r1 & r2
	//TODO readTextData into r3 & r4
	//TODO display r3 & r4
	//TODO open ofstream rf2 "ratfarm2.txt"
	// rf2 << r1;
	// rf2 << r2;
	// rf2 >> r3;
	// rf2 >> r4;
	// cout << r3;
	// cout << r4;
	// cout << r1;
	//TODO read and write binary data in similar vein to above
	return 0;
}



