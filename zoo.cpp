#include <iostream>
#include "Animal.h"
#include "Animal.cpp"
#include "AnimalsInZoo.h"
#include "AnimalsInZoo.cpp"

int main()
{
    Animal *animal1 = new Animal("African Elephant", 1758);
    Animal animal2("Giant Panda", 1869);
    Animal animal3("Small Panda", 1825);

    AnimalsInZoo animal = AnimalsInZoo(*animal1);
    animal.display();

    delete animal1;
    animal1 = new Animal("Snow Leopard", 1777);

    animal2.display();
    animal3.display();
    animal1->display();

    delete animal1;
}
