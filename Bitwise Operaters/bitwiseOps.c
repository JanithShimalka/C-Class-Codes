#include <stdio.h>

int main()
{
    int a = 6; // 1 1 0
    int b = 5; // 1 0 1
    
    //AND      // 1 0 0 --> 4
    // OR      // 1 1 1 --> 7
    //XOR      // 0 1 1 --> 3
    
    int c = a & b;
    printf("%i\n",c);
    
    int d = a | b;
    printf("%i\n",d);
    
    int e = a^b; 
    printf("%i\n",e);
    

return 0;

}


