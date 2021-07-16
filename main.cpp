//main.cpp
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"sum_nbo.h"


int main(int argc, char	**argv ){
	uint32_t a,b;
	
	if(argc != 3){
		printf("usage: sum_nbo <file1> <file2>\n");
		exit(0);
	}

	FILE *fp=fopen(argv[1],"rb");
	FILE *fp2=fopen(argv[2],"rb");
	
	fread(&a,sizeof(a),1,fp);
	fread(&b,sizeof(b),1,fp2);
	sum_nbo(a,b);

	fclose(fp);
	fclose(fp2);	

}
