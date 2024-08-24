// Auto-generated module | 2026-05-11T22:51:29.146731
#include <iostream>
#include <vector>

int compute_340() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
