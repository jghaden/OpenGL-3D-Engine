#version 330 core

layout(location = 0) in vec3 in_position;
layout(location = 0) in vec3 in_color;

out vec4 v2f_color;

// Model, View, Projection (MVP) matrix
uniform mat4 MVP;

void main()
{
	gl_Position = MVP * vec4(in_position, 1);
	v2f_color = vec4(in_color, 1);
}