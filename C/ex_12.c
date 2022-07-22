#include <stdio.h>

int main ()
{
	float byte, kilo,mega,giga,tera;
	
	printf("Insira o valor de em bytes: \n");
	scanf("%f", &byte);
	
	if (byte>=1024 && byte<1048576)
	{
		kilo = byte*0.001024;
		printf("%.2f Kbytes", kilo );
	}
	else 	if (byte>=1048576 && byte <1073741824)
	{
		mega = byte*0.000001024;
		printf("%.2f MB", mega );
	}
	else 	if (byte>=1073741824 && byte< 1099511627776)
	{
		giga = byte*0.000000001024;
		printf("%.2f GB", giga );
	}
	else	if (byte>=1099511627776)
	{
		tera = byte*0.000000000001024;
		printf("%.2f TB", tera );
	}
}
