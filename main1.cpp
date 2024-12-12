//File directory finding(full path) problem using stack

#include <iostream>
#include <stack>
#include <string>
using namespace std;

string getFullPath(const string& path) {
    stack<string> dirStack; 
    string result = "";     
    string temp = "";       

    for (size_t i = 0; i < path.length(); i++) {
        char ch = path[i];
        if (ch == '/') { 
            if (temp == "..") {
                if (!dirStack.empty()) {
                    dirStack.pop(); 
                }
            } else if (!temp.empty() && temp != ".") {
                dirStack.push(temp);
            }
            temp = "";
        } else {
            temp += ch; 
        }
    }

    if (temp == ".." && !dirStack.empty()) {
        dirStack.pop();
    } else if (!temp.empty() && temp != ".") {
        dirStack.push(temp);
    }

    while (!dirStack.empty()) {
        result = "/" + dirStack.top() + result;
        dirStack.pop();
    }

    return result.empty() ? "/" : result; 
}

int main() {
    string path = "/home/user/../docs/./file.txt";
    cout << "Original path: " << path << endl;
    cout << "Full path: " << getFullPath(path) << endl;

    return 0;
}

