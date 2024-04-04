// Auto-generated module | 2026-05-11T22:33:02.655110
#include <iostream>
#include <vector>

int compute_530() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
