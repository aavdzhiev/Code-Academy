/* Упражнение 13. Логически оператори */
#include <stdio.h>
int main()
{
	int nA = 40; /* използвайте scanf */
	int nB = 20;
	int nX = 20;
	int nY = 30;

	printf("Input nA: \n");
	scanf("%d", &nA);
	printf("Input nB: \n");
	scanf("%d", &nB);
	printf("Input nX: \n");
	scanf("%d", &nX);
	printf("Input nY: \n");
	scanf("%d", &nY);

	if (nA > nB && nA != 0)
	{
		printf("&& Operator: Both conditions are true\n");
	}
	if (nA == nB || nX != nY)
	{
		printf("|| Operator: Returns 1 if one of the conditions is true\n");
	}
	if (!0)
	{
		printf("! Operator: Returns the oposite of the operand\n");
	}
	if (nX > nY || nY != 20)
	{
		printf("|| Operator: Only one condition is true\n");
	}
	if (!(nA > nB && nB != 0))
	{
		printf(" ! Operator: Both conditions are true\n");
	}
	else
	{
		printf("Both conditions are true.\n");
	}
}