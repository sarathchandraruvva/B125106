#include<iostream>
using namespace std;
class Candidate{
    protected:
    int CandidateId;
    float attendancePercentage;
    public:
        Candidate(int id,float att){
            CandidateId = id;
            attendancePercentage = att;
        }
};
class Regularcandidate : public Candidate{
    public:
        Regularcandidate(int id,float att):Candidate(id,att){}
            void checkEligibility(){
                cout<<"\nRegular Candidate "<<endl;
                cout<<"Candidate Id : "<<CandidateId<<endl;
                cout<<"attendance : "<<attendancePercentage<<"%"<<endl;
                if(attendancePercentage>=75){
                    cout<<"Eligible for examinatrion"<<endl;
                }
                else{
                    cout<<"Not eligible for examination"<<endl;
                }
        }
};
class Reappearcandidate : public Candidate{
    public:
        Reappearcandidate(int i,float a):Candidate(i,a){}
        void checkEligibility(){
            cout<<"\nReappaer Candidate "<<endl;
            cout<<"Candidate Id : "<<CandidateId<<endl;
             cout<<"attendance : "<<attendancePercentage<<"%"<<endl;
                if(attendancePercentage>=60){
                    cout<<"Eligible for examinatrion"<<endl;
                }
                else{
                    cout<<"Not eligible for examination"<<endl;
                }
        }
};
int main(){
    Regularcandidate r1(25,75);
    Reappearcandidate r2(26,60);
    r1.checkEligibility();
    r2.checkEligibility();
    return 0;
}