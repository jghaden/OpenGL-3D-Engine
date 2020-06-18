/**
  ******************************************************************************
  * @file    Engine.h
  * @author  Joshua Haden
  * @version V0.0.0
  * @date    03-DEC-2019
  * @brief   Header for Engine.cpp
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
#include "PCH.h"

#define BUFFER_OFFSET(offset) ((void*)(offset))
#define MEMBER_OFFSET(s,m) ((char*)NULL + (offsetof(s,m)))

void Init(int &argc, char* argv[]);
void InitGL(int &argc, char* argv[]);
void InitGLEW();
void IdleGL();
void DisplayGL();
void KeyboardGL(unsigned char c, int x, int y);
void KeyboardUpGL(unsigned char c, int x, int y);
void SpecialGL(int key, int x, int y);
void SpecialUpGL(int key, int x, int y);
void MouseGL(int button, int state, int x, int y);
void MotionGL(int x, int y);
void ReshapeGL(int w, int h);

GLuint LoadShader(GLenum shaderType, const std::string& shaderFile);
GLuint CreateShaderProgram(std::vector<GLuint> shaders);