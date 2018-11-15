#version 330 compatibility
out vec3 vColor;
out vec2 vST;
out vec4 pos;
uniform float uTimeV;
uniform bool freezeVertex;

void main() {
	vST = gl_MultiTexCoord0.st;
	vec4 pos = gl_Vertex;
	float halfTime = 0.5;
	if(uTimeV >= 0.07 && uTimeV <= 0.93){
		if(uTimeV <= halfTime){
			pos.y = pos.y + uTimeV*40;
		}else {
			pos.y = (pos.y + (1-uTimeV)*40);
		}
	}
	if(uTimeV < 0.1 || uTimeV > 0.9){
		float scaleFactor = 1.5;
		if(uTimeV < 0.1) {
			if(uTimeV < 0.05){
				float fx = uTimeV * 2;
				pos.x = pos.x*(scaleFactor-scaleFactor*fx);
			}else{
				float fx = uTimeV * 2;
				pos.x = pos.x*(scaleFactor-scaleFactor*fx);
			}
		}else{
			if(uTimeV > 0.95){
				float fx = (uTimeV-0.9) * 2;
				pos.x = pos.x*(scaleFactor+scaleFactor*fx);
			}else{
				float fx = (uTimeV-0.9) * 2;
				pos.x = pos.x*(scaleFactor+scaleFactor*fx);
			}
		}
		
	}
	if((uTimeV >= 0.1 && uTimeV < 0.2) || (uTimeV <= 0.9 && uTimeV > 0.8 )){
		float scaleFactor = 1.4;
		if(!(uTimeV <= 0.9 && uTimeV > 0.8 )){
			if(uTimeV >= 0.15){
				float fy = (uTimeV - 0.1)*2;
				pos.y = pos.y*(scaleFactor-scaleFactor*fy);
			} else {
				float fy = (uTimeV - 0.1)*2;
				pos.y = pos.y*(scaleFactor+scaleFactor*fy);
			}
		}
		
		if(!(uTimeV >= 0.1 && uTimeV < 0.2)){
			if(uTimeV <= 0.85){
				float fy = (uTimeV - 0.8)*2;
				pos.y = pos.y*(scaleFactor+scaleFactor*fy);
			} else {
				float fy = (uTimeV - 0.8)*2;
				pos.y = pos.y*(scaleFactor-scaleFactor*fy);
			}	
		}
	}
	vColor = vec3(pos.x+sin(uTimeV*50)+pos.y+sin(uTimeV*50)+pos.z+sin(uTimeV*50));
	gl_Position = gl_ModelViewProjectionMatrix * pos;
}
