#include <stdio.h>





int
main(void){

int a=10;
int *p;
/*int *p=(int *)0xDEADBEEF;//PASSING AN ADDRESS MANUALLY TO THE POINTER*/
printf("adress1 of p is : %p\n",p); 
/*printf("value of a is  : %i\n",*p);// will fail since we try to acess that mem which we are not supposed to access*/

p=&a;

printf("adress2 of p is : %p\n",p);
printf("value of a is  : %i\n",*p);

char *s="hello world";
char d;
s=&d;
/*p=&a;*/
printf("adress of a is : %p\n",&a);
printf("value of a is  : %i\n",a);
printf("adress of a is : %p\n",s);
printf("value of a is  : %c\n",*s);


	for (int i=0;*(s+i)!= '\0';i++){
	printf("address of %c is : %p\n",*(s+i),s+i);
	}
	printf("\n");
printf("word is : %s\n",s);
int x[100];
x[0]=112;

printf("content of x is : %i\n",*x);// content of address pointed by the first address in array
printf("address of x is : %p\n",x+1);//adress is incremented by 4 bytes ,since int requires 4 bytes

printf("address of x is : %p\n",x+2);

}
