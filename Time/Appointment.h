
#ifndef TIME_APPOINTMENT_H
#define TIME_APPOINTMENT_H

#include "Timeclass.h"
#include <iostream>
#include <string>

using namespace std;

class Appointment : public Timeclass {

protected:
    Timeclass start;
    Timeclass end;

public:
    friend istream &operator>> (istream &in , Appointment& p1);
    friend ostream &operator<< (ostream &out , Appointment& p1);
    bool operator<= (Appointment &p2);
    bool operator>= (Appointment &p2);
    bool operator> (Appointment &p2);
    bool operator< (Appointment &p2);
    bool operator== (Appointment &p2);
    bool operator!= (Appointment &p2);
    void setStart(Timeclass start);
    void setEnd(Timeclass end);
    Appointment(Timeclass t1, Timeclass t2);
    Appointment();
    Timeclass getT();
    Timeclass getT2();

};


#endif //TIME_APPOINTMENT_H

