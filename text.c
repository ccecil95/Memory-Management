#include <stdio.h>
#include <math.h>
//Memory Management
//Part A: displaying binary number
// change decimal to a Binary number

long decimalToBinary(int decimalnum)
{
	long binarynum = 0;
	int rem, temp = 1;
	
	while (decimalnum!=0)
	
	{
		rem = decimalnum%2;
		decimalnum = decimalnum / 2;
		binarynum = binarynum + rem*temp;
		temp = temp * 10;
	}
	
	return binarynum;
}

int main()
{ 
	int decimalnum;
	printf("Enter a Decimal Number: ");
	scanf("%d", &decimalnum);
	printf("Equivalent Binary Number is: %1ld", decimalToBinary(decimalnum));
	return 0; 
}

//Reference from Beginnersbook.com by Chaitanya Singh

