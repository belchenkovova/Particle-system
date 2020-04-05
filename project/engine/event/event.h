#pragma once

#include "engine/namespace.h"
#include "engine/point/point.h"

class				engine::event final
{
	friend class	core;

public :

	enum class		key
	{
		letter_a = GLFW_KEY_A,
		letter_b = GLFW_KEY_B,
		letter_c = GLFW_KEY_C,
		letter_d = GLFW_KEY_D,
		letter_e = GLFW_KEY_E,
		letter_f = GLFW_KEY_F,
		letter_g = GLFW_KEY_G,
		letter_h = GLFW_KEY_H,
		letter_i = GLFW_KEY_I,
		letter_j = GLFW_KEY_J,
		letter_k = GLFW_KEY_K,
		letter_l = GLFW_KEY_L,
		letter_m = GLFW_KEY_M,
		letter_n = GLFW_KEY_N,
		letter_o = GLFW_KEY_O,
		letter_p = GLFW_KEY_P,
		letter_q = GLFW_KEY_Q,
		letter_r = GLFW_KEY_R,
		letter_s = GLFW_KEY_S,
		letter_t = GLFW_KEY_T,
		letter_u = GLFW_KEY_U,
		letter_v = GLFW_KEY_V,
		letter_w = GLFW_KEY_W,
		letter_x = GLFW_KEY_X,
		letter_y = GLFW_KEY_Y,
		letter_z = GLFW_KEY_Z,
		number_1 = GLFW_KEY_1,
		number_2 = GLFW_KEY_2,
		number_3 = GLFW_KEY_3,
		number_4 = GLFW_KEY_4,
		number_5 = GLFW_KEY_5,
		number_6 = GLFW_KEY_6,
		number_7 = GLFW_KEY_7,
		number_8 = GLFW_KEY_8,
		number_9 = GLFW_KEY_9,
		escape = GLFW_KEY_ESCAPE,
		left = GLFW_KEY_LEFT,
		up = GLFW_KEY_UP,
		right = GLFW_KEY_RIGHT,
		down = GLFW_KEY_DOWN,

	};

	enum class		type
	{
		none,
		key_press,
		key_release,
		key_hold,
		mouse_move,
		mouse_press,
		mouse_release,
		mouse_hold
	};

					event() = default;
					~event() = default;

	[[nodiscard]]
	type			read_type() const;
	[[nodiscard]]
	optional<key>	read_key() const;
	[[nodiscard]]
	optional<point>	read_mouse() const;

private :

	type			type_value{type::none};

	optional<key>	key_value;
	optional<point>	mouse_value;

	void			reset();
	void			reset_if_needed();
};

