#include<iostream>
using namespace std;
class person{
    private:
    string name;
    public:
    void setName(string n);
    void display();
};
void person::setName(string n){
    name=n;
}
void person::display(){
    cout<<"Name:"<<name<<endl;
}
int main(){
    person p;
    p.setName("Alice");
    p.display();
    return 0;
}