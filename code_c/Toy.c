#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unishd.h>

float A, B, C;

float cubewidth = 20;
int width = 160, height = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgroundASCIICode = ' ';
int distanceFromCam = 100;
float K1 = 40;

float incrementSpeed = 0.6;

float x, y, z;
float ooz;
int xp, yp;
int idx;

float calculateX(int i, int j, int k){
	return j * sin(A) * sin(B) * cos(C) - k *cos(A) * sin(B)* cos(C) +
			j * cos(A) * sin(C) * k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k){
	return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
			j * sin(A) * sin(B) * sin(C) + cos(A) * sin(B) * sin(C) -
			i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k){
		return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateforSurface(float cubeX, cubeY, cubeZ, int ch){
	x = calculateX(cubeX, cubeY, cubeZ);
	y = calculateY(cubeX, cubeY, cubeZ);
	z = calculateZ(cubeX, cubeY, cubeZ);
	
	ooz = 1/z;
	
	xp = (int)(width/2 - 2 * cubeWidth + K1 * ooz * x * 2);
	yp = (int)(height/2 + K1 * ooz * y);
	
	idx = xp + yp * width;
	
	if(idx>= 0 && idx < width * height){
		if(ooz > zBuffer[idx]){
			zBuffer[idx] = ooz;
			buffer[idx] = ch;
		}
	}
}

int main(){ 
	
	printf("\x1b[2]");
	while(1){
		memset(buffer, backgroundASCIIcode, width * height);
		memset(zBuffer, 0, width * height * 4);
		cubewidth = 20;
		horizontalOffset = -2 * cubewidth;
		
		for(float cubeX = - cubeWidth; cubeX < cubeWidth; cudeX += incrementSpeed){
			for(float cubeY = - cubeWidth; cubeY < cubewidth; cubeY += incrementSpeed){
				calculateForSurface(cubeX, cubeY,  -cubeWidth, '.');
				calculateForSurface(cubeWidth, cubeY, cubeX, '$');
				calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
				calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
				calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
				calculateForSurface(cubeX, cubeWidth, cubeY, '+');
				
			}
		}
		
		print("\x1b[H");
		for( int k = 0; k < width * height; k++){
			putchar(k % width ? buffer[k] : 10);
		}
		
		A += 0.005;
		B += 0.005;
		usleep(8000 * 2);
	
	}

	return 0;
}
