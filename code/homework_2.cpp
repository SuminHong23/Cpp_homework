#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    const char* firstFile = "C:\\c++_homework\\txt\\students.txt";
    
    
    fstream fin(firstFile, ios::in);
    if (!fin.is_open()) {
        cerr << "파일을 열 수 없습니다: " << firstFile << endl;
        return 1;
    }

    string name;
    int korean, math, english;

    
    while (fin >> name >> korean >> math >> english) {
        cout << "학생 이름: " << name << endl;
        cout << "국어: " << korean << " 수학: " << math << " 영어: " << english << endl;
    }

    
    fin.close();
    return 0;
}
