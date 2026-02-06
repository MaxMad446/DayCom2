// Auto-generated module | 2026-05-12T04:46:16.889510
#include <iostream>
#include <vector>

int compute_555() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
