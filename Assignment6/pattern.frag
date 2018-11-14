#version 330 compatibility
in vec3 vColor;
in vec2 vST;
uniform float uTime;
uniform float uS0;
uniform float uT0;
uniform float uSize;

void main() {
	vec3 color = vec3(1.,1.,0.);

	if(uS0-uSize/2. <= vST.s && vST.s <= uS0+uSize/2. &&
		uT0-uSize/2. <= vST.t && vST.t <= uT0+uSize/2.){
			color = vec3(1.,0.,0.);
		}
	gl_FragColor = vec4(color, 1.);
}
