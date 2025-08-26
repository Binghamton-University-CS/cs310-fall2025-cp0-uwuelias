#include <iostream>
#include "AnimalsInZoo.h"

using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal input)
{
    animal = input;
    numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo()
{
    numAnimals = 0;
}

void AnimalsInZoo::display()
{
    cout << numAnimals << " ";
    animal.display();
}

