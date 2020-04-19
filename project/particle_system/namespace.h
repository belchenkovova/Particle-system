#pragma once

#include "engine/engine.h"
#include "computer/computer.h"

#include "external/json.hpp"


namespace			particle_system
{
	using			std::string;
	using			std::vector;
	using			std::optional;
	using			std::nullopt;
	using			std::ifstream;
	using			std::move;
	using			std::fill;

	using			glm::vec3;

	using			json = nlohmann::json;

	class			object;
	class			map;
	class			manager;
}