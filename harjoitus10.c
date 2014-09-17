#include<stdio.h>
int main(void)
{
int luku;
	long kertoma;

	kertoma = 1;

	printf("Anna luku: ");
	scanf("%d", &luku);

	if (luku > 20)
        printf("Liian suuri luku\n");
    else {
        while (luku > 1)
            kertoma *= luku--;
        printf("%d\n", kertoma);
    }


}
