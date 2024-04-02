 #include <stdio.h>
int main()
{
  int i, n,a=0,b=1,c;
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  c= a+b;
  printf("Fibonacci Series:\n%d\n%d\n",a,b);
  for(i = 3; i<= n; ++i) {
    printf("%d\n",c);
    a=b;
    b=c;
    c=a+b;
  }
  return 0;
}
