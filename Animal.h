#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
private:
    std::string species;
    unsigned int year_discovered;

public:
    Animal();
    Animal(std::string speciesName, unsigned int discoveryYear);
    void display();
};
#endif
