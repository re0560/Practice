#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	if(n>=m){
		printf("Y");
	}else{
		printf("N%d",m-n);
	}
	
	return 0;
}
