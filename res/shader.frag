#version 330 core

in vec4 vertexColor;

uniform vec2 resolution;

out vec4 FragColor;

void main()
{
    vec2 uv = vec2(gl_FragCoord.x / resolution.x, gl_FragCoord.y / resolution.y);
    FragColor = vec4(uv.x, uv.y, 0.25, 1);
} 