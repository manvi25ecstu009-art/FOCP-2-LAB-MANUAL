#include <iostream>
using namespace std;
class area
{
    private:
    float b, h;
    public:
    area()
    {
        b = 0;
        h = 0;
    }
    void areaoftriangle()
    {
        cout<<"Enter the base and height of the triangle: ";
        cin>>b>>h;
        cout<<"Area of the triangle is: "<<0.5*b*h<<endl;
    }
};
int main()
{
    area a;
    a.areaoftriangle();
    return 0; 
}