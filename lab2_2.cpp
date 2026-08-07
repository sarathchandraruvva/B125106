#include<iostream>
using namespace std;
class SQUARE{
    public:
    int length;
    int area;
    int perimeter;
    void input(){
        cout<<"Enter the side length:"<<endl;
        cin>>length;
    }
    int calculate_area(){
        area = length * length;
        return area;
    }
    int calculate_perimeter(){
        perimeter = 4*length;
        return perimeter;
    }
    void display(){
        cout<<"The area of square is :"<<calculate_area()<<endl;
        cout<<"The perimeter of square is :"<<calculate_perimeter()<<endl;
    }
};
int main(){
    SQUARE s1;
    s1.input();
    s1.calculate_area();
    s1.calculate_perimeter();
    s1.display();
    return 0;
}