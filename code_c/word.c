#include <stdio.h>

int main(){
	
	int H, W;
	char HW[50][50];
	
	int i, j, k;
	int n=0;
	
	scanf("%d %d", &H, &W);
	
	printf("\n");
	
	for(i=0; i<H; i++){
		scanf("%s", &HW[i]);
	}
		
	i=0;
	j=0;
	
	for(k=0; ;k++){
		if((HW[i][j]=='U')&&(i!=0)){
			i-=1;
		} else if((HW[i][j]=='D')&&(i!=H)){
			i+=1;
		} else if((HW[i][j]=='L')&&(j!=0)){
			j-=1;
		} else if((HW[i][j]=='R')&&(j!=W)){
			j+=1;
		} else {
			break;
		}
		if(k>2500) break;
	}
	
	if(k>2500) printf("\n-1");
	else printf("\n%d %d", i+1, j+1);
	
	return 0;
}
