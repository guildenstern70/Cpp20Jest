//
// C++ 20 Jest
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#ifndef CPP20JEST_CAT_H
#define CPP20JEST_CAT_H

#include "animal.h"

class Cat final : public Animal
{
public:
    Cat(std::string_view name, double weight): Animal(name, weight) {};
    [[nodiscard]] std::string sound() const override;
};


#endif //CPP20JEST_CAT_H
