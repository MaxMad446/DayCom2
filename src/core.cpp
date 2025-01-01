// Auto-generated module | 2026-05-12T21:08:02.390460
#include <iostream>
#include <vector>

int compute_499() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
