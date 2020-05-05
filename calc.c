#include "add.h"
#include "mul.h"
#include<stdio.h>
#include<stdlib.h>


int main(int argc,char *argv[]){

	int option,val1,val2;

	if (argc==3){

		val1 = atoi(argv[0]);
		val2 = atoi(argv[1]);

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

		return "need exact 3 arguments";
	}

return 0;
}