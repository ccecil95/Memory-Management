//Memory Management: Part B
//Convert binary to hexadecimal number

#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int main()

{
//take binary number and store it in binary_number variable
	long int binary_number, hexadecimal_number = 0, i = 1, remainder;
	
	printf("Please Enter the Binary Number: ");
	scanf("%ld", &binary_number);
	while (binary_number != 0)
	{
	//obtain the remainder and quotient of the input number and divide it by 10
		remainder = binary_number % 10;
		hexadecimal_number = hexadecimal_number + remainder * i;
		//increment the variable i by 2
		i = i * 2;
		binary_number = binary_number / 10;
	}
	printf("Equivalent Hexadecimal Number%lX", hexadecimal_number);
	
	return 0;

}

//Reference from Sitesbay.com

