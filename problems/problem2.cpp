#include <iostream>
using namespace std;


class Timer{
public:
    int hours;
    int minutes;
    int seconds;
    Timer(int hours, int minutes, int seconds){
        cin>>hours,
        cin>>minutes;
        cin>> seconds;
        this->seconds = (seconds>=0&&seconds<=59)?seconds:seconds%60;
        this->minutes = (minutes>=0&&minutes<=59)?minutes:minutes%60+seconds/60;
        this->hours = (hours>=0 && hours<=23)?hours:hours%24+minutes/60;
    }
    void printTime(){
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};

int main(){
    Timer t(0,0,0);
    t.printTime();
}