#include<stdio.h>
#include<math.h>
int input_number()
{ int a;
  printf("Enter the number: \n");
  scanf("%d",&a);
  return a;
}

int is_prime(int n)
{   
  for(int i=2;i<sqrt(n);i++)
    {
      if((n%i) == 0)
        return 0;
    }
  return 1;
}

void output(int n,int prime)
{
  if(prime == 1)
    printf("%d is prime",n);
  else
    printf("%d is not prime",n);
}

int main()
{
  int n,prime;
  
    n = input_number();
    prime = is_prime(n);
    output(n,prime);
  return 0;
}