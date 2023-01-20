#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int main()
{
	
	srand( (unsigned)time(NULL) );
	char c = (char)((rand() % 26) + 65);
	

	printf('%c', c);
	return 0;
	
	
}
