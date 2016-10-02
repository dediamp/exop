#include	<iostream.h>

lespremier(int nbre)
{
	for(i = 4, i <= nbre, i++ )
	{ 
		int increment=0;

		for (j = 1; j <=i; j++)
		{
			if(i%j==0) increment++;
		}

		if(increment!=0)	cout<<i<<" ";

		increment=0;
	}
};