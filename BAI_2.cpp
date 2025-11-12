#include<stdio.h>
#include<string.h>



int main(){

   printf("nhap text cua ban vao day ");
   char sentence[50];
   fgets(sentence , sizeof(sentence) , stdin );
   int leng = sizeof(sentence) / sizeof(char);
  // printf("\n text cua ban la \n ");
   //fputs(sentence , stdout);
   for ( int i = 0 ; i < strlen(sentence) ; i ++){
   	printf("%c " ,sentence[i]);
   }
   
}