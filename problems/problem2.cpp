#include <iostream>
using namespace std;


class Timer{
public:
    int hours;
    int minutes;
    int seconds;
    Timer(int hours, int minutes, int seconds){
        this->hours = (hours>=0 && hours<=23)?hours:0;
        this->minutes = (minutes>=0&&minutes<=59)?minutes:0;
        this->seconds = (seconds>=0&&seconds<=59)?seconds:0;
    }
    void printTime(){
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};

int main(){
    Timer t(10, 21,31);
    t.printTime();
}