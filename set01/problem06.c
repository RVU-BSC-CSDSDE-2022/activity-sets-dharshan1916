#include<stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c , largest);

int input();
{
  int n;
  print("Enter the numbers\n");
  scanf("%d",n);
  return n;
}
int compare(int a, int b, int c)
{
  int largest;
  if((a>b)&& (a>c))
    largest=a;
  if((b>a) && (b>c))
    largest=b;
  if((c>a) && (c>b))
    largest=c;
  return largest;
}

void output(int a, int b, int c, int largest);
{
  print("the largest of %d %d and 5d is %d",a,b,c ,largest);
}

int main()
{
  int a, b, c , largest;
  a=input();
  b=input();
  c=input();
  compare(a,b,c, &largest);
  output(a,b,c , largest);
  return 0;
}