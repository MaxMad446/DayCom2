// Auto-generated module | 2026-05-13T20:28:55.831597
#include <iostream>
#include <vector>

int compute_166() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
