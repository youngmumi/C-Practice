//과제 27. 버블 정렬 

#include <stdio.h>
#define ARR_SIZE 8
 

void bubble_sor(int numbers[], int len) {
	
	int temp;
	int i,j;

	
	for(j=0;j<500;j++){
		for(i=0;i<len-1;i++){
		
			if(numbers[i]>numbers[i+1]){
			
				temp=numbers[i];
				numbers[i]=numbers[i+1];
				numbers[i+1]=temp;
			
			}
		
		}
	}
	
	printf("정렬결과: ");
	
	for(i=0;i<len;i++){
		printf("%d ", numbers[i]);
	}
	
	printf("\n");

}


void main() {
	
	int numbers1[ARR_SIZE] = {9, 2, 5, 7, 4, 1, 1, 3}; 
	int numbers2[ARR_SIZE] = {2, 4, 9, 1, 4, 3, 5, 4}; 

	bubble_sor(numbers1, ARR_SIZE);
	bubble_sor(numbers2, ARR_SIZE);

	return 0;
}
