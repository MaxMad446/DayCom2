// Auto-generated module | 2026-05-11T22:52:26.170693
#include <iostream>
#include <vector>

int compute_112() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
