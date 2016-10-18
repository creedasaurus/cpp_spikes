#include <iostream>
#include <vector>


// abstrac is when you can't actually use JUST the animal class
class Animal {
public:
	virtual void speak() = 0;
};


class Dog: public Animal {
public:
	void speak() {
		std::cout << "bark" << std::endl;
	}
};


class Pig: public Animal {
public:
	void speak() {
		std::cout << "oink" << std::endl;
	}
};



int main() {

	Pig peggy;
	Dog doug;
	peggy.speak();
	doug.speak();

	std::cout << "------" << std::endl;

	std::vector<Animal*> ark;
	ark.push_back(&peggy);
	ark.push_back(&doug);

	for (Animal *animal: ark) {
		animal->speak();
	}


	return 0;
}

/* 
++ OOP ++ 
- encapsulation 
- inheritance
- polymorphism

keyword for each of these:
encap -- Class/struct 
inher -- ':'
polym -- virtual


Note-- '::' is for scoping something like 'std::'


*/




