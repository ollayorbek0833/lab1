#include <iostream>
using namespace std;


class Person{
protected:
    string name;
    int age;
    char gender;
public:
    Person(string name, int age, char gender){
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    ~Person(){
        cout<<"Object is deleted\n";
    }
    void setName(string name){
        this->name = name;
    }

    void setGender(char gender){
        this-> gender = gender;
    }

    string getName(){
        return this->name;
    }

    char getGender(){
        return this-> gender;
    }

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return this->age;
    }
    void printName(){
        cout<<"Hello my name is " <<name<<". I am "<<age<<" years old"<<endl;
        cout<<gender<<endl;
    }
};


class Student : public Person{
private:
    long int id;
    string dep;
public:
    Student(string name1, int age1, char gender, string name, int age, long int id, string dep) : Person(name1, age1, gender) {
        this-> name = name;
        this->age = age;
        this-> id = id;
        this-> dep = dep;
    }
    void printName(){
        cout<<"Hello, I am from "<<dep<<" department"<<endl;
    }
};

int main() {
    Student s1(std::string(), 0, 0, "Alex", 12, 230036, "CS");
    s1.printName();
    s1.Person::printName();
}
