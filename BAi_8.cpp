#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

   printf("nhap text cua ban vao day ");
   char sentence[50];
   fgets(sentence , sizeof(sentence) , stdin );
   int leng = sizeof(sentence) / sizeof(char);
  // printf("\n text cua ban la \n ");
   //fputs(sentence , stdout);
   for ( int i = 0 ; i < strlen(sentence) ; i ++){
   	if ( i == 0 || sentence[i - 1] == ' '){  // kiem tra khoang trong 
   		 sentence[i] = toupper(sentence[i]); // in hoa 
	   } else{
	   	sentence[i] = tolower(sentence[i]); // khong thi in thuong 
	   }
      
   }
   
   printf("viet hoa %s \n ", sentence );
   
}