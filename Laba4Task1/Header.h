#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;
struct Applicant {
    string name;
    string address;
    float grade;
};
bool compareByName(const Applicant& a1, const Applicant& a2);
void fillApplicants(vector<Applicant>& applicants, int n);
void printQualifiedApplicants(const vector<Applicant>& applicants);



