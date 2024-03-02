#include <iostream>
#include <string>
#include <algorithm>

#define MAX_STUDENTS 1000
#define MAX_COMPANY_LEN 16

using namespace std;

struct Intern {
    int stt;
    string id;
    string name;
    string cls;
    string email;
    string company;
};

void ReadIntern(Intern* intern, int i) {
    intern->stt = i+1;
    getline(cin, intern->id);
    getline(cin, intern->name);
    getline(cin, intern->cls);
    getline(cin, intern->email);
    getline(cin, intern->company);
}

void PrintIntern(const Intern& intern) {
    cout << intern.stt << " " << intern.id << " " << intern.name << " " << intern.cls << " " << intern.email << " " << intern.company << "\n";
}

bool CompareIntern(const Intern& intern1, const Intern& intern2) {
    return intern1.id < intern2.id;
}

int main() {
    int n, q;
    cin >> n;
    cin.ignore(); // ignore the newline character left in the input buffer

    Intern interns[MAX_STUDENTS];
    for (int i = 0; i < n; i++) {
        ReadIntern(&interns[i], i);
    }

    cin >> q;
    cin.ignore(); // ignore the newline character left in the input buffer

    for (int i = 0; i < q; i++) {
        string company;
        getline(cin, company);
        // Find the interns of the corresponding company
        Intern company_interns[MAX_STUDENTS];
        int company_intern_count = 0;
        for (int j = 0; j < n; j++) {
            if (interns[j].company == company) {
                company_interns[company_intern_count] = interns[j];
                company_intern_count++;
            }
        }

        // Sort the interns by ID
        sort(company_interns, company_interns + company_intern_count, CompareIntern);

        // Print the interns
        for (int j = 0; j < company_intern_count; j++) {
            PrintIntern(company_interns[j]);
        }
    }

    return 0;
}
