//Memory Management: Part C
//Shifting number 16 bits to the left
#include <stdio.h>

char *binbin(int n);

int main()
{
	int b,x;
	b = 0X07FF;
	for(x=0;x<8;x++)
	{
	//04X displays hex values
	printf("%s, 0x%04X %4dn",binbin(b),b,b);
	b<<=1;
	}
	return(0);
}
char *binbin(int n)
{
	static char bin[17];
	int x; 
	for(x=0;x<16;x++)
	{
	bin[x] = n & 0x8000 ? '1' : '0';
	n <<= 1;
	}
	bin[x] = ' ';
	return(bin);
}
//Reference from dummies.com by Dan Gookin
