#include "Header.h"
bool compareByName(const Applicant& a1, const Applicant& a2) {
    return a1.name < a2.name;
}

void fillApplicants(vector<Applicant>& applicants, int n) {
    for (int i = 0; i < n; ++i) {
        Applicant newApplicant;
        cout << "������� ��� �����������: " << i + 1 << ": ";
        getline(cin >> ws, newApplicant.name);
        cout << "������� ����� �����������: " << i + 1 << ": ";
        getline(cin >> ws, newApplicant.address);

        bool validGrade = false;
        while (!validGrade) {
            cout << "������� ������� ���� ����������� " << i + 1 << ": ";
            if (!(cin >> newApplicant.grade)) {
                cin.clear();
                cin.ignore((numeric_limits<streamsize>::max)(), '\n');
                cout << "������������ ����. ��������� �������.\n";
            }
            else {
                validGrade = true;
            }
        }

        applicants.push_back(newApplicant);
    }
}

void printQualifiedApplicants(const vector<Applicant>& applicants) {
    vector<Applicant> qualifiedApplicants;
    for (const auto& applicant : applicants) {
        if (applicant.address == "�������" && applicant.grade >= 4.5) {
            qualifiedApplicants.push_back(applicant);
        }
    }

    if (qualifiedApplicants.empty()) {
        cout << "��� ������������ �� �������� � ������� ������ �� ���� 4,5.\n";
    }
    else {
        sort(qualifiedApplicants.begin(), qualifiedApplicants.end(), compareByName);
        cout << "������� ������������ �� �������� � ������� ������ �� ���� 4,5 � ���������� �������:\n";
        for (const auto& applicant : qualifiedApplicants) {
            cout << applicant.name << endl;
        }
    }
}