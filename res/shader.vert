#version 330 core

layout (location = 0) in vec3 aPos;

in vec4 a_Color;

out vec4 vertexColor;

uniform mat4 u_Projection;

void main()
{
    gl_Position = u_Projection*vec4(aPos, 1.0);
    vertexColor = a_Color;
}