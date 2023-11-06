// Auto-generated module | 2026-05-11T22:13:30.215700
#include <iostream>
#include <vector>

int compute_499() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
