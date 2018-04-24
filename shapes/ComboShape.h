#pragma once

#include "Shape.h"
#include <string>
#include <memory>

class ComboShape: public Shape
{
public:
	virtual ~ComboShape() = default;
	virtual std::string printCombo() const = 0;
	std::string moveToFirstPosition() const;
	std::string toPostScript() const;
	

private:
};