#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{

  char name[50];
  int phone;


} phone;


int search (char *, phone[], int);


int
main (void)
{
  int n;
  
  scanf ("%i", &n);
  phone direct[n];
  for (int i = 0; i < n; i++)
    {
      
      scanf ("%s %i", direct[i].name, &(direct[i].phone));
    }


  char **b;
  b = malloc (sizeof (char *) * n);
  int i = 0;


  for (int i = 0; i < n; i++)
    {

      b[i] = malloc (sizeof (char) * 50);
      scanf ("%s", b[i]);


    }

  for (int i = 0; i < n; i++)
    {

      int z = search (b[i], direct, n);


      if (z == -1)
    {
      printf ("Not found\n");
    }
      else
    {
      printf ("%s=%i\n", direct[z].name, direct[z].phone);
    }



    }
}


int
search (char *s, phone a[], int n)
{
  int x = 0;
  for (int i = 0; i < n; i++)
    {
      if (strcmp (s, a[i].name) == 0)
    {
      x = i;
      break;

    }
      else
    {
      x = -1;
    }
    }
  return x;
}
