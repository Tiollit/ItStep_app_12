#include <iostream>
using namespace std;

class Square {
public:
    static int S1, S2, S3, Sqt, Sqr, Sqq, Sqro, C;

    static int set_S1(int s1);
    static int get_S1();
    static int set_S2(int s2);
    static int get_S2();
    static int set_S3(int s3);
    static int get_S3(); 
    static void set_Sqt(int S1, int S2, int S3);
    static int get_Sqt();
    static void set_Sqr(int S1, int S2);
    static int get_Sqr();
    static void set_Sqq(int S1);
    static int get_Sqq();
    static void set_Sqro(int S1, int S2);
    static int get_Sqro();
    static int set_C();
    static int get_C();    
};
