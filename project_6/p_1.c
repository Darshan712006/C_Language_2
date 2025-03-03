#include <stdio.h>
#include <string.h>

void main()
{
   int num;

   printf("enter number of charcter for your string : ");
   scanf("%d", &num);

   char str[num + 1];
   
   for (int i = 0; i < num; i++)
   {
      printf("enter charcter one by one : ");
      scanf(" %c", &str[i]);
   }

   str[num] = '\0';

   char arr[num + 1];
   int arrIndex = 0;
   for (int i=num-1; i>=0; i--)
   {
      arr[arrIndex] = str[i];
      arrIndex++;
   }

   arr[num]='\0';

   if(strcmp(arr,str) == 0){
      printf("this is palindrom");
   }else{
      printf("this is not palindrom");}
}