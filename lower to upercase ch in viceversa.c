#include<stdio.h>
#include<string.h>
int main (){


//alphabets is ab in shortform

char ab[100];


//input


printf("enter any abc : ");
scanf("%s",ab);

//output in uppercase


printf("ab in uppercase :  %d   \n");
puts(strupr(ab));


//output in lowercase

printf("ab in lowercase :  %d    \n");
puts(strlwr(ab));


    return 0;

}