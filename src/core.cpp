// Auto-generated module | 2026-05-11T20:20:48.444401
#include <iostream>
#include <vector>

int compute_464() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
