#include <stdio.h>
char *getString()
{
char *str = "Nice test for strings";
return str;
}


int main()
{
printf("%s", getString());
getchar();
return 0;
}
/*
The above program works because:
string constants are stored in Data Section (not in Stack Section).
So, when getString returns [*str] is not lost.
*/