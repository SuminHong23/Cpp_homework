#include <iostream>
#include <vector>
#include <chrono> 

using namespace std;
using namespace std::chrono;

int fibo(int n) {
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n = 10; 
    
    vector<int> fibs;
    
    auto start = high_resolution_clock::now();
    
    for (int i = 0; i < n; ++i) {
        fibs.push_back(fibo(i)); 
    }
    
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    cout << "피보나치 수열: ";
    for (int i = 0; i < n; ++i) {
        cout << fibs[i] << " ";
    }
    cout << endl;

    cout << "재귀 함수 실행 시간: " << duration.count() << " 밀리초" << endl;

    return 0;
}
