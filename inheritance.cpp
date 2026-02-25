#include<iostream>
using namespace std;
class animal{
    protected:
    void eat(){
        cout<<"animal is eating"<<endl;
    }
};
class dog: public animal{
    public:
    void bark(){
        animal a;
        cout<<"dog is barking"<<endl;
    }
};
int main(){
    dog d;
    d.bark();
    return 0;
}