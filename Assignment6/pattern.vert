#version 330 compatibility
out vec3 vColor;
out vec2 vST;

void main() {
	vST = gl_MultiTexCoord0.st;
	vec4 pos = gl_Vertex;
	vColor = pos.xyz;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}