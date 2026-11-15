#include "Student.h"

Student::Student()
    : name("Невідомо"), surname("Невідомо"), university("Невідомо"),
      faculty("Невідомо"), course(1), age(18)
{
}

Student::Student(const string& name, const string& surname, const string& university,
    const string& faculty, int course, int age)
    : name(name), surname(surname), university(university),
      faculty(faculty), course(course), age(age)
{
}

Student::~Student()
{
}

string Student::getName() const
{
    return name;
}

string Student::getSurname() const
{
    return surname;
}

string Student::getUniversity() const
{
    return university;
}

string Student::getFaculty() const
{
    return faculty;
}

int Student::getCourse() const
{
    return course;
}

int Student::getAge() const
{
    return age;
}

void Student::setName(const string& name)
{
    this->name = name;
}

void Student::setSurname(const string& surname)
{
    this->surname = surname;
}

void Student::setUniversity(const string& university)
{
    this->university = university;
}

void Student::setFaculty(const string& faculty)
{
    this->faculty = faculty;
}

void Student::setCourse(int course)
{
    this->course = course;
}

void Student::setAge(int age)
{
    this->age = age;
}

void Student::Print() const
{
    cout << "\n=== [СТУДЕНТ] ===" << endl;
    cout << "Ім'я:           " << name << endl;
    cout << "Прізвище:       " << surname << endl;
    cout << "Університет:    " << university << endl;
    cout << "Факультет:      " << faculty << endl;
    cout << "Курс:           " << course << endl;
    cout << "Вік:            " << age << endl;
}

void Student::Input()
{
    cout << "Введіть ім'я: ";
    cin >> name;

    cout << "Введіть прізвище: ";
    cin >> surname;

    cout << "Введіть назву університету: ";
    cin >> university;

    cout << "Введіть факультет: ";
    cin >> faculty;

    cout << "Введіть курс: ";
    cin >> course;

    cout << "Введіть вік: ";
    cin >> age;
}
