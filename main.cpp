//
// C++ 20 Jest
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#if USE_MODULES
    import <iostream>;
#else
    #include <iostream>
#endif

double feetToCentimeters(double feet)
{
    return 30.48 * feet;
}

int main()
{
    double feet {};

    std::cout << "Enter a distance in feet and get it translated in centimeters:" << std::endl;
    std::cout << "> ";
    std::cin >> feet;
    std::cout << feet << " feets are " << feetToCentimeters(feet) << " centimeters";

    return 0;
}

