// Auto-generated module | 2026-05-11T21:22:27.014093
#include <iostream>
#include <vector>

int compute_562() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
