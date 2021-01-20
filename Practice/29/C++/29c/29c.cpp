#include <iostream>
#include <vector>
#include <map>
#include <time.h>
#include "bozo.hpp"
using namespace std;
struct Students {
    map<string, int> exams;
    string sName;
    int sgroup;
    Students(string Name, int group, int math, int phys, int hist, int prog) {
        exams = { {"math", math},{"phys", phys},{"hist", hist},{"prog", prog} };
        sName = Name;
        sgroup = group;
    }
    friend
        ostream& operator<< (ostream& print, const Students& student) {
        auto namelen = max(int(student.sName.length()), 4);
        auto del = string(namelen, '-');
        print << "+-" << del << "-+-------+------+------+------+------+\n"
            << "| Name" << :string(namelen - 4, ' ')
            << " | Group | Math | Phys | Hist | Prog |\n"
            << "+-" << del << "-+-------+------+------+------+------+\n"
            << "| " << student.sName << " |   " << student.sgroup
            << "   |  " << student.exams.at("math")
            << "   |  " << student.exams.at("phys")
            << "   |  " << student.exams.at("hist")
            << "   |  " << student.exams.at("prog") << "   |\n"
            << "+-" << del << "-+-------+------+------+------+------+\n";
        return print;
    }
    bool operator > (const Students& Deb) {
        return sName > Deb.sName;
    }
    bool operator < (const Students& Deb) {
        return sName < Deb.sName;
    }
};
ostream& operator << (ostream& print, const vector<Students>& lol) {
    auto namelen = lol.at(0).sName.length();
    for (auto lols = lol.begin() + 1; lols != lol.end(); lols++) {
        if (lols->sName.length() > namelen) {
            namelen = lols->sName.length();
        }
    }
    auto del = string(namelen, '-');
    print << "+-" << del << "-+-------+------+------+------+------+\n"
        << "| Name" << string(namelen - 4, ' ')
        << " | Group | Math | Phys | Hist | Prog |\n"
        << "+-" << del << "-+-------+------+------+------+------+\n";
    for (auto student : lol) {
        print << "| " << student.sName << string(namelen - student.sName.length(), ' ') << " |   " << student.sgroup
            << "   |  " << student.exams.at("math")
            << "   |  " << student.exams.at("phys")
            << "   |  " << student.exams.at("hist")
            << "   |  " << student.exams.at("prog")
            << "   |\n"
            << "+-" << del << "-+-------+------+------+------+------+\n";
    }
    return print;
}


int main() {
    srand(time(0));
    vector<Students> students = {
                                    Students("A",       1, 5, 4, 4, 3),
                                    Students("B",       2, 4, 4, 3, 4),
                                    Students("C",       3, 5, 5, 5, 5),
                                    Students("D",       9, 1, 3, 1, 1),
                                    Students("E",       3, 3, 3, 3, 3),
                                    Students("Obama",   0, 4, 5, 4, 3),
                                    Students("Tried",   6, 3, 4, 3, 5),
                                    Students("To",      0, 3, 3, 3, 3),
                                    Students("Kill",    5, 4, 3, 3, 1),
                                    Students("Me",      4, 5, 2, 3, 3) };
    vector<Students> kekw;
    int kolichestvo = 0;
    for (auto lols : students) {
        for (auto exam : lols.exams) {
            if (exam.second == 2) {
                kekw.push_back(lols);
                kolichestvo += 1;
                break;
            }
        }
    }


    if (kolichestvo) {
        int any = rand() % kolichestvo;
        cout << Bozosort(kekw);
        cout << "Explusion\n";
        cout << kekw[any];
    }
    else {
        cout << "Not found\n";
    }
}