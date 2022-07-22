int main ()
{
	int km, ml;
	
	printf ("Insira o numero de km  : \n");
	scanf ("%i", &km);

    ml = km * 0.621371192 ;
    
    if (km>5000)
    {
    	printf(" %i miles Muito longe ", ml );
	}
	
	else 
	{
		printf("%i miles", ml);
	}
	

}
