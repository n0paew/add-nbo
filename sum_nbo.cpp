#include <netinet/in.h>
#include <stdint.h>
#include<stdio.h>
#include "sum_nbo.h"

uint32_t sum_nbo(uint32_t a,uint32_t b){
	uint32_t nbo1,nbo2;
	nbo1=ntohl(a);
	nbo2=ntohl(b);
	printf("%d(%#x) + %d(%#x) = %d(%#x)\n",nbo1,nbo1,nbo2,nbo2,nbo1+nbo2,nbo1+nbo2);
	return nbo1+nbo2;
}
