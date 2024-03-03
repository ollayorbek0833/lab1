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
    Student(string n, long int i, string group) : name(n), id(i), groupName(group) {}

    string getGroupName() const {
        return groupName;
    }
};

void printGroupCounts(const vector<Student>& students) {
    map<string, int> groupCounts;

    for (const auto& student : students) {
        groupCounts[student.getGroupName()]++;
    }

    for (const auto& pair : groupCounts) {
        cout <<pair.first << ": " << pair.second << endl;
    }
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    vector<Student> students;
    string name, group;
    long int id;

    for (int i = 0; i < n; ++i) {
        cin >> name >> id >> group;
        students.emplace_back(name, id, group);
    }

    printGroupCounts(students);

    return 0;
}
