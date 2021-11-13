// Auto-generated module | 2026-05-11T20:38:45.666498
#include <iostream>
#include <vector>

int compute_395() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
