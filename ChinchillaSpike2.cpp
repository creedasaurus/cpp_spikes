// #include <cstring>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;



class Chinchilla {
private:
	string m_name;
	int m_age;
public:
	
	// // parametarized constructor
	// Chinchilla(string, int);
		
	// // get/set name
	// void set_name(string);
	// string get_name();
	
	// // get/set age
	// void set_age(int);
	// int get_age();

	
	// parameter
	Chinchilla(string n, int a) {
		m_name = n;
		m_age = a;
	}
	
	
	// Get/Set NAME
	void set_name(string n) {
		m_name = n;
	}
	string get_name() {
		return m_name;
	}
	
	
	// Get/set AGE
	void set_age(int a) {
		m_age = a;
	}
	int get_age() {
		return m_age;
	}
};



	
// //----- TEXT I/O -----//
// void display() {
// 	cout << this->name << endl;
// 	cout << this.age  << endl;
//}

// void writeTextData(ofstream& textFile, Chinchilla& chin) {
//     textFile << chin.name << '\n' << chin.age << '\n';
// }

// void readTextData(ifstream& textFile, Chinchilla& chin) {
// 	//TODO read in from textFile the same text and format as display()
//     textFile >> chin.name >> chin.age;
// }

istream& operator>>(istream& in, Chinchilla& chin) {
	//TODO read an entire chin from an input stream
	string tempNam;
	int tempAge;
	
	in >> tempNam >> tempAge;
	
	chin.set_name(tempNam);
	chin.set_age(tempAge);
	
	return in;
}

ostream& operator<<(ostream& out, Chinchilla& chin) {
	//TODO write an entire chin to an output stream
	return out << chin.get_name() << '\n' << chin.get_age() << '\n';
};

//----- BINARY I/O -----//
// void writeBinaryData(ofstream& binaryFile, Chinchilla& chin) {
// 	//TODO write out to binaryFile the same info in binary format
// }

// void readBinaryData(ifstream& binaryFile, Chinchilla& chin) {
// 	//TODO read in from binaryFile the same info in binary format
// 	//TODO write to chin
// }
	


int main() {
	// Chinchilla r1, r2, r3, r4;
	
	Chinchilla ch1("Ben", 2);
	Chinchilla ch2("Willard", 3);
	
	cout << ch1 << ch2;
	
	
	// //TODO display r1 & r2
	// display(r1);
	// display(r2);
	
	// //TODO open ofstream rf "chinfarm.txt"
	ofstream chf("chinfarm.txt");
	
	chf << ch1 << ch2;
	chf.close();
	// //TODO writeTextData r1 & r2
 //   writeTextData(rf, r1);
 //   writeTextData(rf, r2);
 //   rf.close();
	
	
	// //TODO readTextData into r3 & r4
	// ifstream inf("chinfarm.txt");
	// readTextData(inf, r3);
	// readTextData(inf, r4);
	// inf.close();
	
	// //TODO display r3 & r4
 //   display(r3);	
 //   display(r4);
    
    
 //   cout << " \n----- chinfarm2 -----\n";
	// //TODO open ofstream rf2 "chinfarm2.txt"
	// fstream rf2("chinfarm2.txt");
	
	// rf2 << r1;
	// rf2 << r2;
	// rf2.close();
	
	
 //   ifstream rf2in("chinfarm2.txt");
	// rf2in >> r3;
	// rf2in >> r4;
	// rf2in.close();
	
	
	// cout << r3;
	// cout << r4;
	// cout << r1;
	
	
	//TODO read and write binary data in similar vein to above
	return 0;
}



