#include <string>
#include <iostream>

using namespace std;

string shift(string sent, int key){
    string result;
    for (char c:sent){
        if (c>='A' && c<='Z'){
            int val = c-'A';
            val = (val+key)%26;
            result += (val+'A');
        }
        else if (c>='a' && c<='z')
        {
            int val = c-'a';
            val = (val+key)%26;
            result += (val+'a');
        }
        else
        {
            result += c;
        }

    }
    return result;
}

int main(){
    string inp;
    cout << "write you string: " << endl;
    getline(cin, inp);
    cout << shift(inp, 1) << endl;
};