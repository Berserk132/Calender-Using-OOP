#ifndef DAYAPPOINTMENTS_H
#define DAYAPPOINTMENTS_H
#include "Appointment.h"
#include "Timeclass.h"

#include <iostream>

using namespace std;

class DayAppointments
{
protected:
    Appointment *appointments;
    int numOfAppointments;
    string weekDay;
public:
    DayAppointments();
    /*DayAppointments( DayAppointments& ap)
    {
        numOfAppointments = ap.numOfAppointments;
        appointments = new Appointment [ap.numOfAppointments];
        for (int i=0;i<numOfAppointments;i++)
    {
        appointments[i] = ap.appointments[i];
    }
    }*/
    int getNumOfAppointments();
    void setWeekday(string name)
    {
        weekDay = name;
    }
    string getWeekday()
    {
        return weekDay;
    }
    Appointment* getappointments();
    friend istream& operator>>(istream& in,  DayAppointments& ap);
    friend ostream& operator<<(ostream& out,  DayAppointments& ap);
    // makes a Dayappointment equal another Dayappointment
    DayAppointments operator=(DayAppointments& ap)
    {
        this->numOfAppointments = ap.numOfAppointments;
        this->appointments = new Appointment [ap.numOfAppointments];
            for (int i=0;i<ap.numOfAppointments;i++)
        {
            appointments[i] = ap.appointments[i];
        }

        return *this;
    }
    // return true if the two DayAppointments are equal
    bool operator== (DayAppointments& ap)
    {
        int counter = 0;
        if ((numOfAppointments == ap.numOfAppointments) && (weekDay == ap.weekDay) )
        {
            for (int i=0;i<numOfAppointments; i++)
            {
                if (appointments[i] == ap.appointments[i])
                {
                    counter += 1;
                }
            }
            if (counter == numOfAppointments)
            {
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    // return true if the two DayAppointments are not equal
    bool operator!= (DayAppointments& ap)
    {
        int counter = 0;
        if ((numOfAppointments == ap.numOfAppointments) && (weekDay == ap.weekDay) )
        {
            for (int i=0;i<numOfAppointments; i++)
            {
                if (appointments[i] == ap.appointments[i])
                {
                    counter += 1;
                }
            }
            if (counter == numOfAppointments)
            {
                return false;
            }
            else{
                return true;
            }
        }
        else{
            return true;
        }
    }
    // return the value of the index
    Appointment &operator[] (int index)
    {
        if (index >= numOfAppointments)
        {
            cout << "Array index out of bound, exiting";
            exit(0);
        }
        return appointments[index];
    }
    ~DayAppointments();

};


#endif // DAYAPPOINTMENTS_H
