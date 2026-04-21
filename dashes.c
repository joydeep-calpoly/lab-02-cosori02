#include <stdio.h>

int main(int argc, char *argv[]){
	char letter;
	for(int i = 0; i < argc; i++){
		letter = *argv[i];
		if(letter == '-'){
			// putting i in there makes it
			// so the correct string prints
			printf("%s \n", argv[i]);
		}
	}
	return 0;
	
	

}
