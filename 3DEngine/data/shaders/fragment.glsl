#version 330 core

// input color from vertex shader
in vec4 v2f_color;

layout(location = 0) out vec4 out_color;

void main()
{
	out_color = v2f_color;
}