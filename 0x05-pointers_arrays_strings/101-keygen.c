#include <stdio.h>
#include <stdlib.h>
#include <time.h>
create_pass( char* randomString, size_t length )
{
    size_t i = 0;

    srand(rand());
    strcpy(randomString,"");

    for( i = 0; i < (length/2); i++ )
    {
        *(randomString + i) = ( rand() % 25 + 65 );
    }
    for( ; i < length; i++ )
    {
        *(randomString + i) = ( rand() % 9 + 48 );
    }
} 

