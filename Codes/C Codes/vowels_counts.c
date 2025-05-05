#include <stdio.h>
#include <string.h>

int main(){
	char buffer[1001];
	fgets(buffer, 1000, stdin);
	// int vow[5] = {0};
	// for(int i=0; i<strlen(buffer); i++){
	// 	switch(buffer[i]){
	// 		case 'a':
	// 		vow[0]++;
	// 		break;
	// 		case 'e':
	// 		vow[1]++;
	// 		break;
	// 		case 'i':
	// 		vow[2]++;
	// 		break;
	// 		case 'o':
	// 		vow[3]++;
	// 		break;
	// 		case 'u':
	// 		vow[4]++;
	// 		break;
	// 		case 'A':
	// 		vow[0]++;
	// 		break;
	// 		case 'E':
	// 		vow[1]++;
	// 		break;
	// 		case 'I':
	// 		vow[2]++;
	// 		break;
	// 		case 'O':
	// 		vow[3]++;
	// 		break;
	// 		case 'U':
	// 		vow[4]++;
	// 		break;
	// 	}
	// }
	// int sum=0;
	// printf("Counts\nA E I O U\n");
	// for(int i=0; i<5; i++){
	// 	sum+=vow[i];
	// 	printf("%d ",vow[i]);
	// }
	// int consonants = strlen(buffer) - sum;
	// printf("\nConsonants : %d", consonants);
	
	/*OR*/

	int alpha[26] = {0};
	for(int i=0; i< strlen(buffer); i++){
		if(buffer[i] != ' ') alpha[buffer[i] - 'a']++;
	}
	printf("The counts of\na : %d\ne : %d\ni : %d\no : %d\nu : %d\n", alpha[0], alpha[4], alpha[8], alpha[14], alpha[20]);
	int sum = alpha[0] + alpha[4] + alpha[8] + alpha[14] + alpha[20];
	printf("Consonants : %d", strlen(buffer) - sum);
	return 0;
}