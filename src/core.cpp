// Auto-generated module | 2026-05-11T20:39:22.282032
#include <iostream>
#include <vector>

int compute_140() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
