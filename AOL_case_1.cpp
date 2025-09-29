#include<stdio.h>
#include<string.h>

int main(){
	int i;
	int j;
	char string[101];
	char rev[101];
	scanf("%[^\n]", string); 
	getchar();
	
	int length = strlen(string);
	
	for(i = 0, j = length - 1; i < length, j >= 0; i++,j--){
		rev[i] = string[j]; //-> membalikkan stringnya 
		if(rev[i] >= 'A' && rev[i] <= 'Z'){ //-> kalau huruf besar, diubah menjadi huruf kecil
			rev[i] += 32;
		}else if (rev[i] >= 'a' && rev[i] <= 'z'){//-> kalau huruf kecil diubah menjadi huruf besar
			rev[i] -= 32;
		}
	}
	
	rev[i] = '\0'; //-> memberikan end of file di akhir kalimat
	
	printf("%s\n", rev); //-> print string
}

