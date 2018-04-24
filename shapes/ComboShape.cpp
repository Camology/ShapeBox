#include "ComboShape.h"
#include <sstream>

std::string ComboShape::moveToFirstPosition() const
{
	std::ostringstream os;
	os << -width() / 2 << "  " << -height() / 2 << " rmoveto \n";  //move to origin
	return os.str();
}

std::string ComboShape::toPostScript() const
{
	std::ostringstream os;

	os << "gsave \n";
	os << moveToFirstPosition();
	os << printCombo();
	os << "grestore";

	return os.str();
}
