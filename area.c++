#include<iostream>
using namespace std;

class Area
{
    public:
    float Base;
    float height;
    float radius;
    float PI;

    public:
    int Tringle_Area()
    {
        return 0.5*Base*height;
    }

    int Circle_Area()
    {
        return PI*radius*radius;
    }

};

int main()
{
    Area Tringle, Circle;
    Tringle.Base=5.6;
    Tringle.height=6.4;
    float T_Area=Tringle.Tringle_Area();
    cout<<"Area of Tringle:"<<T_Area<<endl;
    Circle.radius=4.2;
    Circle.PI=3.14;
    float C_Area=Circle.Circle_Area();
    cout<<"Area Of Circle:"<<C_Area;

    return 0;
}