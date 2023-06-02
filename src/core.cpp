// Auto-generated module | 2026-05-11T21:52:59.131557
#include <iostream>
#include <vector>

int compute_499() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
