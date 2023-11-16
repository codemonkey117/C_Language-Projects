#include <stdio.h>
void output(char *c, int size);
int input(char *c, int size);
void encrypt(char *c, int size);
void decrypt(char *c, int size);

void output(char *c, int size) // Display “size” characters
{
 int index=0;
 while(index < size)
 {
 printf("%c", c[index]);
 index++;
 }
 printf("\n");
}

 int input(char *c, int size)
{
  int index = 0;
  while ((size = getchar()) != '\n' || index < size)
    {
     c[size] = getchar();
      index++;
      
    }
  return *c;
  
}


 void encrypt(char *c, int size)
{
  int index = 0;
  char arr[] = "a";
  *c = arr[size];

  while (index++ < size)
    {
      *c = arr[index] + 3; 
      }
  
}

 void decrypt(char*c, int size)
{
  int index = 0;
  char arr[] = "A";
  *c = arr[size];

  while (index++ < size)
    {
      *c = arr[index] - 3; 
      }
}

int main(void)
{
 char arr[20];
 int size;
 printf("Enter unencrypted string: ");
 size = input(arr, 20);
 encrypt(arr, size);
 printf("Encrypted: ");
 output(arr, size);
 printf("Enter encrypted string: ");
 size = input(arr, 20);
 decrypt(arr, size);
 printf("Decrypted: ");
 output(arr, size);
 return 0;
}
