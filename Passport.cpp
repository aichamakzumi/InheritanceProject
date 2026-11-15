#include "Passport.h"

Passport::Passport()
    : surname("Невідомо"), name("Невідомо"), patronymic("Невідомо"),
      dateOfBirth("01.01.2000"), placeOfBirth("Невідомо"), gender("Невідомо"),
      dateOfIssue("01.01.2014"), issuedBy("Невідомо"), registrationAddress("Невідомо")
{
}

Passport::Passport(const string& surname, const string& name, const string& patronymic,
    const string& dateOfBirth, const string& placeOfBirth, const string& gender,
    const string& dateOfIssue, const string& issuedBy, const string& registrationAddress)
    : surname(surname), name(name), patronymic(patronymic),
      dateOfBirth(dateOfBirth), placeOfBirth(placeOfBirth), gender(gender),
      dateOfIssue(dateOfIssue), issuedBy(issuedBy), registrationAddress(registrationAddress)
{
}

Passport::~Passport()
{
}

string Passport::getSurname() const
{
    return surname;
}

string Passport::getName() const
{
    return name;
}

string Passport::getPatronymic() const
{
    return patronymic;
}

string Passport::getDateOfBirth() const
{
    return dateOfBirth;
}

string Passport::getPlaceOfBirth() const
{
    return placeOfBirth;
}

string Passport::getGender() const
{
    return gender;
}

string Passport::getDateOfIssue() const
{
    return dateOfIssue;
}

string Passport::getIssuedBy() const
{
    return issuedBy;
}

string Passport::getRegistrationAddress() const
{
    return registrationAddress;
}

void Passport::setSurname(const string& surname)
{
    this->surname = surname;
}

void Passport::setName(const string& name)
{
    this->name = name;
}

void Passport::setPatronymic(const string& patronymic)
{
    this->patronymic = patronymic;
}

void Passport::setDateOfBirth(const string& dateOfBirth)
{
    this->dateOfBirth = dateOfBirth;
}

void Passport::setPlaceOfBirth(const string& placeOfBirth)
{
    this->placeOfBirth = placeOfBirth;
}

void Passport::setGender(const string& gender)
{
    this->gender = gender;
}

void Passport::setDateOfIssue(const string& dateOfIssue)
{
    this->dateOfIssue = dateOfIssue;
}

void Passport::setIssuedBy(const string& issuedBy)
{
    this->issuedBy = issuedBy;
}

void Passport::setRegistrationAddress(const string& registrationAddress)
{
    this->registrationAddress = registrationAddress;
}

void Passport::Print() const
{
    cout << "\n=== [ПАСПОРТ ГРОМАДЯНИНА УКРАЇНИ] ===" << endl;
    cout << "Прізвище:              " << surname << endl;
    cout << "Ім'я:                  " << name << endl;
    cout << "По батькові:           " << patronymic << endl;
    cout << "Дата народження:       " << dateOfBirth << endl;
    cout << "Місце народження:      " << placeOfBirth << endl;
    cout << "Стать:                 " << gender << endl;
    cout << "Дата видачі:           " << dateOfIssue << endl;
    cout << "Ким видано:            " << issuedBy << endl;
    cout << "Адреса реєстрації:     " << registrationAddress << endl;
}

void Passport::Input()
{
    cout << "Введіть прізвище: ";
    cin >> surname;

    cout << "Введіть ім'я: ";
    cin >> name;

    cout << "Введіть по батькові: ";
    cin >> patronymic;

    cout << "Введіть дату народження (дд.мм.рррр): ";
    cin >> dateOfBirth;

    cout << "Введіть місце народження: ";
    cin >> placeOfBirth;

    cout << "Введіть стать (чоловіча/жіноча): ";
    cin >> gender;

    cout << "Введіть дату видачі (дд.мм.рррр): ";
    cin >> dateOfIssue;

    cout << "Введіть ким видано: ";
    cin >> issuedBy;

    cout << "Введіть адресу реєстрації: ";
    cin >> registrationAddress;
}
