float ex10(float a, float b)
{
  if (a<20)return b*0.10;
  else if(a>=20 && a<50)return b*0.15;
  else if(a>=50 && a<75)return b*0.20;
  else if(a>=75)return b*0.25;
}
