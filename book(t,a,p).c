#include <stdio.h>
#include <string.h>
struct Book{
	char title[50];
	char author[50];
	float price;
}b;
int main()
{
	strcpy(b.title,"C Programming");
       strcpy(b.author,"Dennis Ritchie");
	b.price = 450;
	
	printf("Book Title:%s\n",b.title);
	printf("Book Author:%s\n",b.author);
	printf("Book Price:%f\n",b.price);
	
	return 0;
}