#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

	//system("ls -l");
	//system("tar -vxf file.tar");
	int i;

	
	printf("%d",argc);
    printf("Usage : ghinstall <install Directory> \n");
    for(i=1; i<argc; i++) printf("%s\n ", argv[i]);
    printf("\n");
	

	printf("%s\n",argv[argc-1]);

	char command[50];
	strcpy(command, "tar -vxf file.tar -C" );
	strcat(command, argv[argc-1]);
 	//system("tar -vxf file.tar -C %s\n",argv[argc-1]);
 	system(command);
              
        

	return 0;
}