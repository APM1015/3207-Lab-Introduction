#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  String chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
  int a;
		
/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	for(a=0;a<27;a++)
		putf('%c',a);

	return(0);
}
