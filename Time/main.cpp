#include <bits/stdc++.h>
#include "Timeclass.cpp"
#include "Appointment.cpp"
#include "DayAppointments.cpp"
#include "Calendar.cpp"

using namespace std;

// Print out The Time.

ostream &operator<< (ostream &out , Timeclass t2)
{
    out << t2.getH() << ":" << t2.getM() << " " << t2.getD() << "\n";
    return out;
}

// Make The User Input The Time

istream& operator>> (istream& in, Timeclass& t2)
{
    int h;
    int m;
    string d;
    cout << endl;
    cout << "Enter Hours : " ;
    in >> h;
    cout << endl;
    cout << "Enter Minutes : ";
    in >> m;
    cout << endl;
    cout << "Enter DayNight : ";
    in >> d;
    cout << endl;

    t2.setH(h);
    t2.setM(m);
    t2.setD(d);

    return in;
}


// Print out the Beginning and the End of Appointment

ostream &operator<< (ostream &out , Appointment& p1)
{
    out << "Appointment Start in->  "  << p1.start << endl << "Appointment end In-> " << p1.end << endl;
    return out;
}

// Make the user input the Beginning and the End of Appointment

istream &operator>> (istream &in , Appointment& p1)
{
    cout << "Appointment Start in->  ";
    in >> p1.start;
    cout << endl;
    cout <<  "Appointment end In-> ";
    in >> p1.end ;
    cout << endl;
    return in;
}


// Make the user input number of Appointments

istream& operator>>(istream& in,  DayAppointments& ap)
    {
        cout << "Enter The Day of Appointment -> " ;
        in >> ap.weekDay ;

        cout << "Enter The Number of Appointments -> ";
        in >> ap.numOfAppointments ;

        ap.appointments = new Appointment [ap.numOfAppointments];
        for (int i=0;i<ap.numOfAppointments;i++)
        {
            in >> ap.appointments[i];
            for (int j=0;j<i;j++)
            {
                if (ap.appointments[i] == ap.appointments[j])
                {
                    cout << "Error,The appointment has been taken!!" << endl;
                    in >> ap.appointments[i];
                }
            }

        }

        return in;
    }

// Print out number of Appointments

ostream& operator<<(ostream& out,  DayAppointments& ap)
{
    out << "The Day is -> " << ap.weekDay << endl;
    out << "Number of Appointments " << ap.numOfAppointments << endl;
    for (int i=0; i< ap.numOfAppointments;i++)
    {
        out << ap.appointments[i];
    }
    return out;

}

// Take Number of DayAppointment from the user

istream& operator>>(istream &in, Calendar& cal)
{
    cout << "Enter The Number of Days -> " ;
    in >> cal.numOfDays;

    cal.days = new DayAppointments[cal.numOfDays];
    for (int i=0;i<cal.numOfDays;i++)
    {
        in >> cal.days[i];
        for (int j=0;j<i;j++)
        {
            if (cal.days[i] == cal.days[j])
            {
                cout << "Error,The Day has been taken!!" << endl;
                in >> cal.days[i];
            }
        }
    }
    return in;
}

// Print out The DayAppointment of the Week

ostream& operator<<(ostream &out, Calendar& cal)
{

    out << "Number of Days is -> " << cal.numOfDays << endl;
    for (int i=0; cal.numOfDays;i++)
    {
        out << "Day Number " << i+1 << "-> " << endl;
        out << cal.days[i];
    }
    return out;
}



int main()
{   Timeclass t1(6,5,"AM");
    Timeclass t2(6,5,"PM");
    Timeclass t3(7,5,"AM");
    Timeclass t4(7,5,"PM");
    Appointment p1(t1, t2);
   // cin >> p1;
    cout << p1;

    /*DayAppointments ap;


    cin >> ap;
    cout << ap;
    DayAppointments ap1;

    ap1.setWeekday("Mon");
    ap1 = ap;

    cout << ap1;
    cout << (ap1 != ap);
    cout << ap[1];*/

    Calendar cal;

    cin >> cal;
    cout << cal;



    return 0;
}
