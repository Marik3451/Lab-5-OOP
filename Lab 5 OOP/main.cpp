#include <iostream>
#include "Cow.h"
#include "Horse.h"
#include "Humans.h"

int main()
{
    Mammals* human = new Humans();
    Mammals* cow = new Cow();
    Mammals* horse = new Horse();

    cout << human->getDescription() << endl;
    cout << cow->getDescription() << endl;
    cout << horse->getDescription() << endl;

    delete human;
    delete cow;
    delete horse;
}
