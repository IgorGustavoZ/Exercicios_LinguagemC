void ex13( int *num1 , int *num2 )
{
        int ref;
        ref = *num1;
        *num1 = *num2;
        *num2 = ref;
}
