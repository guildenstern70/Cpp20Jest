//
// C++ 20 Jest
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include "animal.h"


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
