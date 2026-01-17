// Auto-generated module | 2026-05-12T04:43:28.947147
#include <iostream>
#include <vector>

int compute_499() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
