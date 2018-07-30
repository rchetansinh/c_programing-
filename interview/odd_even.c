#include<stdio.h>
int main()
{
	int num;
	char *ptr;
	printf("Enter a number:");
	scanf("%d",&num);
	( (num %2) ? printf("odd") : printf("even") ) ;	

}
#include <stdio.h>
 
int main()
{
   int x=1, y ;
   y = ( x ==1 ? 2 : 0 ) ;
   printf("x value is %d\n", x);
   printf("y value is %d", y);
}



//}	


