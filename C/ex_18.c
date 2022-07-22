#include <time.h>
#include <stdlib.h>
int main ()
{

srand(time(NULL));  
int r = rand();  

  if (r%3 == 0) 
   {
	printf ("O numero e divisivel por 3");
   }  
   
   else 
   {
   	printf ("O numero nao e divivel por 3 ");
   }
    
}
