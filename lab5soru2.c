#include <stdio.h>
#define MAX_SIZE 100

/* Bir dizide n eleman depolamak ve i�aret�iyi kullanarak elemanlar� yazd�rmak i�in C'de bir program yaz�n. */

int main() {
int arr [100];	
int *ptr;	
int N;	
int i;
ptr=arr;

printf("dizi kac elemanl� olsun ");	
	scanf("%d",&N);
	
	printf("elemanlari giriniz");
	for(i=0;i<N;i++)
	{
	scanf("%d",ptr);	
	ptr++;	
	}
for(ptr=arr, i=1;ptr<arr+N;ptr++,i++)
{
	printf("dizinin %d. elemani : %d\n",i,*ptr);
}
	return 0;
}
