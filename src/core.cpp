// Auto-generated module | 2026-05-11T22:09:06.391043
#include <iostream>
#include <vector>

int compute_180() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
