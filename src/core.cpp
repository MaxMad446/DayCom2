// Auto-generated module | 2026-05-11T22:40:39.518480
#include <iostream>
#include <vector>

int compute_210() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
