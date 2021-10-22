//
// C++ 20 Jest
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

//
// Created by aless on 22/10/2021.
//

#ifndef CPP20JEST_DOG_H
#define CPP20JEST_DOG_H

#include <string>
#include "animal.h"

class Dog : public Animal
{
public:
    Dog(std::string_view name, double weight): Animal(name, weight) {};
    [[nodiscard]] std::string sound() const override;
};


#endif //CPP20JEST_DOG_H
