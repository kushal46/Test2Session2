//output is not coming 

#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the co-ordinates of the points");
  scanf("%f%f",x1,y1);

   printf("enter the co-ordinates of the points");
  scanf("%f%f",x2,y2);

   printf("enter the co-ordinates of the points");
  scanf("%f%f",x3,y3);
  
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3,float*area)
{


  *area =0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

  if(*area = 0)
    return 1;
  else
    return 2;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{  if(istriangle = 1)
  printf("the points (%f,%f) (%f,%f) (%f,%f) forms a triangle",x1,y1,x2,y2,x3,y3);
  else
  printf("the points (%f,%f) (%f,%f) (%f,%f) doesn't form a triangle",x1,y1,x2,y2,x3,y3);
}

int main()
{
  float a,b,c,d,e,f,area;
  input_triangle(&a,&b,&c,&d,&e,&f);
  int re = is_triangle(a,b,c,d,e,f,&area);
  output(a,b,c,d,e,f,re);
}