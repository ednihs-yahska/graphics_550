#version 330 compatibility
in vec3 vColor;
in vec2 vST;
in vec4 pos;
uniform float uTime;
uniform float uS0;
uniform float uT0;
uniform float uSize;
vec3 stripeColor = vec3(1., 1., 0);

void main() {
	float halfTime = 0.5;
	if(uTime >= 0.2 && uTime <= 0.8){
		if(uTime <= halfTime){
			if(1-vST.t > cos(uTime*1.5)){
				if(int(vST.t*10) % 3 == int(uTime*10) % 3)
					gl_FragColor = vec4(stripeColor,1);
				else
					gl_FragColor = vec4(1.,0.,0.,1);				
			}else{
				gl_FragColor = vec4(stripeColor, 1.);
			}
			//gl_FragColor = vec4(1.,0.,0.,1);
		}else {
			if(1-vST.t > cos(uTime*1.5)){
				if(int(vST.t*10) % 3 == int(uTime*10) % 3)
					gl_FragColor = vec4(stripeColor,1);
				else
					gl_FragColor = vec4(1.,0.,0.,1);				
			}else{
				gl_FragColor = vec4(stripeColor, 1.);
			}
			//gl_FragColor = vec4(1.,0.,0.,1);				
		}
	}
	else{
		gl_FragColor = vec4(1.,0.,0.,1);
	}
}
