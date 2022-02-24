#include<stdio.h>

void input(float*x1,float*y1,float*x2,float*y2)
{
  printf("Enter the co-ordinates of the points: \n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void find_distance(float x1,float y1,float x2, float y2, float*d)
{
  *d=(x2-x1)*(x2-x1)/(y2-y1)*(y2-y1);
}

void output(float x1,float y1,float x2,float y2,float d)
{
  printf("The distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,d);
}

int main()
{
  float x,y,z,a,d;
  input(&x,&y,&z,&a);
  find_distance(x,y,z,a,&d);
  output(x,y,z,a,d);
  return 0;
}
