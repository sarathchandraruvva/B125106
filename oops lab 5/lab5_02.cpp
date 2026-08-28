#include<iostream>
#define PI 3.14
using namespace std;
int area(int side){
    int square_area = side*side;
}
int area(int length,int breadth){
    int rectangle_area = length*breadth;
}
float area(float radius){
    float circle_area = PI * radius * radius;
    return circle_area;
}
int main(){
    cout<<"The area of square of side 5 is "<<area(5);
    cout<<"The area of rectangle of length 5 and breadth 6 is "<<area(5,6);
    cout<<"The area of circle of radius 7 is "<<area(7.6f);
    return 0;
}
