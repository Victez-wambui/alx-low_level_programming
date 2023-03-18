#include <stdio.h>
/**
  *main -main function
  *
  *Return:0 0n success
  */
int main(void)
{ 
	printf("size of a char:%Lu byte(s)", sizeof(char));
	printf("size of a int:%Lu byte(s)", sizeof(int));
	printf("size of a long int:%Lu byte(s)", sizeof(long int));
	printf("size of a long long int:%Lu byte(s)", sizeof(long long int));
	printf("size of a float:%Lu byte(s)", sizeof(float));
	return (0);
}
