#include<stdio.h>
#include<string.h>


int count_words(char s[]) {
    int dem = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        // kkhoan trang THI DEM
        if (s[i] != ' ') {
            ++dem;
            //b o qua
            while (i < n && s[i] != ' ') {
                ++i;
            }
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
   int counted = count_words(sentence);
   printf("co %d tu trong chuoi ky tu " , counted );
}