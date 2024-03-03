#include <iostream>
using namespace std;


class Timer{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Timer(int hours, int minutes, int seconds){
        setTime(hours, minutes, seconds);
    }
    void setTime(int h, int m, int s){
        hours = (h>=0 && h<=23)?h:0;
        minutes = (m>=0&&m<=59)?m:0;
        seconds = (s>=0&&s<=59)?m:0;
    }
    void printTime(){
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};

int main(){
    int h, m, s;
    cin>>h;
    cin>>m;
    cin>>s;
    Timer t(h, m, s);
    t.setTime(h, m, s);
    t.printTime();
}