#include<iostream>
using namespace std;
class TriangleArea{
    public:
    double base, height;
    void data(){
        cout << "enter base and height:";
        cin>>base>>height;
    }
    double area(){
        return 0.5*base*height;
    }
};
int main(){
    TriangleArea t;
    t.data();
    cout<<"Area of triangle:"<<t.area()<<endl;
    return 0;
}