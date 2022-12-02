#pragma once
#include "Animals.h"

class Cow : public Animals
{
public:
	string getDescription() override;
};
