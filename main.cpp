#include <iostream>

#include "Student.h"
#include "Aspirant.h"
#include "Passport.h"
#include "ForeignPassport.h"

using namespace std;

const int MAX_COUNT = 10;

int main()
{
    system("chcp 65001 > nul");

    Student students[MAX_COUNT];
    int studentCount = 0;

    Aspirant aspirants[MAX_COUNT];
    int aspirantCount = 0;

    Passport passports[MAX_COUNT];
    int passportCount = 0;

    ForeignPassport foreignPassports[MAX_COUNT];
    int foreignPassportCount = 0;

    int choice = -1;

    while (choice != 0)
    {
        cout << "\n======================================================\n";
        cout << "          ТЕМА: УСПАДКУВАННЯ (INHERITANCE)             \n";
        cout << "======================================================\n";
        cout << "Кількість створених об'єктів:\n";
        cout << "  Студентів: " << studentCount << " | Аспірантів: " << aspirantCount
             << " | Паспортів: " << passportCount << " | Закордонних: " << foreignPassportCount << "\n\n";
        cout << " --- Завдання №1 ---\n";
        cout << " 1. Створити Студента\n";
        cout << " 2. Створити Аспіранта\n";
        cout << " --- Завдання №2 ---\n";
        cout << " 3. Створити Паспорт\n";
        cout << " 4. Створити Закордонний паспорт\n";
        cout << " --- Загальне ---\n";
        cout << " 5. Вивести всі створені об'єкти (Print)\n";
        cout << " 6. Демонстрація роботи гетерів та сетерів (Get / Set)\n";
        cout << " 7. Додати готові стандартні зразки\n";
        cout << " 0. Вихід з програми\n";
        cout << "------------------------------------------------------\n";
        cout << "Оберіть опцію: ";

        if (!(cin >> choice))
        {
            if (cin.eof())
            {
                break;
            }
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Помилка введення! Введіть число.\n";
            continue;
        }

        switch (choice)
        {
        case 1:
        {
            if (studentCount >= MAX_COUNT)
            {
                cout << "Досягнуто ліміт студентів (" << MAX_COUNT << ")!\n";
                break;
            }

            int subChoice = 1;
            cout << "\n1. Ввести дані вручну\n2. Створити стандартного студента\nВаш вибір: ";
            cin >> subChoice;

            if (subChoice == 2)
            {
                students[studentCount] = Student("Іван", "Петренко", "КПІ ім. Ігоря Сікорського",
                    "ФІОТ", 2, 19);
            }
            else
            {
                students[studentCount].Input();
            }

            cout << "\nСтудента успішно створено!";
            students[studentCount].Print();
            studentCount++;
            break;
        }

        case 2:
        {
            if (aspirantCount >= MAX_COUNT)
            {
                cout << "Досягнуто ліміт аспірантів (" << MAX_COUNT << ")!\n";
                break;
            }

            int subChoice = 1;
            cout << "\n1. Ввести дані вручну\n2. Створити стандартного аспіранта\nВаш вибір: ";
            cin >> subChoice;

            if (subChoice == 2)
            {
                aspirants[aspirantCount] = Aspirant("Олена", "Коваленко", "КНУ ім. Тараса Шевченка",
                    "Факультет кібернетики", 5, 24,
                    "Машинне навчання у кібербезпеці", "проф. Іваненко О.М.", 2);
            }
            else
            {
                aspirants[aspirantCount].Input();
            }

            cout << "\nАспіранта успішно створено!";
            aspirants[aspirantCount].Print();
            aspirantCount++;
            break;
        }

        case 3:
        {
            if (passportCount >= MAX_COUNT)
            {
                cout << "Досягнуто ліміт паспортів (" << MAX_COUNT << ")!\n";
                break;
            }

            int subChoice = 1;
            cout << "\n1. Ввести дані вручну\n2. Створити стандартний паспорт\nВаш вибір: ";
            cin >> subChoice;

            if (subChoice == 2)
            {
                passports[passportCount] = Passport("Шевченко", "Тарас", "Григорович",
                    "09.03.1990", "м. Київ", "чоловіча",
                    "15.03.2004", "Печерський РВ ГУ МВС України в м. Києві",
                    "м. Київ, вул. Хрещатик, 1");
            }
            else
            {
                passports[passportCount].Input();
            }

            cout << "\nПаспорт успішно створено!";
            passports[passportCount].Print();
            passportCount++;
            break;
        }

        case 4:
        {
            if (foreignPassportCount >= MAX_COUNT)
            {
                cout << "Досягнуто ліміт закордонних паспортів (" << MAX_COUNT << ")!\n";
                break;
            }

            int subChoice = 1;
            cout << "\n1. Ввести дані вручну\n2. Створити стандартний закордонний паспорт\nВаш вибір: ";
            cin >> subChoice;

            if (subChoice == 2)
            {
                foreignPassports[foreignPassportCount] = ForeignPassport("Шевченко", "Тарас", "Григорович",
                    "09.03.1990", "м. Київ", "чоловіча",
                    "20.05.2020", "ДМС 8023",
                    "м. Київ, вул. Хрещатик, 1",
                    "FE 123456", "Шенгенська віза (тип C)", "Польща", "20.05.2027");
            }
            else
            {
                foreignPassports[foreignPassportCount].Input();
            }

            cout << "\nЗакордонний паспорт успішно створено!";
            foreignPassports[foreignPassportCount].Print();
            foreignPassportCount++;
            break;
        }

        case 5:
        {
            int total = studentCount + aspirantCount + passportCount + foreignPassportCount;
            if (total == 0)
            {
                cout << "\nСписок порожній! Спочатку створіть хоча б один об'єкт.\n";
                break;
            }

            cout << "\n======================================================\n";
            cout << "              ВСІ СТВОРЕНІ ОБ'ЄКТИ                    \n";
            cout << "======================================================\n";

            if (studentCount > 0)
            {
                cout << "\n--- СТУДЕНТИ (" << studentCount << ") ---";
                for (int i = 0; i < studentCount; ++i)
                {
                    students[i].Print();
                }
            }

            if (aspirantCount > 0)
            {
                cout << "\n--- АСПІРАНТИ (" << aspirantCount << ") ---";
                for (int i = 0; i < aspirantCount; ++i)
                {
                    aspirants[i].Print();
                }
            }

            if (passportCount > 0)
            {
                cout << "\n--- ПАСПОРТИ (" << passportCount << ") ---";
                for (int i = 0; i < passportCount; ++i)
                {
                    passports[i].Print();
                }
            }

            if (foreignPassportCount > 0)
            {
                cout << "\n--- ЗАКОРДОННІ ПАСПОРТИ (" << foreignPassportCount << ") ---";
                for (int i = 0; i < foreignPassportCount; ++i)
                {
                    foreignPassports[i].Print();
                }
            }
            break;
        }

        case 6:
        {
            cout << "\n=== ДЕМОНСТРАЦІЯ РОБОТИ СЕТЕРІВ ТА ГЕТЕРІВ ===" << endl;

            cout << "\n--- Student ---" << endl;
            Student testStudent;
            cout << "Створено студента за замовчуванням." << endl;
            cout << "Початкове ім'я через Get: " << testStudent.getName() << endl;

            cout << "\nЗмінюємо поля через сетери (Set)..." << endl;
            testStudent.setName("Марія");
            testStudent.setSurname("Бондаренко");
            testStudent.setUniversity("НАУ");
            testStudent.setFaculty("Факультет інформатики");
            testStudent.setCourse(3);
            testStudent.setAge(20);

            cout << "Отримуємо нові значення через гетери (Get):" << endl;
            cout << "  getName():       " << testStudent.getName() << endl;
            cout << "  getSurname():    " << testStudent.getSurname() << endl;
            cout << "  getUniversity(): " << testStudent.getUniversity() << endl;
            cout << "  getFaculty():    " << testStudent.getFaculty() << endl;
            cout << "  getCourse():     " << testStudent.getCourse() << endl;
            cout << "  getAge():        " << testStudent.getAge() << endl;

            cout << "\n--- Passport ---" << endl;
            Passport testPassport;
            cout << "Створено паспорт за замовчуванням." << endl;
            cout << "Початкове прізвище через Get: " << testPassport.getSurname() << endl;

            cout << "\nЗмінюємо поля через сетери (Set)..." << endl;
            testPassport.setSurname("Мельник");
            testPassport.setName("Андрій");
            testPassport.setPatronymic("Олексійович");
            testPassport.setDateOfBirth("15.06.1995");

            cout << "Отримуємо нові значення через гетери (Get):" << endl;
            cout << "  getSurname():    " << testPassport.getSurname() << endl;
            cout << "  getName():       " << testPassport.getName() << endl;
            cout << "  getPatronymic(): " << testPassport.getPatronymic() << endl;
            cout << "  getDateOfBirth():" << testPassport.getDateOfBirth() << endl;
            break;
        }

        case 7:
        {
            if (studentCount < MAX_COUNT)
                students[studentCount++] = Student("Дмитро", "Ткаченко", "ХНУРЕ",
                    "Факультет комп'ютерних наук", 3, 20);

            if (aspirantCount < MAX_COUNT)
                aspirants[aspirantCount++] = Aspirant("Наталія", "Сидоренко", "ЛНУ ім. Франка",
                    "Фізичний факультет", 6, 25,
                    "Квантові обчислення", "проф. Мельник В.І.", 3);

            if (passportCount < MAX_COUNT)
                passports[passportCount++] = Passport("Бондаренко", "Марія", "Іванівна",
                    "22.08.1998", "м. Львів", "жіноча",
                    "10.09.2012", "Шевченківський РВ ГУ МВС України",
                    "м. Львів, вул. Степана Бандери, 5");

            if (foreignPassportCount < MAX_COUNT)
                foreignPassports[foreignPassportCount++] = ForeignPassport("Бондаренко", "Марія", "Іванівна",
                    "22.08.1998", "м. Львів", "жіноча",
                    "01.02.2023", "ДМС 4612",
                    "м. Львів, вул. Степана Бандери, 5",
                    "FH 987654", "Робоча віза (тип D)", "Німеччина", "01.02.2028");

            cout << "\nУспішно додано 4 тестові об'єкти різних типів!\n";
            break;
        }

        case 0:
            cout << "\nЗавершення роботи програми...\n";
            break;

        default:
            cout << "Невірна опція! Спробуйте ще раз.\n";
            break;
        }
    }

    if (!cin.eof())
    {
        system("pause");
    }
    return 0;
}
