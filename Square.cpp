#include "Square.h"

int Square::set_S1(int s1)
{
  S1 = s1;
  return S1;
}
int Square::get_S1()
{
    return S1;
}

int Square::set_S2(int s2)
{
   S2 = s2;
   return S2;
}
int Square::get_S2()
{   
        return S2;   
}

int Square::set_S3(int s3)
{
   S3 = s3;
   return S3;
}
int Square::get_S3()
{    
        return S3;    
}

void Square::set_Sqt(int S1, int S2, int S3)
{    
    int p = (S1 + S2 + S3) / 2;
    Sqt = sqrt(p * (p - S1) * (p - S2) * (p - S3));
    
}
int Square::get_Sqt()
{
    return Sqt;
}

void Square::set_Sqr(int S1, int S2)
{      
    Sqr = S1 * S2;

}
int Square::get_Sqr()
{
    return Sqr;
}

void Square::set_Sqq(int S1)
{
    Sqq = S1 * S1;

}
int Square::get_Sqq()
{
    return Sqq;
}

void Square::set_Sqro(int S1, int S2)
{
    Sqro = S1 * S1 * sin(S2);

}
int Square::get_Sqro()
{
    return Sqro;
}

int Square::set_C()
{
    C += 1;
    return C;
}
int Square::get_C()
{
    return C;
}
