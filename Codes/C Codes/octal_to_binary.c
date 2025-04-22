#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	
	/***** CONVERTING OCTAL TO BINARY ******/
	// int oct_num;
	// printf("Enter Octal Number: ");
	// scanf("%d", &oct_num);
	// int cpy = oct_num;
	// int ctr = 0;
	// while(cpy){
	// 	cpy/=10;
	// 	ctr++;
	// }
	// char bin_num[20] = "";
	// while(ctr){
	// 	int result = pow(10, (ctr-1));
	// 	int temp = (oct_num/ result);
	// 	switch (temp){
	// 		case 0:
	// 		strcat(bin_num, "000");
	// 		break;
	// 		case 1:
	// 		strcat(bin_num, "001");
	// 		break;
	// 		case 2:
	// 		strcat(bin_num, "010");
	// 		break;
	// 		case 3:
	// 		strcat(bin_num, "011");
	// 		break;
	// 		case 4:
	// 		strcat(bin_num, "100");
	// 		break;
	// 		case 5:
	// 		strcat(bin_num, "101");
	// 		break;
	// 		case 6:
	// 		strcat(bin_num, "110");
	// 		break;
	// 		case 7:
	// 		strcat(bin_num, "111");
	// 		break;
	// 	}
	// 	oct_num -= (temp*result);
	// 	ctr--;
	// }
	// printf("%s", bin_num);
	

	/****** NEGATING USING BITWISE OPERATORS *******/
	int x = 6;
	x = (~x) + 1;
	printf("%d", x);
	return 0;
}