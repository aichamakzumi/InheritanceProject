#pragma once
#include "Passport.h"

class ForeignPassport : public Passport
{
private:
    string passportNumber;
    string visaInfo;
    string visaCountry;
    string visaExpiryDate;

public:
    ForeignPassport();
    ForeignPassport(const string& surname, const string& name, const string& patronymic,
        const string& dateOfBirth, const string& placeOfBirth, const string& gender,
        const string& dateOfIssue, const string& issuedBy, const string& registrationAddress,
        const string& passportNumber, const string& visaInfo, const string& visaCountry,
        const string& visaExpiryDate);
    ~ForeignPassport();

    string getPassportNumber() const;
    string getVisaInfo() const;
    string getVisaCountry() const;
    string getVisaExpiryDate() const;

    void setPassportNumber(const string& passportNumber);
    void setVisaInfo(const string& visaInfo);
    void setVisaCountry(const string& visaCountry);
    void setVisaExpiryDate(const string& visaExpiryDate);

    void Print() const;
    void Input();
};
