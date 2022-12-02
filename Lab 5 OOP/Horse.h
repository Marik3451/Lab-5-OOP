#pragma once
#include "Animals.h"

class Horse : public Animals
{
public:
	string getDescription() override;
};
