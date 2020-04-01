#pragma once

#include "gui/namespace.h"
#include "gui/symbol/symbol.h"

class					gui::font
{
public :

	static inline int	size{128};

						font(
						const std::string &source,
						int width,
						const glm::vec3 &color = glm::vec3(1, 1, 1));
						~font();

	const symbol		&find_symbol(char task) const;

private :

	FT_Library			library;
	FT_Face				face;
	map<char, symbol>	map;
	glm::vec3			color;

	symbol				build_symbol(char task);
};


