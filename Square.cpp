#include "Square.h"

int Square::S1 = 0;
int Square::S2 = 0;
int Square::S3 = 0;
int Square::C = 0;
int Square::Sqr = 0;
double Square::Sqro = 0;
int Square::Sqq = 0;
int Square::Sqt = 0;

void Square::set_S1(int s1)
{
  S1 = s1;
  
}
int Square::get_S1()
{
    return S1;
}

void Square::set_S2(int s2)
{
   S2 = s2;
  
}
int Square::get_S2()
{   
        return S2;   
}

void Square::set_S3(int s3)
{
   S3 = s3;
 
}
int Square::get_S3()
{    
        return S3;    
}

void Square::set_Sqt()
{    
    int p = (S1 + S2 + S3) / 2;
    Sqt = sqrt(p * (p - S1) * (p - S2) * (p - S3));
    
}
int Square::get_Sqt()
{
    return Sqt;
}

void Square::set_Sqr()
{      
    Sqr = S1 * S2;

}
int Square::get_Sqr()
{
    return Sqr;
}

void Square::set_Sqq()
{
    Sqq = S1 * S1;

}
int Square::get_Sqq()
{
    return Sqq;
}

void Square::set_Sqro()
{
    Sqro = S1 * S1 * sin(S2);

}
double Square::get_Sqro()
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
