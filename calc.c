#include "add.h"
#include "mul.h"
#include<stdio.h>
#include<stdlib.h>


int main(int argc,char *argv[]){
	if (argc==3){

		val1 = atoi(argv[0]);
		val2 = atoi(argv[1]);

		switch(option){

			case 1:
			printf(add(val1,val2));
			break;

			case 2:
			printf(add(val1,val2));
			break;

			default:
			printf("invalid option");
		}


	}
	else{

		return "need exact 3 arguments";
	}

return 0;
}