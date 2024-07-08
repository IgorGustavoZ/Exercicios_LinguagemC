int ex12(int n)
{
    int primo;
    for(primo=2;primo<=n;primo++)
    {
        if (n%primo==0)
        {
        n++;
        primo=2;
        }
        else if(n%primo!=0)
        {
            primo++;
        }

}
    return n;
    /*

    int primo=n;
    do
    {
        primo++;
    }while (primo%2==0 || primo%3==0 || primo%5==0 || primo%7==0 || primo%9==0);
    return primo;*/
}
