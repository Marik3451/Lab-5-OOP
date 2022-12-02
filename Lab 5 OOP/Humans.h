#pragma once
#include "Mammals.h"

class Humans : public Mammals
{
public:
	string getDescription() override;
};
