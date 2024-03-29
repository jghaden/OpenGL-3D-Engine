

# C++ OpenGL 3D Engine
An OpenGL 3D engine to render scenes with binocular vision to drive a 3D display.

## Current Features
### **GLSL Shaders:**
<div align="center">
	<img src="capture/vertex_shader.png" width="45%"> <img src="capture/fragment_shader.png" width="45%">
</div>

#### Vertex Shader
```glsl
#version 330 core

layout(location = 0) in vec3 in_position;
layout(location = 0) in vec3 in_color;

out vec4 v2f_color;
uniform mat4 MVP;

void main()
{
	gl_Position = MVP * vec4(in_position, 1);
	v2f_color = vec4(in_color, 1);
}
```
#### Fragment Shader
```glsl
#version 330 core

in vec4 v2f_color;

layout(location = 0) out vec4 out_color;

void main()
{
	out_color = v2f_color;
}
```

### **Camera rotation and translocation:**
<div align="center">
	<img src="capture/camera_rotation.gif" width="45%"> <img src="capture/camera_translocation.gif" width="45%">
</div>
