// Problem6-1_SumOfTwoIntegers.c : Defines the entry point for the console application.
//

#include "stdafx.h"


int main( void )
{
	int integer1;
	printf( "Enter Integer 1: " );
	scanf_s( "%d", &integer1 );
	int integer2;
	printf( "Enter Integer 2: " );
	scanf_s( "%d", &integer2 );
	int integer3 = add( integer1, integer2 );
	printf( "Sum: %d", integer3 );
	return 0;
}

