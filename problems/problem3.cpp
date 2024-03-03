#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Student {
private:
    string name;
    long int id;
    string groupName;

public:
    Student(string name, long int id, string groupName) {
        this->name = name;
        this->id = id;
        this->groupName = groupName;
    }

    string getGroupName() const {
        return groupName;
    }
};

void printSortedGroupCounts(const map<string, int>& groupCounts) {
    for (auto it = groupCounts.begin(); it != groupCounts.end(); ++it) {
        cout << it->first << ":" << it->second << endl;
    }
}

int main() {
    int n;
    cout << "students amount: ";
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; ++i) {
        string name, groupName;
        long int id;
        cout << "student " << i+1 << " name id group: ";
        cin >> name >> id >> groupName;
        students.push_back(Student(name, id, groupName));
    }

    map<string, int> groupCounts;
    for (const auto& student : students) {
        groupCounts[student.getGroupName()]++;
    }

    cout << "Output:" << endl;
    printSortedGroupCounts(groupCounts);

    return 0;
}