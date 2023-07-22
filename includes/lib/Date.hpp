#ifndef DATE_H
#define DATE_H


#include <string>

using namespace std;


class Date {

public:
    
    Date();
    Date(int _year, int _month, int _day);
    Date(int _year, int _month, int _day,
         int _hour, int _minute, int _second);
    
    ~Date();


    inline int GetYear()  const { return year; }
    inline int GetMonth() const { return month; }
    inline int GetDay()   const { return day; }

    inline int GetHour()   const { return hour; }
    inline int GetMinute() const { return minute; }
    inline int GetSecond() const { return second; }


    string DisplayDate() const;
    string DisplayTime() const;
    string DisplayFullDate() const;


    int DaysElapsed(Date* _date);
    int MonthsElapsed(Date* _date);
    int YearsElapsed(Date* _date);


private:

    int year  = -1;
    int month = -1;
    int day   = -1;

    int hour   = -1;
    int minute = -1;
    int second = -1;

};


#endif