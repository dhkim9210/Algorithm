#include <iostream>
#include <cstring>

using namespace std;
string str_arr[1000];
int str_cnt;

int main() {
    string a = "My name is donghak Kim";
    char* str_buff = new char[1000];
    strcpy_s(str_buff, a.c_str());

    char* tok = strtok(str_buff, " ");
    while (tok != nullptr) {
        str_arr[str_cnt++] = string(tok);
        tok = strtok(nullptr, " ");
    }

    for (int n = 0; n < str_cnt; n++) {
        cout << str_arr[n] << endl;
    }
    return 0;
}