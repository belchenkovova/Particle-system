#version 400 core

in vec2				pass_UV;
out vec4			result_color;

uniform sampler2D	uniform_texture;
uniform vec3		uniform_color;

void main()
{
	vec4			sampled;

	vec3			temp_color = vec3(1, 1, 1);

	sampled = vec4(1, 1, 1, texture(uniform_texture, pass_UV).r);
	result_color = vec4(temp_color, 1) * sampled;
//	result_color = vec4(1, 1, 1, 1);
}