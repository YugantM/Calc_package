#include "add.h"
#include "mul.h"
#include<stdio.h>
#include<stdlib.h>


int main(int argc,char *argv[]){

	int option,val1,val2;

	if (argc==4){

		option = atoi(argv[1]);
		val1 = atoi(argv[2]);
		val2 = atoi(argv[3]);

		switch(option){

			case 1:
			printf("%d",add(val1,val2));
			break;

			case 2:
			printf("%d",mul(val1,val2));
			break;

			default:
			printf("invalid option");
			break;
		}


	}
	else{

		printf("need exact 3 arguments");
	}

return 0;
}