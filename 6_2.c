#include<stdio.h>

int main(void)
{

	int ratingCounters[11], i, response;

	for(i=1;i<=10;++i)
		ratingCounters[i]=0;

	printf("Podawaj liczby jude!\n");
	for(i=1;i<=20;++i)
		{
		scanf("%d", &response);
		if(response<1 || response>10)
			printf("niepoprawna odpowiedz: %d\n", response);
		else
			++ratingCounters[response];
		}
	printf("\n\nOcena  Liczba odpowiedzi\n\n");
	for(i=1;i<=10;++i)
		printf("%4d %4i \n", i, ratingCounters[i]);

	return 0;
}
