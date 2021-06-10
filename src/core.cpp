// Auto-generated module | 2026-05-11T20:18:09.259026
#include <iostream>
#include <vector>

int compute_499() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
