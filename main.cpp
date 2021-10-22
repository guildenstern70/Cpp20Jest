//
// C++ 20 Jest
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//


#include <iostream>
#include <memory>

#include "animal.h"
#include "cat.h"
#include "sheep.h"
#include "dog.h"

void animalSound(const Animal& animal)
{
    std::cout << animal.who() << " ... " << animal.sound() << std::endl;
}

int main()
{
    auto aCat =  Animal::createAnimal(AnimalType::Cat, "Gatto Arturo");
    auto aDog =  Animal::createAnimal(AnimalType::Dog, "Cane Pluto");
    auto aSheep =  Animal::createAnimal(AnimalType::Sheep, "Pecora Dolly");

    animalSound(*aCat);
    animalSound(*aDog);
    animalSound(*aSheep);
}

