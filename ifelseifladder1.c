#include <stdio.h> 
void main (void)
{
int N; /* Menu Choice */ 
printf ("MENU OF TERMS\n\n");
printf ("1. Single\n");
printf ("2. Double\n");
printf ("3. Triple\n");
printf ("4. Quadruple\n\n");
printf ("Enter the numbe (1-4): "); 
scanf ("%d", &N);
if (N == 1) printf ("one");
else if (N == 2) printf ("two");
else if (N == 3) printf ("three");
else if (N == 4) printf ("four");
else printf ("ERROR");
}