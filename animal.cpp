//
// C++ 20 Jest
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include "animal.h"
#include "dog.h"
#include "cat.h"
#include "sheep.h"

#include <random>

double randomweight()
{
    // Seed with a real random value, if available
    std::random_device r;

    // Choose a random mean between 1 and 6
    std::default_random_engine e1(r());
    double lower_bound = 5;
    double upper_bound = 20;
    std::uniform_real_distribution<double> unif(lower_bound,upper_bound);
    return unif(e1);

}


Animal::Animal(std::string_view name, double weight)
{
    this->name = name;
    this->weight = weight;
}

std::string Animal::who() const
{
    auto weightstring = std::to_string(this->weight);
    return this->name + " (" + weightstring + " kg)";
}

std::shared_ptr<Animal> Animal::createAnimal(AnimalType type, std::string_view name)
{
    std::shared_ptr<Animal> createdanimal;
    switch (type)
    {
        case AnimalType::Dog:
            createdanimal = std::make_shared<Dog>(name, randomweight());
            break;

        case AnimalType::Cat:
            createdanimal = std::make_shared<Cat>(name, randomweight());
            break;

        case AnimalType::Sheep:
            createdanimal = std::make_shared<Sheep>(name, randomweight());
            break;

    }
    return createdanimal;
}
