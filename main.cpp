#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack {
public:
    Stack();
    vector<string> vec;
    string peek();
    vector<string> push(string val);
    vector<string> pop();
    void display();
};

Stack::Stack() {
    
}

string Stack::peek() {
    cout << vec[vec.size() - 1] << endl;
    return vec[vec.size() - 1];
}

vector<string> Stack::push(string val) {
    vec.push_back(val);
    return vec;
}

vector<string> Stack::pop() {
    vec.pop_back();
    return vec;
}

void Stack::display() {
    for (string item: vec)
        cout << item << " ";
    cout << endl;
}

int main(){
    Stack *mystack = new Stack();
    mystack->push("google");
    mystack->push("udemy");
    mystack->push("discord");
    mystack->peek();
    mystack->display();
    mystack->pop();
    mystack->display();
    mystack->pop();
    mystack->display();
    return 0;
}