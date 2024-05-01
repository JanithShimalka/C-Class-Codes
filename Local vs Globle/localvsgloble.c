#include <stdio.h>

int main()
{
int a = 10; // Globle
printf("%i\n",a);

{
int a = 20; // Local
printf("%i\n",a);
}

printf("%i\n",a);

return 0;

}


