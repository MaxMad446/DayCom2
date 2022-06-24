// Auto-generated module | 2026-05-11T21:08:04.556564
#include <iostream>
#include <vector>

int compute_333() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
