
#include "Timeclass.h"
#include "Appointment.h"
#include <bits/stdc++.h>

using namespace std;


// Default Constructor to put two times in start and end

Appointment ::Appointment(Timeclass t1, Timeclass t2)
{
    start = t1;
    end = t2;
}

// Put the value of start
void Appointment::setStart(Timeclass start)
{
    this->start=start;
}

// Put the value of end
void Appointment::setEnd(Timeclass end)
{
    this->end=end;
}

// get the value of start
Timeclass Appointment ::getT()
{
    return  start;
}

// get the value of end

Timeclass Appointment ::getT2()
{
    return  end;
}

// Operator to return true if the two times equal or the first smaller than the second

bool Appointment ::operator<= (Appointment &p2)
{
    if((this->start==p2.start)&& (this->end==p2.end)) return true;

    else if((this->start < p2.start) && (this->end < p2.end)) return true;

    else return false;

}

// Operator to return true if the two times equal or the first bigger than the second

bool Appointment ::operator>= (Appointment &p2)
{
    if((this->start==p2.start)&& (this->end==p2.end)) return true;

    else if((this->start > p2.start) && (this->end > p2.end)) return true;

    else return false;

}


// Operator to return true if the first bigger than the second
bool Appointment ::operator> (Appointment &p2)
{

    if((this->start > p2.start) && (this->end > p2.end)) return true;

    else return false;

}


// Operator to return true if the first smaller than the second
bool Appointment ::operator< (Appointment &p2)
{

    if((this->start < p2.start) && (this->end < p2.end)) return true;

    else return false;

}

// Operator to return true if the two times equal
bool Appointment ::operator== (Appointment &p2)
{
    if((this->start==p2.start)&& (this->end==p2.end)) return true;

    else
        return false;
}

// Operator to return true if the two times not equal
bool Appointment ::operator!= (Appointment &p2)
{
    if((this->start==p2.start) && (this->end==p2.end)) return false;

    else return true;
}
