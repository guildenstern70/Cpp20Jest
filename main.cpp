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
    std::unique_ptr<Animal> aCat =  std::make_unique<Cat>("Gatto Pippo", 5.0);
    std::unique_ptr<Animal> aDog =  std::make_unique<Dog>("Cane Antonio", 15.0);
    std::unique_ptr<Animal> aSheep =  std::make_unique<Sheep>("Pecora Dolly", 20.0);

    animalSound(*aCat);
    animalSound(*aDog);
    animalSound(*aSheep);
}

