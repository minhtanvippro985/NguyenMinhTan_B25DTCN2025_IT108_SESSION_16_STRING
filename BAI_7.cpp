#include<stdio.h>
#include<string.h>
#include <ctype.h>

int count_letters(char s[]) {
    int dem = 0;
    int leng = strlen(s);
    for (int i = 0; i < leng; i++) {
        // kkhoan trang THI DEM
      if(isalpha(s[i]) && !isdigit(s[i])){
      	dem++;
	  }
    
    }
    return dem;
}
int count_numbs(char s[]) {
    int dem = 0;
    int n = strlen(s);
    for (int i = 0; s[i] != ' ' < n; i++) {
        // kkhoan trang THI DEM
      if(isdigit(s[i])){
      	dem++;
	  }
    
    }
    return dem;
}
int speccount(char s[]) {
    int dem = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        // kkhoan trang THI DEM
      if(!isalpha(s[i]) && !isdigit(s[i])  ){
      	dem++;
	  }
    
    }
    return dem - 1;
}

int main(){

   printf("nhap text cua ban vao day ");
   char sentence[50];
   fgets(sentence , sizeof(sentence) , stdin );
   int leng = sizeof(sentence) / sizeof(char);
  // printf("\n text cua ban la \n ");
   //fputs(sentence , stdout);
   for ( int i = 0 ; i < strlen(sentence) ; i ++){
   	printf("%c" ,sentence[i]);
   	
   }
   int countedletters = count_letters(sentence);
   int countednumb = count_numbs(sentence);
   int speccounterlmao = speccount(sentence);
   printf("co %d CHU trong chuoi ky tu \n" , countedletters );
   printf("co %d SO trong chuoi ky tu \n" , countednumb );
   printf("co %d KY TU DAC BIEN trong chuoi ky tu \n" , speccounterlmao );
}