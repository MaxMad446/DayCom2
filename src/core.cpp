// Auto-generated module | 2026-05-11T20:54:04.856890
#include <iostream>
#include <vector>

int compute_488() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
