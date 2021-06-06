#version 330 core

in vec4 vertexColor;

out vec4 FragColor;

uniform vec3 u_Resolution;
uniform vec3 u_Origin;
uniform vec3 u_Rotation;
uniform float u_Time;

struct ray
{
	vec3 origin;
	vec3 direction;	
	vec4 color;
};

void main()
{
    vec2 uv = vec2(gl_FragCoord.x / u_Resolution.x, gl_FragCoord.y / u_Resolution.y);
	// ray r(u_Origin, u_Origin, vec4());
    FragColor = vec4(uv.x, uv.y, 0.25, 1);
} 