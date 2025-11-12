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
   	printf("%c" ,sentence[i]);
   }
   
   char kytucantim;
   printf("ky tu can tim cua ban??");
   scanf("%c",&kytucantim );
   int solanxuathien = 0;
   for ( int i = 0 ; i < strlen(sentence) ; i ++){
   	     if(sentence[i] == kytucantim ){
   	     	solanxuathien++;
			}
   }
   
   printf("ky tu %c xuat hien trong cau noi nay %d lan", kytucantim , solanxuathien );
} 