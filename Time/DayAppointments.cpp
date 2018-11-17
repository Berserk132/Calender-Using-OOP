#include "DayAppointments.h"
#include "Appointment.h"
#include "Timeclass.h"

#include <bits/stdc++.h>

using namespace std;

DayAppointments::DayAppointments()
{
   //numOfAppointments = 0;
   //appointments = NULL;
}

int DayAppointments :: getNumOfAppointments() {
    return numOfAppointments;
}

Appointment* DayAppointments :: getappointments() {
    return appointments;
}

DayAppointments::~DayAppointments()
{
   delete [] appointments;
}
