#include <stdio.h>

/* Apuntadores y arreglos */
int main(void)
{
int V1[4] = {1, 3, 5, 7}, V2[4]= {2,4};
int *AX, *AY;
AX = &V1[2];
AY = &V2[2];
V2[2] = *(AX+1);
V2[3] = *AX;
AX = AX + 1;
V1[0] = *AX;
printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d");
}