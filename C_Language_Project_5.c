#include <stdio.h>
double getProgramGrade();
double getQuizGrade();
double getExamGrade();


int main(void) {
  float Total_avg;
  char Letter_grade;
  double pGrade, qGrade, eGrade;
  
  pGrade = getProgramGrade();
  qGrade = getQuizGrade();
  eGrade = getExamGrade();
  
  Total_avg = (pGrade + qGrade + eGrade) / 3;

  if (Total_avg <= 100)
    Letter_grade = ('A');
  else if (Total_avg <= 89)
    Letter_grade = ('B');
  else if (Total_avg <= 79)
    Letter_grade = ('C');
  else if (Total_avg <= 69)
    Letter_grade = ('D');
  else if (Total_avg <= 59) 
    Letter_grade = ('F');
    
  printf("Your grades: \n");
  printf("Programs  (60%%): %5.2lf%%\n", pGrade);
  printf("Quizzes  (10%%):  %5.2lf%%\n", qGrade);
  printf("Exams  (30%%):    %5.2lf%%\n", eGrade);
  printf("------------------------------\n");
  printf("Overall grade:   %5.2f%% (%c)\n", Total_avg, Letter_grade);
  
  return 0;
}

double getProgramGrade()
{ int p_assn_num;
    printf("How many programming assignments have there been?: ");
    scanf("%d", &p_assn_num);
  double Prgrm_assn[p_assn_num];
  int n;
  double sum = 0;
  double Prgrm_avg;

  for (n=0; n < p_assn_num; n++)
    {
      printf("Please enter in grades: ");
      scanf("%lf", &Prgrm_assn[n]);
      sum += Prgrm_assn[n];
      
      
      }
      Prgrm_avg = sum / p_assn_num;

    return Prgrm_avg;
}


double getQuizGrade() 
{
  int q_assn_num; 
    printf("How many quizes have there been?: ");
    scanf("%d", &q_assn_num);
  double Quiz_assn[q_assn_num];
  int n;
  double sum = 0;
  double Quiz_avg;

  for (n=0; n < q_assn_num; n++)
    {
      printf("Please enter in grades: ");
      scanf("%lf", &Quiz_assn[n]);
      sum += Quiz_assn[n];
      }
      Quiz_avg = sum / q_assn_num;

    return Quiz_avg;
}


double getExamGrade()
{
  int e_assn_num; 
    printf("How many Exams have there been?: ");
    scanf("%d", &e_assn_num);
  double Exam_assn[e_assn_num];
  int n;
  double sum = 0;
  double Exam_avg;

  for (n=0; n < e_assn_num; n++)
    {
      printf("Please enter in grades: ");
      scanf("%lf", &Exam_assn[n]);
      sum += Exam_assn[n];
      
      }
      Exam_avg = sum / e_assn_num;

    return Exam_avg;
}