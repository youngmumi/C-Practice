//포인터를 활용한 정렬

#include <stdio.h>

void sort(int* x, int* y, int* z) {
	
	int a=*x;
	int b=*y;
	int c=*z;
	
	
	if(a==b){
		if(b==c){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *x, *y, *z);
		}
		if(b>c){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *x, *y, *z);
		}
		if(c>b){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *z, *y, *x);
		}
	}
	else if (b==c){
		
		if(b==a){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *x, *y, *z);
		}
		if(a>c){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *z, *y, *x);
		}
		if(c>a){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *x, *y, *z);
		}
		
	}
	
	if(a>b){
		if(b>c){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *x, *y, *z);
		}
		
		if(c>b){
			if(a>c){
				printf("정렬결과: \nx: %d, y: %d, z: %d", *x, *z, *y);
			}
			
			if(c>a){
				printf("정렬결과: \nx: %d, y: %d, z: %d", *z, *x, *y);
			}
			}
		}
		

	if(b>a){
		if(a>b){
			printf("정렬결과: \nx: %d, y: %d, z: %d", *y, *x, *z);
		}
		
		if(c>a){
			
			if(b>c){
				printf("정렬결과: \nx: %d, y: %d, z: %d ", *y, *z, *x);
			}
			
			if(c>b){
				printf("정렬결과: \nx: %d, y: %d, z: %d ", *z, *y, *x);
			}
		}
		
	}
	
	
}

int main(){
	
	int x, y, z;
	
	printf("정수 세 개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);
	 
	sort(&x,&y,&z);
	
	return 0;
}
