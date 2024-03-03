#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Student {
private:
    string name;
    long int id;
    string groupName;

public:
    Student(string n, long int i, string group) : name(n), id(i), groupName(group) {}

    string getGroupName() const {
        return groupName;
    }
};

void printGroupCounts(const vector<Student>& students) {
    map<string, int> groupCounts;

    // Count the number of students in each group
    for (const auto& student : students) {
        groupCounts[student.getGroupName()]++;
    }

    // Print the counts in alphabetical order of group names
    for (const auto& pair : groupCounts) {
        cout << "Group " << pair.first << ": " << pair.second << " students" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students;
    string name, group;
    long int id;

    cout << "Enter student details (name id group):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> name >> id >> group;
        students.emplace_back(name, id, group);
    }

    // Sort students based on group name
    sort(students.begin(), students.end(), [](const Student& s1, const Student& s2) {
        return s1.getGroupName() < s2.getGroupName();
    });

    printGroupCounts(students);

    return 0;
}
