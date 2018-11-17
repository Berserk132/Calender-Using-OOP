#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar
{
protected:
    DayAppointments * days;
    int numOfDays;

public:

    Calendar();
    int getNumofdays();
    friend istream& operator>>(istream &in, Calendar& cal);
    friend ostream& operator<<(ostream &out, Calendar& cal);

    ~Calendar();

};

#endif // CALENDAR_H
