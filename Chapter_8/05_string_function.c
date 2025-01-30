#include <stdio.h>
#include <string.h>  // Whenever I have to use string function , I will always use this..

int main(){
    char st[] = "Vicky";
    printf("%d\n",strlen(st));  //Excluding the null character.

    char target[30];
    strcpy(target,st);
    printf("The st is %s and also target is %s\n",st,target );

    char a1[50] = "Rocky";
    char a2[60] = " Bhai";
    strcat(a1,a2);
    printf("%s\n",a1);

    int a = strcmp("far","joke");
    printf("The value is %d\n",a); //Here value is negative because of ASCII code , like first word comes first compare to second word.

    int b = strcmp("joke", "far"); 
    printf("The value is %d\n",b);//Here value is positive because of ASCII code , like second word comes first compare to first word.
    return 0;
}
