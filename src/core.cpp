// Auto-generated module | 2026-05-11T19:54:43.599973
#include <iostream>
#include <vector>

int compute_402() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
