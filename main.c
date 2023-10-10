#include <stdio.h>
int main(int argc, const char *argv[])
{
    char a[4] = {0x01, 0x02, 0x03, 0x04};
    unsigned short num = 0;
 	for(int i = 0; i<4;i++)
		num = (num<<4) + a[i];
	printf("%#x\n", num);
	return 0;
}

