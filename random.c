#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int randchar()
{
	
    srand( (unsigned)time(NULL) );
    int l = ((rand() % 26) + 65);
    char ch = l;
    
    return ch;
	
	
}
