// Auto-generated module | 2026-05-11T22:34:40.352417
#include <iostream>
#include <vector>

int compute_490() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
