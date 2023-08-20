#include <stdio.h>
#define MAX_SIZE 100

/* Bir dizide n eleman depolamak ve iþaretçiyi kullanarak elemanlarý yazdýrmak için C'de bir program yazýn. */

int main() {
int arr [100];	
int *ptr;	
int N;	
int i;
ptr=arr;

printf("dizi kac elemanlý olsun ");	
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
