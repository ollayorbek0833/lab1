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
        this->hours = ((hours+(minutes+seconds/60)/60)>=0 && (hours+(minutes+seconds/60)/60)<=23)?(hours+(minutes+seconds/60)/60):(hours+(minutes+seconds/60)/60)%24;
        this->minutes = ((minutes+seconds/60)>=0&&(minutes+seconds/60)<=59)?(minutes+(minutes+seconds/60)):(minutes+seconds/60)%60;
        this->seconds = (seconds>=0&&seconds<=59)?seconds:seconds%60;
    }
    void printTime(){
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};

int main(){
    Timer t(0,0,0);
    t.printTime();
}