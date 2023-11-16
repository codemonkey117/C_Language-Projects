#include <stdio.h>

int main(void) 
{
  float value;  /*   Average score value   */
  float score1, score2, score3;   /*  User input vaues  */

  printf(" Please enter three exam scores (ex: 79, 88, 96.5 [enter]):   ");
    scanf("%f, %f, %f", &score1, &score2, &score3);
    
  
  printf("\n");
  printf("First Exam:   %.1f%%\n", score1);
  printf("Second Exam:   %.1f%%\n", score2);
  printf("Third Exam:   %.1f%%\n", score3);
  printf("\n");

  value = (score1 + score2 + score3) / 3.0;

  printf("Average Exam Score:   %.1f%%\n", value);

  
  
  
  return 0;
}