// Auto-generated module | 2026-05-11T22:50:24.042187
#include <iostream>
#include <vector>

int compute_122() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
