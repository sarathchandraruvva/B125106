#include<iostream>
using namespace std;
class date{
    int day,month,year;
    public:
    date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    bool operator==(const date& dt){
        return(day==dt.day && month==dt.month && year==dt.year);
    }
    bool operator!=(const date& dt){
        return !(*this==dt);
    }
};
int main(){
    date d1(9,10,2020);
    date d2(2,8,2008);
    date d3(6,7,2020);
    cout<<boolalpha;
    cout<<"d1==d2:"<<(d1==d2)<<endl;
    cout<<"d1!=d2:"<<(d1 != d2)<<endl;
    return 0;
}