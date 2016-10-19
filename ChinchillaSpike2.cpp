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
	
	// parameter
	Chinchilla(string n, int a) {
		m_name = n;
		m_age = a;
	}
	
	void display() {
		cout << this->m_name << endl;
		cout << this->m_age << endl;
	}
	
	// Get/Set NAME
	void set_name(string n) { m_name = n; }
	string get_name() { return m_name; }
	
	// Get/set AGE
	void set_age(int a) { m_age = a;}
	int get_age() { return m_age; }


	void writeTextData(ofstream& textFile) {
	    textFile << this->m_name << '\n' << this->m_age << '\n';
	}

	void readTextData(ifstream& textFile) {
		//TODO read in from textFile the same text and format as display()
	    textFile >> this->m_name >> this->m_age;
	}
};


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
void writeBinaryData(ofstream& binaryFile, Chinchilla& chin) {
	//TODO write out to binaryFile the same info in binary format
	// binaryFile << rat.name << '\n' << rat.age << '\n';
	binaryFile.write(reinterpret_cast<char*>(&chin), sizeof(chin));
}

void readBinaryData(ifstream& binaryFile, Chinchilla& chin) {
	//TODO read in from binaryFile the same info in binary format
	binaryFile.read(reinterpret_cast<char*>(&chin), sizeof(chin));
	//TODO write to rat
}



// ------ MAIN -------
int main() {
	cout << " -- Chinchilla Spike! -- \n";
	
	Chinchilla ch1("Ben", 2);
	Chinchilla ch2("Willard", 3);
	
	cout << "\nOUT: " << endl;
	
	ch1.display();
	ch2.display();

	ofstream chf("chinfarm.txt");
	
	ch1.writeTextData(chf);
	ch2.writeTextData(chf);

	chf.close();


	cout << "\nIN: " << endl;
	ifstream inChinf("chinfarm.txt");
	Chinchilla ch3("", 0);
	Chinchilla ch4("", 0);

	ch3.readTextData(inChinf);
	ch4.readTextData(inChinf);

	ch3.display();
	ch4.display();
	inChinf.close();

    
   cout << " \n----- chinfarm2 -----\n";
	fstream chf2("chinfarm2.txt", fstream::in | fstream::out | fstream::trunc);
	
	chf2 << ch1;
	chf2 << ch2;
	chf2.seekg(0);
	
	chf2 >> ch3;
	chf2 >> ch4;
	chf2.close();
	
	cout << ch3;
	cout << ch4;
	
	

	cout << "\n --- Binary Time! --- \n";	
	//TODO read and write binary data in similar vein to above
	Chinchilla rb1("", 0);
	Chinchilla rb2("", 0);
	Chinchilla rb3("", 0);
	Chinchilla rb4("", 0);
	rb1.set_name("Lando");
	rb2.set_name("Buzz");
	rb1.set_age(44);
	rb2.set_age(9);

	rb1.display();
	rb2.display();

	ofstream rfBin("chinfarm.bin", ios::out | ios::binary);

	//TODO read and write binary data in similar vein to above
	writeBinaryData(rfBin, rb1);
	writeBinaryData(rfBin, rb2);
	rfBin.close();

	ifstream rfBinIN("chinfarm.bin", ios::in | ios::binary);
	readBinaryData(rfBinIN, rb3);
	readBinaryData(rfBinIN, rb4);

	rb3.display();
	rb4.display();


	return 0;
}



