# include <stdio.h>
#include <stdlib.h>
int main () {
char ch;
FILE *fp;
fp = fopen ("Practice_problem.txt", "r");
if (fp == NULL ) {
printf (" Cannot open file !\n");
exit (1);
}

while ((ch = getc (fp)) != EOF) {
putchar (ch);
}
fclose (fp);
return 0;
}