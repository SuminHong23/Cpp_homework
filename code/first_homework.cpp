#include <iostream>
#include <fstream>
using namespace std;
int main() {
    const char* firstFile = "C:\\c++_homework\\txt\\numbers.txt";
    fstream fin(firstFile, ios::in);
    if (!fin) {
        cout << firstFile << "열기 오류";
        return 0;
    }
    int d, sum = 0, count = 0;
    double avg = 0;
    while (!fin.eof()) {
        fin >> d;
        sum += d;
        count++;
    }
    avg = (double)sum / count;
    cout << "count=" << count << " average=" << avg << endl;
    fin.close();
}