int main()
{
 int k = 2;
 double r = 6;
 double S = 0;
 double V = 0;
 double pi = 3.14;
 int y = -1;
 double n = 0;
 switch (k) {
 case 1:
   n = S = pi * r * r;
   break;
 case 2:
   n = V = (4 * pi * r * r * r)/3;
   break;
 default:
  n = y = -1;
  break;
  
  return 0;
}

}

