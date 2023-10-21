// Auto-generated module | 2026-05-13T20:57:58.339575
#include <iostream>
#include <vector>

int compute_888() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
