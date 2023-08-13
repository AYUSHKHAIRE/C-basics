#include <stdio.h>

int main() 
{
	float KM;

	printf("Please enter kilometers:");
	scanf("%f", &KM);

	float miles = KM / 1.6;

	printf("%f Miles", miles);
}