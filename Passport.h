#pragma once
#include <iostream>

using namespace std;

class Passport
{
protected:
    string surname;
    string name;
    string patronymic;
    string dateOfBirth;
    string placeOfBirth;
    string gender;
    string dateOfIssue;
    string issuedBy;
    string registrationAddress;

public:
    Passport();
    Passport(const string& surname, const string& name, const string& patronymic,
        const string& dateOfBirth, const string& placeOfBirth, const string& gender,
        const string& dateOfIssue, const string& issuedBy, const string& registrationAddress);
    ~Passport();

    string getSurname() const;
    string getName() const;
    string getPatronymic() const;
    string getDateOfBirth() const;
    string getPlaceOfBirth() const;
    string getGender() const;
    string getDateOfIssue() const;
    string getIssuedBy() const;
    string getRegistrationAddress() const;

    void setSurname(const string& surname);
    void setName(const string& name);
    void setPatronymic(const string& patronymic);
    void setDateOfBirth(const string& dateOfBirth);
    void setPlaceOfBirth(const string& placeOfBirth);
    void setGender(const string& gender);
    void setDateOfIssue(const string& dateOfIssue);
    void setIssuedBy(const string& issuedBy);
    void setRegistrationAddress(const string& registrationAddress);

    void Print() const;
    void Input();
};
