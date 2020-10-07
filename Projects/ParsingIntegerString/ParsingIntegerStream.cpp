#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseIntegers(string str);

int main() {
    string str;
    cout<< "Insert the string of integers separated by comma:";
    cin >> str;
    vector<int> integers = parseIntegers(str);
    cout<< "Here are the separated integeres: "<<"[";
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << " ";
    }
    cout<<"]\n";    
    return 0;
}

vector<int> parseIntegers(string str) {
    stringstream ss{str};
    vector <int> numbers{};
    int num{};
    char ch;
    while(ss>>num){
        numbers.push_back(num);
        ss>>ch;
    }
    return numbers;
}
