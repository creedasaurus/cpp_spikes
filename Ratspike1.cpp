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

void writeTextData(ofstream& textFile, Rat& rat) {
    textFile << rat.name << '\n' << rat.age << '\n';
}

void readTextData(ifstream& textFile, Rat& rat) {
	//TODO read in from textFile the same text and format as display()
    textFile >> rat.name >> rat.age;
}

istream& operator>>(istream& in, Rat& rat) {
	//TODO read an entire rat from an input stream
	return in >> rat.name >> rat.age;
}

ostream& operator<<(ostream& out, Rat& rat) {
	//TODO write an entire rat to an output stream
	return out << rat.name << '\n' << rat.age << '\n';
};

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
	strcpy(r1.name, "Ben");
	r1.age = 2;

	//TODO r2's name is Willard and age is 3
	strcpy(r2.name, "Willard");
	r2.age = 3;
	
	
	//TODO display r1 & r2
	display(r1);
	display(r2);
	
	//TODO open ofstream rf "ratfarm.txt"
	ofstream rf("ratfarm.txt");
	
	//TODO writeTextData r1 & r2
    writeTextData(rf, r1);
    writeTextData(rf, r2);
    rf.close();
	
	
	//TODO readTextData into r3 & r4
	ifstream inf("ratfarm.txt");
	readTextData(inf, r3);
	readTextData(inf, r4);
	inf.close();
	
	//TODO display r3 & r4
    display(r3);	
    display(r4);
    
    
    cout << " \n----- ratfarm2 -----\n";
	//TODO open ofstream rf2 "ratfarm2.txt"
	fstream rf2("ratfarm2.txt");
	
	rf2 << r1;
	rf2 << r2;
// 	rf2.close();
	
	
    // ifstream rf2in("ratfarm2.txt");
	rf2 >> r3;
	rf2 >> r4;
// 	rf2in.close();
	
	
	cout << r3;
	cout << r4;
	cout << r1;
	
	
	//TODO read and write binary data in similar vein to above
	return 0;
}



