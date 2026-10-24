#include <iostream>
#include <queue>
#include <string>
#include <stack>
using namespace std;
int main(){
    queue<string> q;
    q.push("printing first");
    q.push("printing second");
    q.push("printing third");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}