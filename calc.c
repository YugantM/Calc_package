#include "add.h"
#include "mul.h"
#include<stdio.h>


void main(int option, int val1, int val2){
	switch(option){

		case 1:
		print(add(val1,val2));
		break;

		case 2:
		print(add(val1,val2));
		break;

		default:
		print("invalid option")
	}

}