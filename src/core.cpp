// Auto-generated module | 2026-05-13T22:07:31.296366
#include <iostream>
#include <vector>

int compute_640() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
