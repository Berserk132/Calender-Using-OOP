#include "Timeclass.h"
#include <iostream>
using namespace std;

// Default Constructor put in Default Values

Timeclass :: Timeclass()
{
    this->hour = 0;
    this->minute = 0;
    this->dayNight = "AM";
}

// Constructor put in values of user input
Timeclass :: Timeclass(int h, int m,string d)
{
    this->hour = h;
    this->minute = m;
    this->dayNight = d;
}

// Set the Hour

void Timeclass ::setH(int h)
{
    this->hour = h;
}

// Set the Minutes
void Timeclass ::setM(int m)
{
    this->minute = m;
}


// Set PM or AM
void Timeclass ::setD(string d)
{
    this->dayNight = d;
}

// Return the Hour
int Timeclass ::getH()
{
    return  hour;
}

// Return the Minutes
int Timeclass ::getM()
{
    return  minute;
}

// Return PM or AM
string Timeclass ::getD()
{
    return dayNight;
}

// Operator to compare between to Time which is Smaller

bool Timeclass ::operator< (Timeclass &t2)
{
    Timeclass t1;
    /*int h;
    int m;
    string d;
    cin >> h >> m >> d;*/
    t1.setH(hour);
    t1.setM(minute);
    t1.setD(dayNight);

    if (t1.getD() == "AM" && t2.dayNight == "PM")
    {
        return true;
    }

    else if((t1.getH() == t2.hour) && (t1.getM() < t2.minute) && (t1.getD() == "PM") && (t2.dayNight == "PM"))
    {
        return true;
    }
    else if((t1.getH() == t2.hour) && (t1.getM() < t2.minute) && (t1.getD() == "AM") && (t2.dayNight == "AM"))
    {
        return true;
    }
    else if((t1.getH() < t2.hour) && (t1.getD() == "AM") && (t2.dayNight == "AM"))
    {
        return true;
    }
    else if((t1.getH() < t2.hour) && (t1.getD() == "PM") && (t2.dayNight == "PM"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Operator to compare between to Time which is Bigger

bool Timeclass ::operator> (Timeclass &t2)
{
    Timeclass t1;
    /*int h;
    int m;
    string d;
    cin >> h >> m >> d;*/
    t1.setH(hour);
    t1.setM(minute);
    t1.setD(dayNight);

    if (t1.getD() == "AM" && t2.dayNight == "PM")
    {
        return false;
    }

    else if((t1.getH() == t2.hour) && (t1.getM() < t2.minute) && (t1.getD() == "PM") && (t2.dayNight == "PM"))
    {
        return false;
    }
    else if((t1.getH() == t2.hour) && (t1.getM() < t2.minute) && (t1.getD() == "AM") && (t2.dayNight == "AM"))
    {
        return false;
    }
    else if((t1.getH() < t2.hour) && (t1.getD() == "AM") && (t2.dayNight == "AM"))
    {
        return false;
    }
    else if((t1.getH() < t2.hour) && (t1.getD() == "PM") && (t2.dayNight == "PM"))
    {
        return false;
    }
    else
    {
        return true;
    }
}


// Operator to compare between to Time if they Equal

bool Timeclass :: operator== (Timeclass &t2){

    if ((this->hour == t2.getH()) && (this->minute == t2.getM()) && (this->dayNight == t2.getD()))
    {
        return true;
    }
    else
    {
        return false;
    }

}

// Operator to compare between to Time if they not equal

bool Timeclass :: operator!= (Timeclass &t2){


    if ((this->hour != t2.getH()) || (this->minute != t2.getM()) || (this->dayNight != t2.getD()))
    {
        return true;
    }
    else
    {
        return false;
    }

}

// Destructor

Timeclass ::~Timeclass()
{
    // dto.
}

