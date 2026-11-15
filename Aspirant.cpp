#include "Aspirant.h"

Aspirant::Aspirant()
    : Student(), thesisTopic("Не визначено"), supervisor("Не визначено"), yearOfStudy(1)
{
}

Aspirant::Aspirant(const string& name, const string& surname, const string& university,
    const string& faculty, int course, int age,
    const string& thesisTopic, const string& supervisor, int yearOfStudy)
    : Student(name, surname, university, faculty, course, age),
      thesisTopic(thesisTopic), supervisor(supervisor), yearOfStudy(yearOfStudy)
{
}

Aspirant::~Aspirant()
{
}

string Aspirant::getThesisTopic() const
{
    return thesisTopic;
}

string Aspirant::getSupervisor() const
{
    return supervisor;
}

int Aspirant::getYearOfStudy() const
{
    return yearOfStudy;
}

void Aspirant::setThesisTopic(const string& thesisTopic)
{
    this->thesisTopic = thesisTopic;
}

void Aspirant::setSupervisor(const string& supervisor)
{
    this->supervisor = supervisor;
}

void Aspirant::setYearOfStudy(int yearOfStudy)
{
    this->yearOfStudy = yearOfStudy;
}

void Aspirant::Print() const
{
    cout << "\n=== [АСПІРАНТ] ===" << endl;
    cout << "Ім'я:                  " << name << endl;
    cout << "Прізвище:              " << surname << endl;
    cout << "Університет:           " << university << endl;
    cout << "Факультет:             " << faculty << endl;
    cout << "Курс:                  " << course << endl;
    cout << "Вік:                   " << age << endl;
    cout << "Тема дисертації:       " << thesisTopic << endl;
    cout << "Науковий керівник:     " << supervisor << endl;
    cout << "Рік аспірантури:       " << yearOfStudy << endl;
}

void Aspirant::Input()
{
    Student::Input();

    cout << "Введіть тему дисертації: ";
    cin >> thesisTopic;

    cout << "Введіть ім'я наукового керівника: ";
    cin >> supervisor;

    cout << "Введіть рік аспірантури: ";
    cin >> yearOfStudy;
}
