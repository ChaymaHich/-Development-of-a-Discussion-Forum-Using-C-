#ifndef DATE_H
#define DATE_H


class Date {
public:
    Date(int day, int month, int year);
    void setDate(int day, int month, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
    bool operator<(const Date& other) const ;
    bool operator==(const Date& other) const;

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H
