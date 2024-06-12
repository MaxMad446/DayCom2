// Auto-generated module | 2026-05-11T22:41:58.447466
#include <iostream>
#include <vector>

int compute_888() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
