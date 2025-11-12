#include<stdio.h>
#include<string.h>
#include <ctype.h>

int count_letters(char s[]) {
    int dem = 0;
    int n = strlen(s);
    for (int i = 0; s[i] != ' ' < n; i++) {
        // kkhoan trang THI DEM
      if(isalpha(s[i])){
      	dem++;
	  }
    
    }
    return dem;
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
   printf("co %d chu trong chuoi ky tu " , countedletters );
}