#version 330 compatibility
in vec3 vColor;
in vec2 vST;
in vec4 pos;
uniform float uTimeF;
uniform float uS0;
uniform float uT0;
uniform float uSize;
vec3 stripeColor = vec3(1., 1., 0);

void main() {
	float halfTime = 0.5;
	if(uTimeF >= 0.2 && uTimeF <= 0.8){
		if(uTimeF <= halfTime){
			if(1-vST.t > cos(uTimeF*1.5)){
				if(int(vST.t*10) % 3 == int(uTimeF*10) % 3)
					gl_FragColor = vec4(stripeColor,1);
				else
					gl_FragColor = vec4(1.,0.,0.,1);				
			}else{
				gl_FragColor = vec4(stripeColor, 1.);
			}
			//gl_FragColor = vec4(1.,0.,0.,1);
		}else {
			if(1-vST.t > cos(uTimeF*1.5)){
				if(int(vST.t*10) % 3 == int(uTimeF*10) % 3)
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
