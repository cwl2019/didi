/*********************************************************/
/*learn github software for poor*/
/*date:2019/04/09*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char name[16];
	printf ("u name:");
	scanf (" %15s",name);
	
	printf ("%s,hello,github\n",name);
	char *p=(char*)memalloc(sizeof(char) * 1024);
	if(p){
		printf ("allocate pointer ok.%0x",p);
		memcpy(p,"hello,world");
		printf ("%s\n",p);
		free(p);
	}
	return 0;
}
