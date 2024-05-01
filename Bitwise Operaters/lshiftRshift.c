#include <stdio.h>

int main()
{
    int a = 10; 
   
 int b = a << 1;
 printf("%i\n",b); // 1 0 1 0 0 --> 20
 
 int c = a >> 1; // 1 0 1 --> 5
 printf("%i\n",c);
return 0;

}
