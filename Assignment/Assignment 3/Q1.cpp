#include <iostream>
using namespace std;

class Cylinder
{
    private:
double radius;
double height;
static float pi;

public : 
Cylinder (void) : radius(),  height()
{ 
 }

Cylinder ( double radius, double height) : radius(radius), height(height)
{
    this -> height =height;
    this -> radius =radius;
}

void setRadius(){
            cout << "Radius is :";
            cin >> radius;
}

void getRadius ()
{
                cout << "Radius of the cylinder is :" << radius << endl;
}

void setHeight (){
            cout << "Height is :";
            cin >> height;
}

void getHeight (){

            cout << "Height of the cylinder is :" << height << endl                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ;

}

void calculateHeight ()
{
   cout << "Volume of the cylinder is :" << radius*radius*height*pi << endl;
}

};

float Cylinder:: pi = 3.14;

int main ()
{
 Cylinder c1(2,4);
 c1.setRadius();
 c1.getRadius();
 c1.setHeight();
 c1.getHeight();
 c1.calculateHeight();
 return 0;
}