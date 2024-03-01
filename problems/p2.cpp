#include <iostream>
using namespace std;


class Timer{
    string name;
    string lastName;
    int age;
public:
    Person(string name, string lastName, int age){
        this -> name = name;
        this ->lastName = lastName;
        this->age = age;
    }

    void setName(string name){
        this->name = name;
    }
    void setLastName(string LastName){
        this->lastName = lastName;
    }
    void setAge(int age){
        this->age = age;
    }
    string getName(){
        return this -> name;
    }
    string getLastName(){
        return this ->lastName;
    }
    int getAge(){
        return this->age;
    }
};

int main(){
    Person p1("Ollayorbek", "Masharipov",18);
    Person p2("Sanjar", "Rajabov", 19);
    p1.setAge(19);
    cout<<p1.getLastName()<<endl;
}