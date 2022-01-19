#include <iostream>
#include <string>

using namespace std;

unsigned short pHeight;

unsigned short ReadPersonAge() {
    cout << "Age: ";
    unsigned short age;
    cin >> age;
    return age;
}

string ReadPersonName() {
    cout << "Name: ";
    string name;
    cin >> name;
    return name;
}

void ReadPersonHeight() {
    cout << "Height: ";
    cin >> pHeight;
}

void ReadPersonWeight(unsigned short& weight) {
    cout << "Weight: ";
    cin >> weight;
}

void ReadPersonSalary(double* salary) {
    cout << "Salary: ";
    cin >> *salary;
}

void ReadPersonData(string& name, unsigned short& age, string& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();

    double pSalary;
    ReadPersonSalary(&pSalary);
    salary = to_string(pSalary);
}


void ReadPersonData(string& name, unsigned short& age, string& height, string& weight) {
    name = ReadPersonName();
    age = ReadPersonAge();

    ReadPersonHeight();
    height = to_string(pHeight);

    unsigned short personWeight;
    ReadPersonWeight(personWeight);
    weight = to_string(personWeight);
}

void WritePersonData(unsigned short age, string& name, const string& height = "", const string& weight = "", const string& salary = "") {
    cout << "\nName: " << name << "\nAge: " << to_string(age) << "\nHeight: " << height << "\nWeight: " << weight << "\nSalary: " << salary << "\n\n";
}

int main() {
    string name, height, weight, salary;
    unsigned short age;
    ReadPersonData(name, age, salary);
    WritePersonData(age, name, "", "", salary);
    ReadPersonData(name, age, height, weight);
    WritePersonData(age, name, height, weight);
    return 0;
}
