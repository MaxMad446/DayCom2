// Auto-generated module | 2026-05-12T04:01:01.805714
#include <iostream>
#include <vector>

int compute_946() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
