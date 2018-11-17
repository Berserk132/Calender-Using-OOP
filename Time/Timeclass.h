

#ifndef TIME_TIMECLASS_H
#define TIME_TIMECLASS_H

#include <iostream>
using  namespace std;

class Timeclass {
protected:
    int hour;
    int minute;
    string dayNight;
public:
    Timeclass();
    Timeclass(int h, int m,string d);
    int getH();
    int getM();
    string getD();
    void setH(int h);
    void setM(int m);
    void setD(string d);
    bool operator== (Timeclass &t2);
    bool operator!= ( Timeclass &t2);
    bool operator> (Timeclass &t2);
    bool operator< (Timeclass &t2);
    ~Timeclass();
};


#endif //TIME_TIMECLASS_H
