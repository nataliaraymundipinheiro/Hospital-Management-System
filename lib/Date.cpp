
#include "Date.hpp"


#include <iostream>


Date::Date() {
}

Date::Date(int _year,
           int _month,
           int _day) {
    
    try {
        if (0 <= _year) { year = _year; }
        else { throw _year; }
    } catch (int _catch) {
        cout << "Invalid year: " << _catch << endl;
    }

    try {
        if (1 <= _month && _month <= 12) { month = _month; }
        else { throw _month; }
    } catch (int _catch) {
        cout << "Invalid month: " << _catch << endl;
    }

    // @todo Account for months with 28, 29, and 31 days.
    try {
        if (1 <= _day && _day <= 30) { day = _day; }
        else { throw _day; }
    } catch (int _catch) {
        cout << "Invalid day: " << _catch << endl;
    }

}

Date::Date(int _year,
           int _month,
           int _day,
           int _hour,
           int _minute,
           int _second) {
    
    try {
        if (0 <= _year) { year = _year; }
        else { throw _year; }
    } catch (int _catch) {
        cout << "Invalid year: " << _catch << endl;
    }

    try {
        if (1 <= _month && _month <= 12) { month = _month; }
        else { throw _month; }
    } catch (int _catch) {
        cout << "Invalid month: " << _catch << endl;
    }

    // @todo Account for months with 28, 29, and 31 days.
    try {
        if (1 <= _day && _day <= 30) { day = _day; }
        else { throw _day; }
    } catch (int _catch) {
        cout << "Invalid day: " << _catch << endl;
    }

    try {
        if (0 <= _hour && _hour <= 23) { hour = _hour; }
        else { throw _hour; }
    } catch (int _catch) {
        cout << "Invalid hour: " << _catch << endl;
    }

    try {
        if (0 <= _minute && _minute <= 59) { minute = _minute; }
        else { throw _minute; }
    } catch (int _catch) {
        cout << "Invalid minute: " << _catch << endl;
    }

    try {
        if (0 <= _second && _second <= 59) { second = _second; }
        else { throw _second; }
    } catch (int _catch) {
        cout << "Invalid second: " << _catch << endl;
    }

}

Date::~Date()
{}

string Date::DisplayDate() const {
    if (year == -1) { return "Date not specified."; }
    if (month == -1) { return "Date not specified."; }
    if (year == -1) { return "Date not specified."; }
    
    string date;

    if (day < 10)   { date += '0' + to_string(day) + '/'; }   else { date += to_string(day) + '/'; }
    if (month < 10) { date += '0' + to_string(month) + '/'; } else { date += to_string(month) + '/'; }
    date += to_string(year);

    return date;
}

string Date::DisplayTime() const {
    if (hour == -1) { return "Date not specified."; }
    if (minute == -1) { return "Date not specified."; }
    if (second == -1) { return "Date not specified."; }
    
    string time;

    if (hour < 10)   { time += '0' + to_string(hour) + ':'; }   else { time += to_string(hour) + ':'; }
    if (minute < 10) { time += '0' + to_string(minute) + ':'; } else { time += to_string(minute) + ':'; }
    if (second < 10) { time += '0' + to_string(second); }       else { time += to_string(second); }

    return time;
}

string Date::DisplayFullDate() const {
    return DisplayDate() + " " + DisplayTime();
}

/**
 * @brief Finds out the number of days that elapsed since given time.
 * 
 *        Does not account for leap years or months with number of
 *        days other than 28, 29, and 31.
 * 
 * @param _date Initial time
 * @return int Days elapsed since initial time
 */
int Date::DaysElapsed(Date* _date) {

    int dYear  = year - _date->GetYear();
    int dMonth = month - _date->GetMonth();
    int dDay   = day - _date->GetDay();

    return dYear * 365 + dMonth * 30 + dDay;
}

/**
 * @brief Finds out the number of months that elapsed since given time.
 * 
 *        Does not account for leap years or months with number of
 *        days other than 28, 29, and 31.
 * 
 * @param _date Initial time
 * @return int Months elapsed since initial time
 */
int Date::MonthsElapsed(Date* _date) {

    int dYear  = year - _date->GetYear();
    int dMonth = month - _date->GetMonth();
    int dDay   = day - _date->GetDay();

    return int((dYear * 365 + dMonth * 30 + dDay) / 30);
}

/**
 * @brief Finds out the number of years that elapsed since given time.
 * 
 *        Does not account for leap years.
 * 
 * @param _date Initial time
 * @return int Years elapsed since initial time
 */
int Date::YearsElapsed(Date* _date) {
    
    int dYear  = year - _date->GetYear();
    int dMonth = month - _date->GetMonth();
    int dDay   = day - _date->GetDay();

    return int((dYear * 365 + dMonth * 30 + dDay) / 365);
}