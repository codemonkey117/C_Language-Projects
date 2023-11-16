#include <stdio.h>

int main(void) {
  char user[40];
  char user2[40];
  char user3[40];
  double user_test1;
  double user_test2;
  double user_test3;
  double user2_test1;
  double user2_test2;
  double user2_test3;
  double user3_test1;
  double user3_test2;
  double user3_test3;

  printf("Please enter a user name and three exam scores separated by commas for user 1: \n");
  scanf("%s %lf %lf %lf",user, &user_test1, &user_test2, &user_test3);
  printf("Please enter a user name and three exam scores separated by commas for user 2: \n");
  scanf(" %s %lf %lf %lf", user2, &user2_test1, &user2_test2, &user2_test3);
  printf("Please enter a user name and three exam scores separated by commas for user 3: \n");
  scanf(" %s %lf %lf %lf", user3, &user3_test1, &user3_test2, &user3_test3);
  printf("\n");
  printf("%-10s %8s %8s %8s %8s", "Name", "Exam 1", "Exam 2", "Exam 3", "Score Average\n");
  
  float user_avg = ((user_test1 + user_test2 + user_test3)/3);
  float user2_avg = ((user2_test1 + user2_test2 + user2_test3)/3);
  float user3_avg = ((user3_test1 + user3_test2 + user3_test3)/3);

  printf("%-10s %8.2lf%% %8.2lf%% %8.2lf%% %7.1f\n", user, user_test1, user_test2, user_test3, user_avg);
  
  printf("%-10s %8.2lf%% %8.2lf%% %8.2lf%% %7.1f\n", user2, user2_test1, user2_test2, user2_test3, user2_avg);

  printf("%-10s %8.2lf%% %8.2lf%% %8.2lf%% %7.1f\n", user3, user3_test1, user3_test2, user3_test3, user3_avg);
  
  
  return 0;
}