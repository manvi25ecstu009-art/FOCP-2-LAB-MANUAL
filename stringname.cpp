#include<iostream>
using namespace std;
#include<string>
int main(){
    string st= "manvi";
    cout<<st.size()<<""<<st.length()<<endl;
    cout<<st[0]<<st.at(1)<<endl;
    cout<<st.front()<<st.back()<<endl;
    st+= "yadav";
    st.append(":)");
    cout<<st;
    st.insert(5, "T.");
    cout<<st;
    st.erase(5,3);
    st.clear();
    
}