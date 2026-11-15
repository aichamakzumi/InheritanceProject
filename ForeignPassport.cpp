#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
    : Passport(), passportNumber("Невідомо"), visaInfo("Немає"),
      visaCountry("Невідомо"), visaExpiryDate("Невідомо")
{
}

ForeignPassport::ForeignPassport(const string& surname, const string& name, const string& patronymic,
    const string& dateOfBirth, const string& placeOfBirth, const string& gender,
    const string& dateOfIssue, const string& issuedBy, const string& registrationAddress,
    const string& passportNumber, const string& visaInfo, const string& visaCountry,
    const string& visaExpiryDate)
    : Passport(surname, name, patronymic, dateOfBirth, placeOfBirth, gender,
        dateOfIssue, issuedBy, registrationAddress),
      passportNumber(passportNumber), visaInfo(visaInfo),
      visaCountry(visaCountry), visaExpiryDate(visaExpiryDate)
{
}

ForeignPassport::~ForeignPassport()
{
}

string ForeignPassport::getPassportNumber() const
{
    return passportNumber;
}

string ForeignPassport::getVisaInfo() const
{
    return visaInfo;
}

string ForeignPassport::getVisaCountry() const
{
    return visaCountry;
}

string ForeignPassport::getVisaExpiryDate() const
{
    return visaExpiryDate;
}

void ForeignPassport::setPassportNumber(const string& passportNumber)
{
    this->passportNumber = passportNumber;
}

void ForeignPassport::setVisaInfo(const string& visaInfo)
{
    this->visaInfo = visaInfo;
}

void ForeignPassport::setVisaCountry(const string& visaCountry)
{
    this->visaCountry = visaCountry;
}

void ForeignPassport::setVisaExpiryDate(const string& visaExpiryDate)
{
    this->visaExpiryDate = visaExpiryDate;
}

void ForeignPassport::Print() const
{
    cout << "\n=== [ЗАКОРДОННИЙ ПАСПОРТ] ===" << endl;
    cout << "Прізвище:              " << surname << endl;
    cout << "Ім'я:                  " << name << endl;
    cout << "По батькові:           " << patronymic << endl;
    cout << "Дата народження:       " << dateOfBirth << endl;
    cout << "Місце народження:      " << placeOfBirth << endl;
    cout << "Стать:                 " << gender << endl;
    cout << "Дата видачі:           " << dateOfIssue << endl;
    cout << "Ким видано:            " << issuedBy << endl;
    cout << "Адреса реєстрації:     " << registrationAddress << endl;
    cout << "Номер закордонного паспорта: " << passportNumber << endl;
    cout << "Інформація про візу:   " << visaInfo << endl;
    cout << "Країна візи:           " << visaCountry << endl;
    cout << "Термін дії візи:       " << visaExpiryDate << endl;
}

void ForeignPassport::Input()
{
    Passport::Input();

    cout << "Введіть номер закордонного паспорта: ";
    cin >> passportNumber;

    cout << "Введіть інформацію про візу: ";
    cin >> visaInfo;

    cout << "Введіть країну візи: ";
    cin >> visaCountry;

    cout << "Введіть термін дії візи (дд.мм.рррр): ";
    cin >> visaExpiryDate;
}
