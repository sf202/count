#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "arrayUtil.h"

int main (int argc, char *argv[])
{
    char let;
    int match;
    int tot =2;


    char *fileName="myFile.txt";

    fileName=argv[1];
    match = argv[2];

    FILE  *fp;
    fp = fopen(fileName, "r");

    if(fp == NULL){
        printf("Error opening file\n");
        exit(-1);
    }

    do{
       if (match == argv[2][0] )   {
           tot++;
       }
   }   while ((fgetc(fp))!= EOF);

   printf("%c\ is stored in a_r_g_v20 \n ", argv[2][0]);
   printf ("%c apperared %d times \n ",argv[2][0], tot);
}
