//
// C++ 20 Jest
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#ifndef CPP20JEST_ANIMAL_H
#define CPP20JEST_ANIMAL_H

#include <string>

// Base class for all Animals
class Animal
{
public:
    Animal(std::string_view name, double weight);
    virtual ~Animal() = default;
    std::string who() const;
    [[nodiscard]] virtual std::string sound() const = 0;

private:
    std::string name;
    double weight;
};


#endif //CPP20JEST_ANIMAL_H
