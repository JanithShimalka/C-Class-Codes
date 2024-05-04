
#include <stdio.h>

int main(){
    
    struct Point{
        int x;
        float y;
    };
    
    struct Point p1;
    p1.x = 10;
    p1.y = 12.5;
    printf("%i\n",p1.x);
    printf("%.2f\n",p1.y);
    
    struct Point p2;
    p2.x = 20;
    p2.y = 182.5;
    printf("%i\n",p2.x);
    printf("%.2f\n",p2.y);
}
