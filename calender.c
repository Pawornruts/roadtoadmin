//65040233130 pawornrut santudsomeruatkarn 
#include <stdio.h>

int main() {
  int firstday, numday;

  printf("Enter first day of the month (1-Su , 2-Mo , 3-Tu , 4-We , 5-Th , 6Fr , 7-Sa): ");
  scanf("%d", &firstday);
  printf("Enter number of days in the month: ");
  scanf("%d", &numday);

  char *day[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
  printf("Su Mo Tu We Th Fr Sa\n");

  int i, j;
  for (i = 0; i < firstday; i++) {
    printf("   ");
  }
  for (j = 1; j <= numday; j++) {
    printf("%2d ", j);
    if ((firstday + j - 1) % 7 == 6) {
      printf("\n");
    }
  }
  if ((firstday + numday - 1) % 7 != 6) {
    printf("\n");
  }

  printf ("thank you") ;

  return 0;
}

