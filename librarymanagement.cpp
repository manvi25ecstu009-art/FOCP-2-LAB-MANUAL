#include <iostream>
using namespace std;
class library{
protected:
    int bookID;
    string title;
    string author;
public:
    library(int id,string t,string a){
        bookID = id;
        title = t;
        author = a;
    }
    virtual void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class IssueBook:public library{
private:
    string issuedTo;
public:
    IssueBook(int id, string t, string a, string name)
        : library(id,t,a){
        issuedTo=name;
    }
    void display()override{
        library::display();
        cout<<"Issued To: "<<issuedTo<<endl;
    }
};
int main(){
    int id;
    string title, author, name;
    cout<<"Enter Book ID: ";
    cin>>id;
    cin.ignore();
    cout<<"Enter Book Title: ";
    getline(cin, title);
    cout<<"Enter Author Name: ";
    getline(cin, author);
    cout<<"Enter Issued To: ";
    getline(cin, name);
    IssueBook b1(id, title, author, name);
    cout<<"\nBook Details"<<endl;
    b1.display();
    return 0;
}