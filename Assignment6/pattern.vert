#version 330 compatibility
out vec3 vColor;
out vec2 vST;
out vec4 pos;
uniform float uTime;
uniform bool freezeVertex;

void main() {
	vST = gl_MultiTexCoord0.st;
	vec4 pos = gl_Vertex;
	float halfTime = 0.5;
	if(uTime >= 0.07 && uTime <= 0.93){
		if(uTime <= halfTime){
			pos.y = pos.y + uTime*40;
		}else {
			pos.y = (pos.y + (1-uTime)*40);
		}
	}
	if(uTime < 0.1 || uTime > 0.9){
		float scaleFactor = 1.5;
		if(uTime < 0.1) {
			if(uTime < 0.05){
				float fx = uTime * 2;
				pos.x = pos.x*(scaleFactor-scaleFactor*fx);
			}else{
				float fx = uTime * 2;
				pos.x = pos.x*(scaleFactor-scaleFactor*fx);
			}
		}else{
			if(uTime > 0.95){
				float fx = (uTime-0.9) * 2;
				pos.x = pos.x*(scaleFactor+scaleFactor*fx);
			}else{
				float fx = (uTime-0.9) * 2;
				pos.x = pos.x*(scaleFactor+scaleFactor*fx);
			}
		}
		
	}
	if((uTime >= 0.1 && uTime < 0.2) || (uTime <= 0.9 && uTime > 0.8 )){
		float scaleFactor = 1.4;
		if(!(uTime <= 0.9 && uTime > 0.8 )){
			if(uTime >= 0.15){
				float fy = (uTime - 0.1)*2;
				pos.y = pos.y*(scaleFactor-scaleFactor*fy);
			} else {
				float fy = (uTime - 0.1)*2;
				pos.y = pos.y*(scaleFactor+scaleFactor*fy);
			}
		}
		
		if(!(uTime >= 0.1 && uTime < 0.2)){
			if(uTime <= 0.85){
				float fy = (uTime - 0.8)*2;
				pos.y = pos.y*(scaleFactor+scaleFactor*fy);
			} else {
				float fy = (uTime - 0.8)*2;
				pos.y = pos.y*(scaleFactor-scaleFactor*fy);
			}	
		}
	}
	vColor = vec3(pos.x+sin(uTime*50)+pos.y+sin(uTime*50)+pos.z+sin(uTime*50));
	gl_Position = gl_ModelViewProjectionMatrix * pos;
}
