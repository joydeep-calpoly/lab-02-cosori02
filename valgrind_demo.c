#include <stdlib.h>
#include <stdio.h>

void my_function(char **);

int main(int argc, char *argv[]) {
    char *ptr;
    ptr = malloc(10);

    if(ptr != NULL) printf("FIRST TEST: ptr is not null\n");
    else printf("FIRST TEST: ptr is null\n");

    char **pntr = &ptr;
  
    my_function(pntr);
	
    if(ptr != NULL) printf("SECOND TEST: ptr is not null\n");
    else printf("SECOND TEST: ptr is null\n");
	
	
}

void my_function(char **a) {
    free(*a); 
    *a = NULL;
}
