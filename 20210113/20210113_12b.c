/* 12. Напишете програма PrintPatterns, която отпечата следните текстови графики
на екрана. Графиките една под друга:
            #
          # # #
        # # # # #
      # # # # # # #
    # # # # # # # # #
  # # # # # # # # # # #
*/
#include <stdio.h>

void print_triangle()
{
  int i, j;
  int spaces = 0;
  int hashtags = 1;

  for (i = 0; i < 6; i++)
  {

    for (j = spaces; j <= 11; j++)
    {
      printf(" ");
    }
    for (j = hashtags; j >= 1; j--)
    {
      printf("# ");
    }

    hashtags += 2;
    spaces += 2;
    printf("\n");
  }
};

int main()
{
  print_triangle();


  return 0;
}