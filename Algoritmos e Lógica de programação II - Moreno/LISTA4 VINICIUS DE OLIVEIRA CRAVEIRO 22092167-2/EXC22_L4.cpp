#include <stdlib.h>
#include <stdio.h>

//

int main(){
	int x;
	char c;
	
	for (x=0; x<=1; x++){
		printf("\n-%c %d\n",'A'+(x*32),'A'+(x*32));
		printf("-%c %d\n",'E'+(x*32),'E'+(x*32));
		printf("-%c %d\n",'I'+(x*32),'I'+(x*32));
		printf("-%c %d\n",'O'+(x*32),'O'+(x*32));
		printf("-%c %d\n\n",'U'+(x*32),'U'+(x*32));
	}
	
	system("pause");
	return 0;
	}
