#include <stdlib.h>
#include <stdio.h>
enum {false, true};
int main()
{
int i = 1;
do
{
	printf("%d\n", i);
	i++;
	if (i < 15)
	break;
	} while (true);

	getchar();
	return 0;
}

// will print 1 only as it will break the loop
