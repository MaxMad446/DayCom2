// Auto-generated module | 2026-05-11T20:27:27.585006
#include <iostream>
#include <vector>

int compute_955() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
