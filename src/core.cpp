// Auto-generated module | 2026-05-11T20:36:11.686041
#include <iostream>
#include <vector>

int compute_977() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
