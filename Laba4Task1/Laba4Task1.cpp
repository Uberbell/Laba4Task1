#include "Header.h"
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");
    int N;
    cout << "Введите количество абитуриентов: ";
    while (!(cin >> N) || N <= 0) {
        cin.clear();
        cin.ignore((numeric_limits<streamsize>::max)(), '\n');
        cout << "Некорректный ввод. Повторите попытку.\n";
    }
    cin.ignore((numeric_limits<streamsize>::max)(), '\n');

    vector<Applicant> applicants;
    fillApplicants(applicants, N);
    printQualifiedApplicants(applicants);

    return 0;
}


