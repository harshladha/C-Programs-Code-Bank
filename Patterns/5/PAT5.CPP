/* 1
   12
   123
   1234
   12345
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
  {
   cout<<j;
  }
  cout<<"\n";
 }
 getch();
}