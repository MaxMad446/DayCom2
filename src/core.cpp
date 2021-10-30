// Auto-generated module | 2026-05-11T20:36:52.647539
#include <iostream>
#include <vector>

int compute_674() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
