#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <conio.h>

using namespace std;

class Phone
{
    string brandName, modelName;
    float formFactor;
    float phoneWidth, phoneHeight;
    int yearOfIssue, price;
public:

    Phone()
    {
        cout << "Welcome in the shop! What do you want?" << endl;
        cout << "1. Add phone \n 2. Delete Phone \n 3. Show reports" << endl;
    }
    void addPhone()
    {
        cout << "Write brand name of your phone: " << endl;
        cin >> brandName;
        cout << "Write model name of your phone: "<<endl; 
        cin >> modelName;
        cout << "What is form factor of that phone: " << endl;
        cin >> formFactor;
        cout << "Write down a phone width: " << endl;
        cin >> phoneWidth;
        cout << "Write down a phone height: " << endl;
        cin >> phoneHeight;
        cout << "Enter the year of issue: " << endl;
        cin >> yearOfIssue;
        cout << "What is the price of this phone: " << endl;
        cin >> price;
        fstream file;
        file.open("Phones.txt", ios::out | ios::app);
        file << brandName << endl << modelName << endl << formFactor << endl << phoneWidth << endl << phoneHeight << endl << yearOfIssue << endl << price << endl;
        file.close();
        cout << "Adding phone is completed :)" << endl;
    }
    void deletePhone()
    {
        string variable;
        cout << "Wich phone you want delete?" << endl;
        cin >> variable;
        fstream file;
        file.open("Phones.txt", ios::in);
        if (file.good() == false)
        {
            cout << "There is no such a phone" << endl;
            exit(0);
        }
        string bin = " ";
        string line;
        while (getline(file, line))
        {
            if (line == variable)
            {
                for (int i = 1; i < 8; i++)
                {
                    switch (i)
                    {
                    case 1:
                        line = bin;
                        break;
                    case 2:
                        line = bin;
                        break;
                    case 3:
                        line = bin;
                        break;
                    case 4:
                        line = bin;
                        break;
                    case 5:
                        line = bin;
                        break;
                    case 6:
                        line = bin;
                        break;
                    case 7:
                        line = bin;
                        break;
                    default:
                        break;
                    }
                }
            }
        }
        file.close();
    }
    void showReports()
    {
        cout << "What do you want?: \n 1. Show All phones by the same brand. \n 2. Show all phones of a given form factor and screen size." << endl;
        cout << "3. Show the name of the brand with the maximum quantity of the phones. \n 4. Show TOP-3 screen sizes." << endl;
    }
    void showAllPhonesByTheSameBrand()
    {
        string brName;
        cout << "Wich brand are you intrested?" << endl;
        cin >> brName;
        fstream file;
        file.open("Phones.txt", ios::in);
        if (file.good() == false)
        {
            cout << "There is no such a phone" << endl;
            exit(0);
        }
        string line;
        int lineNumber;
        
    }
};

int main()
{
    Phone p1;
    char choose1 = _getch();
    char choose2 = _getch();
    switch (choose1)
    {
    case '1':
        p1.addPhone();
        break;
    case '2':
        p1.deletePhone();
        break;
    case '3':
        p1.showReports();
        switch (choose2)
        {
        case '1':
            p1.showAllPhonesByTheSameBrand();
            break;
        case '2':
            cout << "Work in progress...";
            break;
        case '3':
            cout << "Work in progress...";
            break;
        case '4':
            cout << "Work in progress...";
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}


