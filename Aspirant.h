#pragma once
#include "Student.h"

class Aspirant : public Student
{
private:
    string thesisTopic;
    string supervisor;
    int yearOfStudy;

public:
    Aspirant();
    Aspirant(const string& name, const string& surname, const string& university,
        const string& faculty, int course, int age,
        const string& thesisTopic, const string& supervisor, int yearOfStudy);
    ~Aspirant();

    string getThesisTopic() const;
    string getSupervisor() const;
    int getYearOfStudy() const;

    void setThesisTopic(const string& thesisTopic);
    void setSupervisor(const string& supervisor);
    void setYearOfStudy(int yearOfStudy);

    void Print() const;
    void Input();
};
