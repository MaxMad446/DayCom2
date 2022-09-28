// Auto-generated module | 2026-05-11T21:20:48.149269
#include <iostream>
#include <vector>

int compute_499() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
