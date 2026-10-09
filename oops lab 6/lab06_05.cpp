#include<iostream>
using namespace std;
class Score{
    int score;
    public:
    Score(int s=0){
        score=s;
    }
    Score operator++(){
        ++score;
        return *this;
    }
    Score operator++(int){
        Score temp = *this;
        score++;
        return temp;
    }
    void display(){
        cout<<score<<endl;
    }
};
int main(){
    Score s1(10),s2,s3;
    s2=++s1;
    cout<<"Prefix result is "<<endl;
    s2.display();
    s3=s1++;
    cout<<"Postfix result is "<<endl;
    s3.display();
    return 0;

}