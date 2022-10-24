int _atoi(char *s)
{
    char input[100];
    printf("Type a String which will be converted to an Integer: ");
    scanf("%s", input);

    int number = 0;
    int neg = input[0] == '-';
    int i = neg ? 1 : 0;
    while ( input[i] >= '0' && input[i] <= '9' )
    {
      number *= 10;             // multiply number by 10
      number += input[i] - '0'; // convet ASCII '0'..'9' to digit 0..9 and add it to number           
      i ++;                     // step one digit forward
    }
    if ( neg )
       number *= -1;

    printf( "string %s -> number %d", input, number );
}
