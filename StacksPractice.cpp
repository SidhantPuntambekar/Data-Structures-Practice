#include <iostream>
#include <stack>
using namespace std;

void printStack(stack <string> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

int main()
{
    stack <string> sports;
    sports.push("Basketball");
    sports.push("Football");
    sports.push("Mixed Martial Arts");
    sports.push("Boxing");
    sports.push("Futbol");

    cout << "The stack is: " << endl;
    printStack(sports);

    cout << "\nsports.size() : " << sports.size(); 
    cout << "\nsports.top() : " << sports.top();
}