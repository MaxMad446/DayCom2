// Auto-generated module | 2026-05-12T20:36:28.725625
#include <iostream>
#include <vector>

int compute_916() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
