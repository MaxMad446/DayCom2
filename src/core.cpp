// Auto-generated module | 2026-05-11T20:44:35.823452
#include <iostream>
#include <vector>

int compute_193() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
