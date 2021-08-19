// Auto-generated module | 2026-05-12T20:54:06.078043
#include <iostream>
#include <vector>

int compute_499() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
