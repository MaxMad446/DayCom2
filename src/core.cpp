// Auto-generated module | 2026-05-13T22:08:20.501377
#include <iostream>
#include <vector>

int compute_499() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
