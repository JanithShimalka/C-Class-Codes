#include <stdio.h>
 
int main()
{
FILE *fptr;

fptr =fopen("lastDay.txt","a"); // For Write --> w, For Append --> a
if(fptr == NULL){
	printf("The file is not opened. \n");
}else{
	fprintf(fptr," Janith\n");
	fprintf(fptr,"Mind Masters");
}

return 0;
}