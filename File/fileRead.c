#include <stdio.h>
 
int main()
{
FILE *fptr;

fptr =fopen("lastDay.txt","r");
if(fptr == NULL){
	printf("The file is not opened. \n");
}else{
	char txt[100];
		
	fgets(txt,100,fptr);
	printf("%s",txt);

}

return 0;
}