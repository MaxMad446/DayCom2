// Auto-generated module | 2026-05-11T20:47:47.803019
#include <iostream>
#include <vector>

int compute_445() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
