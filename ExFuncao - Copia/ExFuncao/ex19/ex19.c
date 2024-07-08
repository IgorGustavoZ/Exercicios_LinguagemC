float ex19(float a, float b, float c, char d)
{
    float media;
    if (d == 'A' )media=(a+b+c)/3;
    else if (d == 'P' )media=(5*a+3*b+2*c)/10;
    else if (d == 'H')media=3/(1/a+1/b+1/c);
    return media;
}
