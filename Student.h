#pragma once
#include <iostream>

using namespace std;

class Student
{
protected:
    string name;
    string surname;
    string university;
    string faculty;
    int course;
    int age;

public:
    Student();
    Student(const string& name, const string& surname, const string& university,
        const string& faculty, int course, int age);
    ~Student();

    string getName() const;
    string getSurname() const;
    string getUniversity() const;
    string getFaculty() const;
    int getCourse() const;
    int getAge() const;

    void setName(const string& name);
    void setSurname(const string& surname);
    void setUniversity(const string& university);
    void setFaculty(const string& faculty);
    void setCourse(int course);
    void setAge(int age);

    void Print() const;
    void Input();
};
